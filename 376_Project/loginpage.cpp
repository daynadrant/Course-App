#include "loginpage.h"
#include "ui_loginpage.h"

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_createButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString email = ui->emailEdit->text();
    QString password = ui->passwordEdit->text();

    // Set up request
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/auth/v1/signup");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", API_KEY);

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
    QNetworkReply *reply = manager.post(request, jsonData);

    // Connect finished signal
    QObject::connect(reply, &QNetworkReply::finished, [reply, this]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response_data = reply->readAll();
            qDebug() << "Response:" << response_data;

            emit loginSuccess();
        }
        else {
            qDebug() << "Error:" << reply->errorString();
        }

        reply->deleteLater();
    });
}


void LoginPage::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString email = ui->emailEdit->text();
    QString password = ui->passwordEdit->text();

    // Set up request
    QUrl url("https://gmhrsbcdzksllhvrncgn.supabase.co/auth/v1/token?grant_type=password");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("apikey", API_KEY);

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
    QNetworkReply *reply = manager.post(request, jsonData);

    // Connect finished signal
    QObject::connect(reply, &QNetworkReply::finished, [reply, this]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response_data = reply->readAll();
            qDebug() << "Response:" << response_data;

            emit loginSuccess();
        }
        else {
            qDebug() << "Error:" << reply->errorString();
        }

        reply->deleteLater();
    });
}
