#include "database.h"

Database::Database(QObject* parent) : QObject(parent)
{

}

Database::~Database()
{

}

void Database::clear()
{
    this->courseData.clear();
    this->friendData.clear();
}

void Database::createUser(const QString& username,
                          const QString& email,
                          const QString& password)
{
    // Request type
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/auth/v1/signup");

    loginRequest(url, username, email, password);
}

void Database::loginUser(const QString& username,
                         const QString& email,
                         const QString& password)
{
    // Request type
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/auth/v1/token?grant_type=password");

    loginRequest(url, username, email, password);
}

bool Database::createCourse(const QString& courseName)
{
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/courses");

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", this->apiKey);
    request.setRawHeader("Authorization", QString("Bearer %1").arg(this->userData.getAccessToken()).toUtf8());

    QJsonObject json;
    json["profile_id"] = this->userData.getUserId();
    json["class_name"] = courseName;

    QJsonDocument doc(json);
    QByteArray data = doc.toJson();

    QNetworkReply* reply = manager.post(request, data);

    // Loop until completed
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Error creating course:" << reply->errorString();
        reply->deleteLater();
        return false;
    }

    reply->deleteLater();

    // Add to local database
    this->courseData.addCourse(courseName);

    qDebug() << "Course created successfully";
    return true;
}

void Database::loadCoursePage(const QString& courseName)
{
    Course* course = this->courseData.findCourse(courseName);

    emit populateCoursePage(course);
}


bool Database::addFriend(const QString& userName)
{
    // Search to ensure that the user exists
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/profiles?select=id,username,rank,study_hours&username=eq." + userName);
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", this->apiKey);
    request.setRawHeader("Authorization", QString("Bearer %1").arg(this->userData.getAccessToken()).toUtf8());

    QNetworkReply* reply = manager.get(request);

    // Create a local event loop that waits until the request is done
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec(); // waits here until the request completes

    // Error fetching data
    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Error searching friend:" << reply->errorString();
        reply->deleteLater();
        return false;
    }

    QByteArray response = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(response);
    reply->deleteLater();

    // No data was returned
    if (!doc.isArray() || doc.array().isEmpty()) {
        qDebug() << "Friend not found.";
        return false;
    }

    QJsonObject obj = doc.array().first().toObject();
    QString friendId = obj.value("id").toString();
    RankType rank = static_cast<RankType>(obj.value("rank").toInt());
    int studyHours = obj.value("study_hours").toInt();
    QString userId = this->userData.getUserId();

    // Create the friendship in local and remote database
    request.setUrl(QUrl("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/friends"));

    QJsonObject body;
    body["profile_id"] = userId;
    body["friend_id"] = friendId;

    reply = manager.post(request, QJsonDocument(body).toJson());

    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Error inserting friendship:" << reply->errorString();
        reply->deleteLater();
        return false;
    }

    reply->deleteLater();

    // Add friend to local database
    this->friendData.addFriend(userName, rank, studyHours);

    qDebug() << "Friend successfully added!";
    return true;
}

void Database::loadFriendPage(const QString& friendName)
{
    Friend* f = this->friendData.findFriend(friendName);

    emit populateFriendPage(f);
}

void Database::addStudyHours(int hours)
{
    int studyHours = this->getStudyHours() + hours;
    this->userData.setStudyHours(studyHours);

    updateStudyHours(studyHours);
}

void Database::setStudyHours(int totalHours)
{
    this->userData.setStudyHours(totalHours);
    updateStudyHours(totalHours);
}

const std::vector<Course>& Database::getCourses() const
{
    return this->courseData.getCourses();
}

RankType Database::getCareerRank() const
{
    if (this->courseData.isEmpty())
        return RankType::BEGINNER;

    double totalScore = 0.0;
    int countedCourses = 0;

    auto courses = courseData.getCourses();
    for (const Course& course : courses)
    {
        double grade = course.getGrade();          // assuming 0–100
        double studyHours = course.getStudyHours(); // total hours logged

        // compute individual course score
        double courseScore = (grade * 0.7) + (studyHours * 0.3);

        totalScore += courseScore;
        countedCourses++;
    }

    if (countedCourses == 0)
        return RankType::BEGINNER;

    double avgScore = totalScore / countedCourses;

    if (avgScore >= 80)
        return RankType::SCHOLAR;
    else if (avgScore >= 70)
        return RankType::PRODIGY;
    else if (avgScore >= 55)
        return RankType::RISINGSTAR;
    else if (avgScore >= 45)
        return RankType::LEARNER;
    else if (avgScore >= 35)
        return RankType::BEGINNER;
    else
        return RankType::BEGINNER;
}

const std::vector<Friend>& Database::getFriends() const
{
    return this->friendData.getFriends();
}


QString Database::getUsername() const
{
    return this->userData.getUsername();
}

RankType Database::getRank() const
{
    return this->userData.getRank();
}

int Database::getStudyHours() const
{
    return this->userData.getStudyHours();
}

void Database::loginRequest(const QUrl& url,
                            const QString& username,
                            const QString& email,
                            const QString& password)
{
    // Set up request
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", this->apiKey);

    // Json data
    QJsonObject data;
    data["username"] = username;

    QJsonObject credentials;
    credentials["email"] = email;
    credentials["password"] = password;
    credentials["data"] =  data;

    QJsonDocument doc(credentials);
    QByteArray jsonData = doc.toJson();

    // Send
    QNetworkReply* reply = manager.post(request, jsonData);

    // Connect finished signal
    QObject::connect(reply, &QNetworkReply::finished, [reply, this]() {
        if (reply->error() == QNetworkReply::NoError)
        {
            QByteArray response_data = reply->readAll();
            QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);

            if (!jsonDoc.isNull() && jsonDoc.isObject())
            {
                QJsonObject obj = jsonDoc.object();

                // Get user specific database variables from response
                this->userData.setAccessToken(obj["access_token"].toString());
                this->userData.setRefreshToken(obj["refresh_token"].toString());
                this->userData.setUserId(obj["user"].toObject()["id"].toString());

                fetchUserData();
            }
            else
            {
                qDebug() << "Failed to parse JSON response.";
            }
        }
        else
        {
            emit loginFailed();
            qDebug() << "Login failed";
        }

        reply->deleteLater();
    });
}

void Database::fetchUserData()
{
    // Select all data we want from the profiles table
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/profiles?select=username,rank,study_hours&id=eq."
             + this->userData.getUserId());
    QNetworkRequest request(url);

    // headers
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", this->apiKey);
    request.setRawHeader("Authorization", QString("Bearer %1").arg(this->userData.getAccessToken()).toUtf8());

    QNetworkReply* reply = manager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Error fetching profile:" << reply->errorString();
        return;
    }

    QByteArray response = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(response);
    reply->deleteLater();

    // No data was returned
    if (!doc.isArray() || doc.array().isEmpty())
    {
        qDebug() << "user not found.";
        return;
    }

    QJsonObject obj = doc.array().first().toObject();

    this->userData.setUsername(obj["username"].toString());
    this->userData.setRank(static_cast<RankType>(obj["rank"].toInt()));
    this->userData.setStudyHours(obj["study_hours"].toInt());

    reply->deleteLater();

    // Select all data we want from courses table
    request.setUrl("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/courses?profile_id=eq."
                   + this->userData.getUserId());

    reply = manager.get(request);

    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Error fetching courses:" << reply->errorString();
        return;
    }

    response = reply->readAll();
    doc = QJsonDocument::fromJson(response);
    reply->deleteLater();

    // No data was returned
    if (!doc.isArray() || doc.array().isEmpty())
    {
        qDebug() << "No courses found.";
        emit populateHomePage();
        return;
    }

    // Add all of the courses
    QJsonArray courses = doc.array();
    for (const QJsonValue &val : courses)
    {
        QJsonObject obj = val.toObject();

        this->courseData.addCourse(
            obj["class_name"].toString(),
            obj["grade"].toDouble(),
            obj["study_hours"].toDouble(),
            static_cast<RankType>(obj["rank"].toInt()),
            obj["enrolled"].toBool());
    }

    reply->deleteLater();

    // Select all data we want from friends table
    request.setUrl("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/friends?profile_id=eq."
                   + this->userData.getUserId());

    reply = manager.get(request);

    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() != QNetworkReply::NoError)
    {
        qDebug() << "Error fetching courses:" << reply->errorString();
        return;
    }

    response = reply->readAll();
    doc = QJsonDocument::fromJson(response);
    reply->deleteLater();

    // No data was returned
    if (!doc.isArray() || doc.array().isEmpty())
    {
        qDebug() << "No friends found.";
        emit populateHomePage();
        return;
    }

    // Add all of the friends
    QJsonArray friends = doc.array();
    for (const QJsonValue &val : friends)
    {
        QJsonObject obj = val.toObject();

        request.setUrl("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/profiles?select=username,rank,study_hours&id=eq."
                       + obj["friend_id"].toString());

        reply = manager.get(request);

        QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        if (reply->error() != QNetworkReply::NoError)
        {
            qDebug() << "Error fetching user:" << reply->errorString();
            return;
        }

        response = reply->readAll();
        doc = QJsonDocument::fromJson(response);
        reply->deleteLater();

        QJsonObject friendObj = doc.array().first().toObject();

        this->friendData.addFriend(
            friendObj["username"].toString(),
            static_cast<RankType>(friendObj["rank"].toInt()),
            friendObj["study_hours"].toInt());
    }

    reply->deleteLater();

    // Refresh the home page
    emit populateHomePage();
}

void Database::updateStudyHours(int newTotal)
{
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/profiles?id=eq." + this->userData.getUserId());
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", this->apiKey);
    request.setRawHeader("Authorization", QString("Bearer %1").arg(this->userData.getAccessToken()).toUtf8());
    //request.setRawHeader("Prefer", "return=representation");

    QJsonObject body;
    body["study_hours"] = newTotal;
    QJsonDocument doc(body);
    QByteArray jsonData = doc.toJson();

    QNetworkReply* reply = manager.sendCustomRequest(request, "PATCH", jsonData);

    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if (reply->error() == QNetworkReply::NoError)
    {
        this->userData.setStudyHours(newTotal);
        emit refreshStudyHours();

        qDebug() << "Study hours updated successfully!";
    } else
    {
        qDebug() << "Error updating study hours:" << reply->errorString();
        qDebug() << "Response:" << reply->readAll();
    }

    reply->deleteLater();
}
