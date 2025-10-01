#include "loginpage.h"
#include "ui_loginpage.h"

LoginPage::LoginPage(Database* database, QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
    , database(database)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_createButton_clicked()
{
    database->createUser(ui->usernameEdit->text(),
                        ui->emailEdit->text(),
                        ui->passwordEdit->text());
}

void LoginPage::on_loginButton_clicked()
{
    database->loginUser(ui->usernameEdit->text(),
                       ui->emailEdit->text(),
                       ui->passwordEdit->text());
}
