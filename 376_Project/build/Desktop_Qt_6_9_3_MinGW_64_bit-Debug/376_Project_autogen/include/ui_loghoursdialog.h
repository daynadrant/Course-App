/********************************************************************************
** Form generated from reading UI file 'loghoursdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGHOURSDIALOG_H
#define UI_LOGHOURSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LogHoursDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *hoursSpin;

    void setupUi(QDialog *LogHoursDialog)
    {
        if (LogHoursDialog->objectName().isEmpty())
            LogHoursDialog->setObjectName("LogHoursDialog");
        LogHoursDialog->resize(221, 133);
        buttonBox = new QDialogButtonBox(LogHoursDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(60, 90, 141, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(LogHoursDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 121, 31));
        hoursSpin = new QDoubleSpinBox(LogHoursDialog);
        hoursSpin->setObjectName("hoursSpin");
        hoursSpin->setGeometry(QRect(20, 50, 171, 29));

        retranslateUi(LogHoursDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogHoursDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogHoursDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LogHoursDialog);
    } // setupUi

    void retranslateUi(QDialog *LogHoursDialog)
    {
        LogHoursDialog->setWindowTitle(QCoreApplication::translate("LogHoursDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LogHoursDialog", "Enter Study Hours", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogHoursDialog: public Ui_LogHoursDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGHOURSDIALOG_H
