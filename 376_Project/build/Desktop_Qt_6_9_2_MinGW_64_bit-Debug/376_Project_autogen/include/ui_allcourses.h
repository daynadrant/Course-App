/********************************************************************************
** Form generated from reading UI file 'allcourses.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLCOURSES_H
#define UI_ALLCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllCourses
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

    void setupUi(QWidget *AllCourses)
    {
        if (AllCourses->objectName().isEmpty())
            AllCourses->setObjectName("AllCourses");
        AllCourses->resize(900, 600);
        statsGroupBox = new QGroupBox(AllCourses);
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
        coursesGroupBox = new QGroupBox(AllCourses);
        coursesGroupBox->setObjectName("coursesGroupBox");
        coursesGroupBox->setGeometry(QRect(120, 110, 131, 191));
        coursesList = new QListWidget(coursesGroupBox);
        coursesList->setObjectName("coursesList");
        coursesList->setGeometry(QRect(10, 30, 111, 151));
        averageGradeLabel = new QLabel(AllCourses);
        averageGradeLabel->setObjectName("averageGradeLabel");
        averageGradeLabel->setGeometry(QRect(351, 390, 181, 20));
        averageGradeLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        rankIconLabel = new QLabel(AllCourses);
        rankIconLabel->setObjectName("rankIconLabel");
        rankIconLabel->setGeometry(QRect(340, 160, 191, 201));
        rankIconLabel->setScaledContents(true);
        rankIconLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backButton = new QPushButton(AllCourses);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 10, 80, 24));
        careerRankLabel = new QLabel(AllCourses);
        careerRankLabel->setObjectName("careerRankLabel");
        careerRankLabel->setGeometry(QRect(338, 120, 201, 20));
        careerRankLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(AllCourses);

        QMetaObject::connectSlotsByName(AllCourses);
    } // setupUi

    void retranslateUi(QWidget *AllCourses)
    {
        AllCourses->setWindowTitle(QCoreApplication::translate("AllCourses", "Form", nullptr));
        statsGroupBox->setTitle(QCoreApplication::translate("AllCourses", "Stats", nullptr));
        longestSessionLabel->setText(QCoreApplication::translate("AllCourses", "Longest Study Session:", nullptr));
        mostHoursLabel->setText(QCoreApplication::translate("AllCourses", "Course with Most Hours:", nullptr));
        highestGradeLabel->setText(QCoreApplication::translate("AllCourses", "Highest Grade Achieved: ", nullptr));
        lowestGradeLabel->setText(QCoreApplication::translate("AllCourses", "Lowest Grade Achieved: ", nullptr));
        efficientCourseLabel->setText(QCoreApplication::translate("AllCourses", "Most Efficient Course: ", nullptr));
        coursesGroupBox->setTitle(QCoreApplication::translate("AllCourses", "All Courses:", nullptr));
        averageGradeLabel->setText(QCoreApplication::translate("AllCourses", "Average grade: --%", nullptr));
        backButton->setText(QCoreApplication::translate("AllCourses", "Back", nullptr));
        careerRankLabel->setText(QCoreApplication::translate("AllCourses", "Career Rank: --", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllCourses: public Ui_AllCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLCOURSES_H
