/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *logoutButton;

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
        label = new QLabel(HomePage);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 120, 161, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 11pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(HomePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 170, 161, 21));
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 13pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(HomePage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 220, 161, 104));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px dashed #aaa;\n"
"    min-height: 100px;\n"
"    min-width: 100px;\n"
"}"));
        label_4 = new QLabel(HomePage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 370, 191, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 13pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_5 = new QPushButton(HomePage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(810, 550, 71, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(HomePage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 410, 81, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_3 = new QPushButton(HomePage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(410, 410, 91, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Form", nullptr));
        coursesBox->setTitle(QCoreApplication::translate("HomePage", "Courses:", nullptr));
        addCourseButton->setText(QCoreApplication::translate("HomePage", "Add Course", nullptr));
        friendsBox->setTitle(QCoreApplication::translate("HomePage", "Friends:", nullptr));
        addFriendButton->setText(QCoreApplication::translate("HomePage", "Add Friend", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "Username: Ashton", nullptr));
        label_2->setText(QCoreApplication::translate("HomePage", "Overall Rank", nullptr));
        label_3->setText(QCoreApplication::translate("HomePage", "*IMAGE HERE*", nullptr));
        label_4->setText(QCoreApplication::translate("HomePage", "Total Study Hours: 74", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HomePage", "Help (?)", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HomePage", "Log Study \n"
"Hours", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomePage", "Start Study \n"
"Timer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HomePage", "Input \n"
"Grade", nullptr));
        logoutButton->setText(QCoreApplication::translate("HomePage", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
