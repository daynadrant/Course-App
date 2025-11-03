/********************************************************************************
** Form generated from reading UI file 'allcoursespage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLCOURSESPAGE_H
#define UI_ALLCOURSESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllCoursesPage
{
public:
    QGroupBox *statsGroupBox;
    QLabel *longestSessionLabel;
    QLabel *mostHoursLabel;
    QLabel *highestGradeLabel;
    QLabel *lowestGradeLabel;
    QLabel *efficientCourseLabel;
    QGroupBox *coursesGroupBox;
    QListWidget *coursesList;
    QLabel *averageGradeLabel;
    QLabel *rankIconLabel;
    QPushButton *backButton;
    QLabel *careerRankLabel;

    void setupUi(QWidget *AllCoursesPage)
    {
        if (AllCoursesPage->objectName().isEmpty())
            AllCoursesPage->setObjectName("AllCoursesPage");
        AllCoursesPage->resize(900, 600);
        statsGroupBox = new QGroupBox(AllCoursesPage);
        statsGroupBox->setObjectName("statsGroupBox");
        statsGroupBox->setGeometry(QRect(590, 110, 221, 191));
        longestSessionLabel = new QLabel(statsGroupBox);
        longestSessionLabel->setObjectName("longestSessionLabel");
        longestSessionLabel->setGeometry(QRect(10, 30, 211, 16));
        mostHoursLabel = new QLabel(statsGroupBox);
        mostHoursLabel->setObjectName("mostHoursLabel");
        mostHoursLabel->setGeometry(QRect(10, 60, 211, 16));
        highestGradeLabel = new QLabel(statsGroupBox);
        highestGradeLabel->setObjectName("highestGradeLabel");
        highestGradeLabel->setGeometry(QRect(10, 90, 211, 16));
        lowestGradeLabel = new QLabel(statsGroupBox);
        lowestGradeLabel->setObjectName("lowestGradeLabel");
        lowestGradeLabel->setGeometry(QRect(10, 120, 211, 16));
        efficientCourseLabel = new QLabel(statsGroupBox);
        efficientCourseLabel->setObjectName("efficientCourseLabel");
        efficientCourseLabel->setGeometry(QRect(10, 150, 211, 16));
        coursesGroupBox = new QGroupBox(AllCoursesPage);
        coursesGroupBox->setObjectName("coursesGroupBox");
        coursesGroupBox->setGeometry(QRect(120, 110, 131, 191));
        coursesList = new QListWidget(coursesGroupBox);
        coursesList->setObjectName("coursesList");
        coursesList->setGeometry(QRect(10, 30, 111, 151));
        averageGradeLabel = new QLabel(AllCoursesPage);
        averageGradeLabel->setObjectName("averageGradeLabel");
        averageGradeLabel->setGeometry(QRect(351, 390, 181, 20));
        averageGradeLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        rankIconLabel = new QLabel(AllCoursesPage);
        rankIconLabel->setObjectName("rankIconLabel");
        rankIconLabel->setGeometry(QRect(340, 160, 191, 201));
        rankIconLabel->setScaledContents(true);
        rankIconLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backButton = new QPushButton(AllCoursesPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 10, 80, 24));
        careerRankLabel = new QLabel(AllCoursesPage);
        careerRankLabel->setObjectName("careerRankLabel");
        careerRankLabel->setGeometry(QRect(338, 120, 201, 20));
        careerRankLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(AllCoursesPage);

        QMetaObject::connectSlotsByName(AllCoursesPage);
    } // setupUi

    void retranslateUi(QWidget *AllCoursesPage)
    {
        AllCoursesPage->setWindowTitle(QCoreApplication::translate("AllCoursesPage", "Form", nullptr));
        statsGroupBox->setTitle(QCoreApplication::translate("AllCoursesPage", "Stats", nullptr));
        longestSessionLabel->setText(QCoreApplication::translate("AllCoursesPage", "Longest Study Session:", nullptr));
        mostHoursLabel->setText(QCoreApplication::translate("AllCoursesPage", "Course with Most Hours:", nullptr));
        highestGradeLabel->setText(QCoreApplication::translate("AllCoursesPage", "Highest Grade Achieved: ", nullptr));
        lowestGradeLabel->setText(QCoreApplication::translate("AllCoursesPage", "Lowest Grade Achieved: ", nullptr));
        efficientCourseLabel->setText(QCoreApplication::translate("AllCoursesPage", "Most Efficient Course: ", nullptr));
        coursesGroupBox->setTitle(QCoreApplication::translate("AllCoursesPage", "All Courses:", nullptr));
        averageGradeLabel->setText(QCoreApplication::translate("AllCoursesPage", "Average grade: --%", nullptr));
        backButton->setText(QCoreApplication::translate("AllCoursesPage", "Back", nullptr));
        careerRankLabel->setText(QCoreApplication::translate("AllCoursesPage", "Career Rank: --", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllCoursesPage: public Ui_AllCoursesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLCOURSESPAGE_H
