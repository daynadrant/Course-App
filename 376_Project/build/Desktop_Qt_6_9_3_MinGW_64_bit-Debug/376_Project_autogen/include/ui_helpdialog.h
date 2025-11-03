/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *closeButton;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName("HelpDialog");
        HelpDialog->resize(393, 561);
        layoutWidget = new QWidget(HelpDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 351, 521));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        closeButton = new QPushButton(layoutWidget);
        closeButton->setObjectName("closeButton");

        verticalLayout->addWidget(closeButton);


        retranslateUi(HelpDialog);

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HelpDialog", "Help / About", nullptr));
        label_2->setText(QCoreApplication::translate("HelpDialog", "Welcome to \"application name\"! With this app you'll transform your studies into a ranked experience for you and your friends to enjoy!\n"
"\n"
"You can track courses by adding them to your profile with the 'Add Course' button. As you receive your grades in a course, input them with the 'Input Grade' button. Make sure to also log study hours when possible \342\200\224 it will help boost your rank. If you start a study timer, the timer will automatically log the time spent.\n"
"\n"
"You will have a rank for individual courses, as well as a cumulative rank which is seen on the homepage. Make sure to add your friends and keep up with each others' ranks!\n"
"", nullptr));
        closeButton->setText(QCoreApplication::translate("HelpDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
