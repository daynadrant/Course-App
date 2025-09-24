#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Add pages
    ui->stackedWidget->addWidget(login);
    ui->stackedWidget->addWidget(home);

    connect(login, &LoginPage::loginSuccess, this, [this]() {
        ui->stackedWidget->setCurrentWidget(home);
    });

    ui->stackedWidget->setCurrentWidget(login);
}

MainWindow::~MainWindow()
{
    delete ui;
}

