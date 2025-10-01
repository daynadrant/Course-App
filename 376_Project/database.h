#ifndef DATABASE_H
#define DATABASE_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>

class Database : public QObject
{
    Q_OBJECT

signals:
    void loginSuccess();
    void loginFailure();

public:
    explicit Database(QObject* parent = nullptr);
    ~Database();

    void createUser(QString username,
                    QString email,
                    QString password);
    void loginUser(QString username,
                   QString email,
                   QString password);

private:
    const QByteArray api_key = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBh" \
        "YmFzZSIsInJlZiI6ImdtaHJzYmNkemtzbGxodnJuY2duIiwicm9sZ" \
        "SI6ImFub24iLCJpYXQiOjE3NTgxMTY2NjIsImV4cCI6MjA3MzY5Mj" \
        "Y2Mn0.INq1KnsPtG1xZpedWNIBloPVz2nNqoaZs-CYGG0nenE";

    QNetworkAccessManager manager;
};

#endif // DATABASE_H
