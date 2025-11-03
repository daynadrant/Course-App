#ifndef DATABASE_H
#define DATABASE_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QEventLoop>
#include "userdata.h"
#include "coursedata.h"
#include "friend_data.h"
#include "rank_type.h"
#include "course.h"

class Database : public QObject
{
    Q_OBJECT

signals:
    void populateHomePage();
    void populateCoursePage(Course* course);
    void loginFailed();
    void refreshStudyHours();

private:
    const QByteArray apiKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBh" \
        "YmFzZSIsInJlZiI6ImdtaHJzYmNkemtzbGxodnJuY2duIiwicm9sZ" \
        "SI6ImFub24iLCJpYXQiOjE3NTgxMTY2NjIsImV4cCI6MjA3MzY5Mj" \
        "Y2Mn0.INq1KnsPtG1xZpedWNIBloPVz2nNqoaZs-CYGG0nenE";

    QNetworkAccessManager manager;

    // Data
    UserData userData;
    CourseData courseData;
    FriendData friendData;

public:
    explicit Database(QObject* parent = nullptr);
    ~Database();

    void clear();

    void createUser(const QString& username,
                    const QString& email,
                    const QString& password);

    void loginUser(const QString& username,
                   const QString& email,
                   const QString& password);

    bool createCourse(const QString& courseName);
    void loadCoursePage(const QString& courseName);

    bool addFriend(const QString& userName);

    void addStudyHours(int hours);
    void setStudyHours(int totalHours);

    const std::vector<Course>& getCourses() const;
    RankType getCareerRank() const;

    QString getUsername() const;
    RankType getRank() const;
    int getStudyHours() const;

private:
    void loginRequest(const QUrl& url,
                      const QString& username,
                      const QString& email,
                      const QString& password);

    void fetchUserData();

    void addFriend();

    void updateStudyHours(int newTotal);
};

#endif // DATABASE_H
