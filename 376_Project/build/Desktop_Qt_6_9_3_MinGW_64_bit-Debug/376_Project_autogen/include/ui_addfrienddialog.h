/********************************************************************************
** Form generated from reading UI file 'addfrienddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIENDDIALOG_H
#define UI_ADDFRIENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFriendDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *friendNameEdit;

    void setupUi(QDialog *AddFriendDialog)
    {
        if (AddFriendDialog->objectName().isEmpty())
            AddFriendDialog->setObjectName("AddFriendDialog");
        AddFriendDialog->resize(210, 110);
        buttonBox = new QDialogButtonBox(AddFriendDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 60, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        friendNameEdit = new QLineEdit(AddFriendDialog);
        friendNameEdit->setObjectName("friendNameEdit");
        friendNameEdit->setGeometry(QRect(30, 20, 141, 20));

        retranslateUi(AddFriendDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddFriendDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddFriendDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddFriendDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFriendDialog)
    {
        AddFriendDialog->setWindowTitle(QCoreApplication::translate("AddFriendDialog", "Dialog", nullptr));
        friendNameEdit->setInputMask(QString());
        friendNameEdit->setPlaceholderText(QCoreApplication::translate("AddFriendDialog", "e.g. JohnDoe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFriendDialog: public Ui_AddFriendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIENDDIALOG_H
