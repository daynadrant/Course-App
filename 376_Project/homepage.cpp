#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(Database* database, QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::HomePage)
    , database(database)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_logoutButton_clicked()
{
    emit logout();
}

