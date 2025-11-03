/********************************************************************************
** Form generated from reading UI file 'loadingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGDIALOG_H
#define UI_LOADINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LoadingDialog
{
public:
    QLabel *loadingLabel;

    void setupUi(QDialog *LoadingDialog)
    {
        if (LoadingDialog->objectName().isEmpty())
            LoadingDialog->setObjectName("LoadingDialog");
        LoadingDialog->resize(900, 600);
        loadingLabel = new QLabel(LoadingDialog);
        loadingLabel->setObjectName("loadingLabel");
        loadingLabel->setGeometry(QRect(325, 350, 250, 250));

        retranslateUi(LoadingDialog);

        QMetaObject::connectSlotsByName(LoadingDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadingDialog)
    {
        LoadingDialog->setWindowTitle(QCoreApplication::translate("LoadingDialog", "Dialog", nullptr));
        loadingLabel->setText(QCoreApplication::translate("LoadingDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingDialog: public Ui_LoadingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGDIALOG_H
