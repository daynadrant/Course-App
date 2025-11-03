/********************************************************************************
** Form generated from reading UI file 'coursepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEPAGE_H
#define UI_COURSEPAGE_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoursePage
{
public:
    QPushButton *loginButton;
    QPushButton *createButton;
    QLabel *courseNameLabel;
    QPushButton *loginButton_2;
    QPushButton *loginButton_3;
    QPushButton *loginButton_4;
    QLabel *rankLabel;
    QChartView *graphicsViewChart;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *studyHoursLabel;
    QLabel *currentGradeLabel;
    QLabel *studyHoursLabel_3;
    QCommandLinkButton *backButton;

    void setupUi(QWidget *CoursePage)
    {
        if (CoursePage->objectName().isEmpty())
            CoursePage->setObjectName("CoursePage");
        CoursePage->resize(900, 600);
        loginButton = new QPushButton(CoursePage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(190, 200, 111, 31));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 8pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        createButton = new QPushButton(CoursePage);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(190, 240, 111, 31));
        createButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 8pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        courseNameLabel = new QLabel(CoursePage);
        courseNameLabel->setObjectName("courseNameLabel");
        courseNameLabel->setGeometry(QRect(350, 130, 161, 21));
        courseNameLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        courseNameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 16pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        courseNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginButton_2 = new QPushButton(CoursePage);
        loginButton_2->setObjectName("loginButton_2");
        loginButton_2->setGeometry(QRect(190, 280, 111, 31));
        loginButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 8pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        loginButton_3 = new QPushButton(CoursePage);
        loginButton_3->setObjectName("loginButton_3");
        loginButton_3->setGeometry(QRect(190, 320, 111, 31));
        loginButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 8pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        loginButton_4 = new QPushButton(CoursePage);
        loginButton_4->setObjectName("loginButton_4");
        loginButton_4->setGeometry(QRect(180, 370, 131, 51));
        loginButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 8pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        rankLabel = new QLabel(CoursePage);
        rankLabel->setObjectName("rankLabel");
        rankLabel->setGeometry(QRect(350, 160, 171, 191));
        rankLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px dashed #aaa;\n"
"    min-height: 100px;\n"
"    min-width: 100px;\n"
"}"));
        rankLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        graphicsViewChart = new QChartView(CoursePage);
        graphicsViewChart->setObjectName("graphicsViewChart");
        graphicsViewChart->setGeometry(QRect(550, 110, 241, 221));
        layoutWidget = new QWidget(CoursePage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(350, 360, 181, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        studyHoursLabel = new QLabel(layoutWidget);
        studyHoursLabel->setObjectName("studyHoursLabel");
        studyHoursLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        studyHoursLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(studyHoursLabel);

        currentGradeLabel = new QLabel(layoutWidget);
        currentGradeLabel->setObjectName("currentGradeLabel");
        currentGradeLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        currentGradeLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(currentGradeLabel);

        studyHoursLabel_3 = new QLabel(CoursePage);
        studyHoursLabel_3->setObjectName("studyHoursLabel_3");
        studyHoursLabel_3->setGeometry(QRect(560, 330, 179, 38));
        studyHoursLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 9pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        studyHoursLabel_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        backButton = new QCommandLinkButton(CoursePage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 10, 31, 33));
        backButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WindowClose));
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(16, 16));
        QWidget::setTabOrder(loginButton, createButton);

        retranslateUi(CoursePage);

        QMetaObject::connectSlotsByName(CoursePage);
    } // setupUi

    void retranslateUi(QWidget *CoursePage)
    {
        CoursePage->setWindowTitle(QCoreApplication::translate("CoursePage", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("CoursePage", "Log Study Hours", nullptr));
        createButton->setText(QCoreApplication::translate("CoursePage", "Start Study Timer", nullptr));
        courseNameLabel->setText(QCoreApplication::translate("CoursePage", "ELEC 376", nullptr));
        loginButton_2->setText(QCoreApplication::translate("CoursePage", "Input Grade", nullptr));
        loginButton_3->setText(QCoreApplication::translate("CoursePage", "Edit Course", nullptr));
        loginButton_4->setText(QCoreApplication::translate("CoursePage", "Complete", nullptr));
        rankLabel->setText(QCoreApplication::translate("CoursePage", "*IMAGE HERE*", nullptr));
        studyHoursLabel->setText(QCoreApplication::translate("CoursePage", "Course Study Hours:", nullptr));
        currentGradeLabel->setText(QCoreApplication::translate("CoursePage", "Current Grade:", nullptr));
        studyHoursLabel_3->setText(QCoreApplication::translate("CoursePage", "Grades Achieved:", nullptr));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CoursePage: public Ui_CoursePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEPAGE_H
