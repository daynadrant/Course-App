#include "database.h"

Database::Database(QObject* parent) : QObject(parent)
{

}

Database::~Database()
{

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

void Database::createCourse(const QString& name)
{
    this->courses.push_back(name);
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
                this->accessToken = obj["access_token"].toString();
                this->refreshToken = obj["refresh_token"].toString();
                this->userId = obj["user"].toObject()["id"].toString();

                fetchUserData();
            }
            else
            {
                qDebug() << "Failed to parse JSON response.";
            }
        }
        else
        {
            qDebug() << "Login failed";
        }

        reply->deleteLater();
    });
}

void Database::fetchUserData()
{
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/rest/v1/profiles?select=username,rank&id=eq." + this->userId);
    QNetworkRequest request(url);

    // headers
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", this->apiKey);
    request.setRawHeader("Authorization", QString("Bearer %1").arg(this->accessToken).toUtf8());

    QNetworkReply *reply = manager.get(request);

    QObject::connect(reply, &QNetworkReply::finished, [reply, this]() {
        if (reply->error() == QNetworkReply::NoError)
        {
            QByteArray response_data = reply->readAll();
            QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);

            if (jsonDoc.isArray())
            {
                QJsonArray arr = jsonDoc.array();
                if (!arr.isEmpty())
                {
                    QJsonObject obj = arr[0].toObject();

                    this->username = obj["username"].toString();
                    this->rank = static_cast<RankType>(obj["rank"].toInt());
                    this->studyHours = obj["study_hours"].toInt();

                    populateHomePage(this->username, this->rank, this->studyHours);
                }
            }
        }
        else
        {
            qDebug() << "Error fetching profile:" << reply->errorString();
        }

        reply->deleteLater();
    });
}
