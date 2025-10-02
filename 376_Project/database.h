#ifndef DATABASE_H
#define DATABASE_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <vector>
#include "rank_type.h"
#include "courses.h"

class Database : public QObject
{
    Q_OBJECT

signals:
    void populateHomePage(const QString& username,
                     RankType rank,
                     int studyHours);

private:
    const QByteArray apiKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBh" \
        "YmFzZSIsInJlZiI6ImdtaHJzYmNkemtzbGxodnJuY2duIiwicm9sZ" \
        "SI6ImFub24iLCJpYXQiOjE3NTgxMTY2NjIsImV4cCI6MjA3MzY5Mj" \
        "Y2Mn0.INq1KnsPtG1xZpedWNIBloPVz2nNqoaZs-CYGG0nenE";

    QNetworkAccessManager manager;

    // User data
    QString userId;
    QString accessToken;
    QString refreshToken;
    QString username;
    RankType rank;
    int studyHours;
    std::vector<QString> friends;
    std::vector<Course> courses;

public:
    explicit Database(QObject* parent = nullptr);
    ~Database();

    void createUser(const QString& username,
                    const QString& email,
                    const QString& password);

    void loginUser(const QString& username,
                   const QString& email,
                   const QString& password);

    void createCourse(const QString& name);

private:
    void loginRequest(const QUrl& url,
                      const QString& username,
                      const QString& email,
                      const QString& password);

    void fetchUserData();
};

#endif // DATABASE_H
