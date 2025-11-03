/********************************************************************************
** Form generated from reading UI file 'friendpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDPAGE_H
#define UI_FRIENDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FriendPage
{
public:
    QLabel *rankLabel;
    QLabel *overallRankLabel;
    QLabel *usernameLabel;
    QLabel *studyHoursLabel;
    QCommandLinkButton *backButton;

    void setupUi(QDialog *FriendPage)
    {
        if (FriendPage->objectName().isEmpty())
            FriendPage->setObjectName("FriendPage");
        FriendPage->resize(900, 600);
        rankLabel = new QLabel(FriendPage);
        rankLabel->setObjectName("rankLabel");
        rankLabel->setGeometry(QRect(270, 200, 161, 191));
        rankLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px dashed #aaa;\n"
"    min-height: 100px;\n"
"    min-width: 100px;\n"
"}"));
        rankLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        overallRankLabel = new QLabel(FriendPage);
        overallRankLabel->setObjectName("overallRankLabel");
        overallRankLabel->setGeometry(QRect(270, 170, 161, 21));
        overallRankLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        overallRankLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 16pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        overallRankLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernameLabel = new QLabel(FriendPage);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(460, 240, 161, 21));
        usernameLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        usernameLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 16pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        usernameLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        studyHoursLabel = new QLabel(FriendPage);
        studyHoursLabel->setObjectName("studyHoursLabel");
        studyHoursLabel->setGeometry(QRect(460, 320, 321, 21));
        studyHoursLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        studyHoursLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 16pt \"Segoe UI\";\n"
"    color: #222;\n"
"}"));
        studyHoursLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        backButton = new QCommandLinkButton(FriendPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 10, 31, 33));
        backButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WindowClose));
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(16, 16));

        retranslateUi(FriendPage);

        QMetaObject::connectSlotsByName(FriendPage);
    } // setupUi

    void retranslateUi(QDialog *FriendPage)
    {
        FriendPage->setWindowTitle(QCoreApplication::translate("FriendPage", "Dialog", nullptr));
        rankLabel->setText(QCoreApplication::translate("FriendPage", "*IMAGE HERE*", nullptr));
        overallRankLabel->setText(QCoreApplication::translate("FriendPage", "Overall Rank", nullptr));
        usernameLabel->setText(QCoreApplication::translate("FriendPage", "Username: ", nullptr));
        studyHoursLabel->setText(QCoreApplication::translate("FriendPage", "Total Study Hours: ", nullptr));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendPage: public Ui_FriendPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDPAGE_H
