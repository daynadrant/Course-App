#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(Database* database, QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::HomePage)
    , database(database)
{
    ui->setupUi(this);

    connect(database, &Database::populateHomePage, this, [this]()
    {
        // Set all of the ui for the home page
        ui->usernameLabel->setText("Username: " + this->database->getUsername());
        ui->studyHoursLabel->setText("Total Study Hours: " + QString::number(this->database->getStudyHours()));

        // Set rank image
        QPixmap pixmap;
        switch(this->database->getRank())
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

        // Add courses to course list
        auto courses = this->database->getCourses();
        for (const Course& course : courses)
        {
            ui->coursesList->addItem(course.getName());
        }

        // Ready to switch to the home page
        emit login();
    });

    connect(database, &Database::refreshStudyHours, this, [this]()
    {
        // Set all of the ui for the home page
        ui->studyHoursLabel->setText("Total Study Hours: " + QString::number(this->database->getStudyHours()));
    });
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_logoutButton_clicked()
{
    // Clear list views
    ui->coursesList->clear();
    ui->friendsList->clear();


    emit logout();
}


void HomePage::on_addCourseButton_clicked()
{
    CourseCreateDialog popup(this);
    popup.setModal(true);

    if (popup.exec() == QDialog::Accepted)
    {
        QString courseName = popup.getCourseName();
        bool duplicate{};

        // No duplicate courses
        for (int i = 0; i < ui->coursesList->count(); ++i)
        {
            QListWidgetItem* item = ui->coursesList->item(i);
            if (item->text().compare(courseName, Qt::CaseInsensitive) == 0)
            {
                ErrorDialog* error = new ErrorDialog("Course already exists.", this);
                error->show();

                duplicate = true;
                break;
            }
        }

        // Only add if it is not a duplicate
        if (!duplicate)
        {
            bool success = database->createCourse(courseName);

            if (!success)
            {
                ErrorDialog* error = new ErrorDialog("Error creating course.", this);
                error->show();
            }
            else
            {
                ui->coursesList->addItem(courseName);
            }
        }
    }
}


void HomePage::on_helpButton_clicked()
{
    HelpDialog help(this);
    help.exec();
}

void HomePage::on_coursesList_itemDoubleClicked(QListWidgetItem* item)
{
    database->loadCoursePage(item->text());
}

void HomePage::on_addFriendButton_clicked()
{
    AddFriendDialog popup(this);
    popup.setModal(true);

    if (popup.exec() == QDialog::Accepted)
    {
        QString friendName = popup.getFriendName();
        bool duplicate{};

        // No duplicate friends
        for (int i = 0; i < ui->friendsList->count(); ++i)
        {
            QListWidgetItem* item = ui->friendsList->item(i);
            if (item->text().compare(friendName, Qt::CaseInsensitive) == 0)
            {
                ErrorDialog* error = new ErrorDialog("Friend already added.", this);
                error->show();

                duplicate = true;
                break;
            }
        }

        // Only add if it is not a duplicate
        if (!duplicate)
        {
            bool success = database->addFriend(friendName);

            if (!success)
            {
                ErrorDialog* error = new ErrorDialog("Error adding friend.", this);
                error->show();
            }
            else
            {
                ui->friendsList->addItem(friendName);
            }
        }
    }
}


void HomePage::on_logHoursButton_clicked()
{
    LogHoursDialog popup(this);
    popup.setModal(true);
    int result = popup.exec();
    if (result == QDialog::Accepted)
    {
        double hours = popup.getStudyHours();
        //m_studyHours += hours;
        //ui->studyHoursLabel->setText("Total Study Hours: " + QString::number(m_studyHours, 'f', 1));
        database->addStudyHours(static_cast<int>(hours));
    }
    else
    {
        qDebug() << "Log Study Hours canceled";
    }
}

void HomePage::on_studyTimerButton_clicked()
{
    TimerDialog popup(this);
    popup.setModal(true);

    int result = popup.exec();
    if (result == QDialog::Accepted)
    {
        double hours = popup.getStudyHours();
        database->addStudyHours(static_cast<int>(hours));
    }
    else
    {
        qDebug() << "Timer canceled";
    }

}

void HomePage::on_coursesButton_clicked()
{
    emit goToCourses();
}
