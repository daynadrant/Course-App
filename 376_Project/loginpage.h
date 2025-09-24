#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>


#define API_KEY "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBh" \
"YmFzZSIsInJlZiI6ImdtaHJzYmNkemtzbGxodnJuY2duIiwicm9sZ" \
    "SI6ImFub24iLCJpYXQiOjE3NTgxMTY2NjIsImV4cCI6MjA3MzY5Mj" \
    "Y2Mn0.INq1KnsPtG1xZpedWNIBloPVz2nNqoaZs-CYGG0nenE"

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

signals:
    void loginSuccess();

private slots:
    void on_createButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::LoginPage *ui;

    QNetworkAccessManager manager;
};

#endif // LOGINPAGE_H
