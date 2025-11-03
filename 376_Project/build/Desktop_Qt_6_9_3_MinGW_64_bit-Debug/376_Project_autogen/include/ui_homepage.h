/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QGroupBox *coursesBox;
    QListWidget *coursesList;
    QPushButton *addCourseButton;
    QGroupBox *friendsBox;
    QListWidget *friendsList;
    QPushButton *addFriendButton;
    QLabel *usernameLabel;
    QLabel *label_2;
    QLabel *imageLabel;
    QLabel *studyHoursLabel;
    QPushButton *helpButton;
    QPushButton *logHoursButton;
    QPushButton *studyTimerButton;
    QPushButton *pushButton_4;
    QPushButton *logoutButton;
    QPushButton *coursesButton;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(900, 600);
        coursesBox = new QGroupBox(HomePage);
        coursesBox->setObjectName("coursesBox");
        coursesBox->setGeometry(QRect(190, 80, 141, 281));
        coursesBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #444;\n"
"    border-radius: 6px;\n"
"    margin-top: 10px;\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #333;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 5px;\n"
"	color: transparent;\n"
"}"));
        coursesList = new QListWidget(coursesBox);
        coursesList->setObjectName("coursesList");
        coursesList->setGeometry(QRect(10, 20, 121, 211));
        coursesList->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 10pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        addCourseButton = new QPushButton(coursesBox);
        addCourseButton->setObjectName("addCourseButton");
        addCourseButton->setGeometry(QRect(20, 240, 101, 31));
        addCourseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        friendsBox = new QGroupBox(HomePage);
        friendsBox->setObjectName("friendsBox");
        friendsBox->setGeometry(QRect(570, 80, 141, 281));
        friendsBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #444;\n"
"    border-radius: 6px;\n"
"    margin-top: 10px;\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #333;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 5px;\n"
"}"));
        friendsList = new QListWidget(friendsBox);
        friendsList->setObjectName("friendsList");
        friendsList->setGeometry(QRect(10, 20, 121, 211));
        friendsList->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    font: bold 10pt \"Segoe UI\";\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #3d8c40;\n"
"}"));
        addFriendButton = new QPushButton(friendsBox);
        addFriendButton->setObjectName("addFriendButton");
        addFriendButton->setGeometry(QRect(20, 240, 101, 31));
        addFriendButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        usernameLabel = new QLabel(HomePage);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(370, 60, 161, 21));
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        usernameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(HomePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 110, 161, 21));
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 13pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        imageLabel = new QLabel(HomePage);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(370, 140, 161, 221));
        imageLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px dashed #aaa;\n"
"    min-height: 100px;\n"
"    min-width: 100px;\n"
"}"));
        imageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        studyHoursLabel = new QLabel(HomePage);
        studyHoursLabel->setObjectName("studyHoursLabel");
        studyHoursLabel->setGeometry(QRect(360, 370, 191, 21));
        studyHoursLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 13pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        studyHoursLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        helpButton = new QPushButton(HomePage);
        helpButton->setObjectName("helpButton");
        helpButton->setGeometry(QRect(810, 550, 71, 31));
        helpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        logHoursButton = new QPushButton(HomePage);
        logHoursButton->setObjectName("logHoursButton");
        logHoursButton->setGeometry(QRect(310, 410, 81, 41));
        logHoursButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        studyTimerButton = new QPushButton(HomePage);
        studyTimerButton->setObjectName("studyTimerButton");
        studyTimerButton->setGeometry(QRect(410, 410, 91, 41));
        studyTimerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_4 = new QPushButton(HomePage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(520, 410, 81, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        logoutButton = new QPushButton(HomePage);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(20, 550, 71, 31));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        coursesButton = new QPushButton(HomePage);
        coursesButton->setObjectName("coursesButton");
        coursesButton->setGeometry(QRect(200, 73, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        coursesButton->setFont(font);
        coursesButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        coursesButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent;\n"
"    border: none;\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #333;\n"
"    text-align: left;\n"
"    padding-left: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    text-decoration: underline;\n"
"}\n"
""));
        coursesButton->setFlat(true);

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Form", nullptr));
        coursesBox->setTitle(QCoreApplication::translate("HomePage", "Courses: ", nullptr));
        addCourseButton->setText(QCoreApplication::translate("HomePage", "Add Course", nullptr));
        friendsBox->setTitle(QCoreApplication::translate("HomePage", "Friends:", nullptr));
        addFriendButton->setText(QCoreApplication::translate("HomePage", "Add Friend", nullptr));
        usernameLabel->setText(QCoreApplication::translate("HomePage", "Username: Ashton", nullptr));
        label_2->setText(QCoreApplication::translate("HomePage", "Overall Rank", nullptr));
        imageLabel->setText(QCoreApplication::translate("HomePage", "*IMAGE HERE*", nullptr));
        studyHoursLabel->setText(QCoreApplication::translate("HomePage", "Total Study Hours: 74", nullptr));
        helpButton->setText(QCoreApplication::translate("HomePage", "Help (?)", nullptr));
        logHoursButton->setText(QCoreApplication::translate("HomePage", "Log Study \n"
"Hours", nullptr));
        studyTimerButton->setText(QCoreApplication::translate("HomePage", "Start Study \n"
"Timer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HomePage", "Input \n"
"Grade", nullptr));
        logoutButton->setText(QCoreApplication::translate("HomePage", "Log Out", nullptr));
        coursesButton->setText(QCoreApplication::translate("HomePage", "Courses:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
