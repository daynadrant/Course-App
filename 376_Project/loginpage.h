#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include "database.h"

namespace Ui {
class LoginPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    explicit LoginPage(
        Database* database,
        QWidget* parent = nullptr);
    ~LoginPage();

private slots:
    void on_createButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::LoginPage *ui;

    Database* database;
};

#endif // LOGINPAGE_H
