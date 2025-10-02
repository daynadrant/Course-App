#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , database(new Database(this))
{
    ui->setupUi(this);
    login = new LoginPage(database, this);
    home = new HomePage(database, this);

    // Add pages
    ui->stackedWidget->addWidget(login);
    ui->stackedWidget->addWidget(home);

    // Add listeners
    connect(home, &HomePage::login, this, [this]() {
        ui->stackedWidget->setCurrentWidget(home);
    });

    connect(home, &HomePage::logout, this, [this]() {
        ui->stackedWidget->setCurrentWidget(login);
    });

    // Set the startup page
    ui->stackedWidget->setCurrentWidget(login);
}

MainWindow::~MainWindow()
{
    delete ui;
}

