#include "allcoursespage.h"
#include "ui_allcoursespage.h"

AllCoursesPage::AllCoursesPage(Database* database, QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::AllCoursesPage)
    , database(database)
{
    ui->setupUi(this);
}

AllCoursesPage::~AllCoursesPage()
{
    delete ui;
}

void AllCoursesPage::on_backButton_clicked()
{
    emit goBackHome();
}

void AllCoursesPage::refreshCourses()
{
    ui->coursesList->clear();

    // You’ll need to loop through Database’s vector of courses.
    // But since it's private, add a helper method to Database.
    extern Database* globalDatabase;  // if you made it global, or just use this->database if passed correctly

    if (!database)
        return;

    // Since courses is private, we'll add a getter for it in Database (next step)
    const std::vector<Course>& allCourses = database->getCourses();

    for (const Course& course : allCourses)
        ui->coursesList->addItem(course.getName());

    updateCareerRank();
    updateStats();
}

void AllCoursesPage::updateCareerRank()
{
    if (!database)
        return;

    const std::vector<Course>& allCourses = database->getCourses();

    if (allCourses.empty())
    {
        ui->careerRankLabel->setText("Career Rank: Beginner");
        ui->averageGradeLabel->setText("Average Grade: --%");
        ui->rankIconLabel->clear();
        return;
    }

    // Calculate the weighted average of all courses
    double totalScore = 0.0;
    int countedCourses = 0;

    for (const Course& course : allCourses)
    {
        double grade = course.getGrade();
        double hours = course.getStudyHours();
        double courseScore = (grade * 0.7) + (hours * 0.3);

        totalScore += courseScore;
        countedCourses++;
    }

    double avgScore = totalScore / countedCourses;

    // Determine rank
    RankType careerRank;
    if (avgScore >= 80)
        careerRank = RankType::SCHOLAR;
    else if (avgScore >= 70)
        careerRank = RankType::PRODIGY;
    else if (avgScore >= 55)
        careerRank = RankType::RISINGSTAR;
    else if (avgScore >= 45)
        careerRank = RankType::LEARNER;
    else
        careerRank = RankType::BEGINNER;

    // Update rank text and icon
    QString rankText;
    QString imagePath;

    switch (careerRank)
    {
    case RankType::BEGINNER:
        rankText = "Career Rank: Beginner";
        imagePath = ":/ranks/images/beginner.png";
        break;
    case RankType::LEARNER:
        rankText = "Career Rank: Learner";
        imagePath = ":/ranks/images/learner.png";
        break;
    case RankType::RISINGSTAR:
        rankText = "Career Rank: Rising Star";
        imagePath = ":/ranks/images/risingstar.png";
        break;
    case RankType::PRODIGY:
        rankText = "Career Rank: Prodigy";
        imagePath = ":/ranks/images/prodigy.png";
        break;
    case RankType::SCHOLAR:
        rankText = "Career Rank: Scholar";
        imagePath = ":/ranks/images/scholar.png";
        break;
    }

    ui->careerRankLabel->setText(rankText);
    ui->averageGradeLabel->setText(QString("Average Grade: %1%").arg(avgScore, 0, 'f', 1));
    ui->rankIconLabel->setPixmap(QPixmap(imagePath));
    ui->rankIconLabel->setScaledContents(true);
}

void AllCoursesPage::updateStats()
{
    if (!database)
        return;

    const std::vector<Course>& allCourses = database->getCourses();
    if (allCourses.empty())
    {
        ui->efficientCourseLabel->setText("Most Efficient Course: --");
        ui->highestGradeLabel->setText("Highest Grade Achieved: --");
        ui->lowestGradeLabel->setText("Lowest Grade Achieved: --");
        ui->mostHoursLabel->setText("Course with Most Hours: --");
        ui->longestSessionLabel->setText("Longest Study Session: --");
        return;
    }

    const Course* mostEfficient = nullptr;
    const Course* highestGrade = nullptr;
    const Course* lowestGrade = nullptr;
    const Course* mostHours = nullptr;

    double bestEfficiencyScore = -1;

    for (const Course& course : allCourses)
    {
        double grade = course.getGrade();
        double hours = course.getStudyHours();

        if (!highestGrade || grade > highestGrade->getGrade())
            highestGrade = &course;

        if (!lowestGrade || grade < lowestGrade->getGrade())
            lowestGrade = &course;

        if (!mostHours || hours > mostHours->getStudyHours())
            mostHours = &course;

        // Efficiency score = grade / (hours + 1)  (+1 avoids div by 0)
        double efficiency = grade / (hours + 1);
        if (efficiency > bestEfficiencyScore)
        {
            bestEfficiencyScore = efficiency;
            mostEfficient = &course;
        }
    }

    // Update labels
    ui->highestGradeLabel->setText(
        QString("Highest Grade Achieved: %1 (%2%)")
            .arg(highestGrade ? highestGrade->getName() : "--")
            .arg(highestGrade ? highestGrade->getGrade() : 0));

    ui->lowestGradeLabel->setText(
        QString("Lowest Grade Achieved: %1 (%2%)")
            .arg(lowestGrade ? lowestGrade->getName() : "--")
            .arg(lowestGrade ? lowestGrade->getGrade() : 0));

    ui->mostHoursLabel->setText(
        QString("Course with Most Hours: %1 (%2h)")
            .arg(mostHours ? mostHours->getName() : "--")
            .arg(mostHours ? mostHours->getStudyHours() : 0));

    ui->efficientCourseLabel->setText(
        QString("Most Efficient Course: %1 (%.1f)")
            .arg(mostEfficient ? mostEfficient->getName() : "--")
            .arg(bestEfficiencyScore));
}
