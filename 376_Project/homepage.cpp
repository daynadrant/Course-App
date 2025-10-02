#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(Database* database, QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::HomePage)
    , database(database)
{
    ui->setupUi(this);

    connect(database, &Database::populateHomePage, this,
            [this](QString username, RankType rank, int studyHours)
    {
        // Set all of the ui for the home page
        ui->usernameLabel->setText("Username: " + username);
        ui->studyHoursLabel->setText("Total Study Hours: " + QString::number(studyHours));

        // Set rank image
        QPixmap pixmap;
        switch(rank)
        {
        case RankType::BEGINNER:
            pixmap = QPixmap(":/ranks/images/beginner.png");
            break;
        case RankType::LEARNER:
            pixmap = QPixmap(":/ranks/images/learner.png");
            break;
        case RankType::RISINGSTAR:
            pixmap = QPixmap(":/ranks/images/risingstar.png");
            break;
        case RankType::PRODIGY:
            pixmap = QPixmap(":/ranks/images/prodigy.png");
            break;
        case RankType::SCHOLAR:
            pixmap = QPixmap(":/ranks/images/scholar.png");
            break;
        }

        ui->imageLabel->setPixmap(pixmap);

        // Ready to switch to the home page
        emit login();
    });
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_logoutButton_clicked()
{
    emit logout();
}


void HomePage::on_addCourseButton_clicked()
{
    CourseCreate popup(this);
    popup.setModal(true);
    int result = popup.exec();

    if (result == QDialog::Accepted)
    {
        QString courseName = popup.getCourseName();
        ui->coursesList->addItem(courseName);
        database->createCourse(courseName);
    }
    else if (result == QDialog::Rejected)
    {
        qDebug() << "Course creation canceled";
    }
}

