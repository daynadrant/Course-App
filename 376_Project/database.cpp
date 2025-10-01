#include "database.h"

Database::Database(QObject* parent) : QObject(parent)
{

}

Database::~Database()
{

}

void Database::createUser(QString username, QString email, QString password)
{
    // Set up request
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/auth/v1/signup");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", api_key);

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
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response_data = reply->readAll();

            emit loginSuccess();
        }
        else
        {
            emit loginFailure();
        }

        reply->deleteLater();
    });
}

void Database::loginUser(QString username, QString email, QString password)
{
    // Set up request
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/auth/v1/token?grant_type=password");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", api_key);

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
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response_data = reply->readAll();

            emit loginSuccess();
        }
        else
        {
            emit loginFailure();
        }

        reply->deleteLater();
    });
}
