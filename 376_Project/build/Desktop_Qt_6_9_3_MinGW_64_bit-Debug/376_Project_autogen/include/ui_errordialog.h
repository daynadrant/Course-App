/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QPushButton *pushButton;
    QLabel *errorMessage;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName("ErrorDialog");
        ErrorDialog->resize(280, 127);
        pushButton = new QPushButton(ErrorDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(185, 77, 71, 31));
        errorMessage = new QLabel(ErrorDialog);
        errorMessage->setObjectName("errorMessage");
        errorMessage->setGeometry(QRect(50, 20, 171, 51));
        errorMessage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(ErrorDialog);

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QCoreApplication::translate("ErrorDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ErrorDialog", "OK", nullptr));
        errorMessage->setText(QCoreApplication::translate("ErrorDialog", "Error Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
