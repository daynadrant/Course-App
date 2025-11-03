/********************************************************************************
** Form generated from reading UI file 'timerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERDIALOG_H
#define UI_TIMERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TimerDialog
{
public:
    QPushButton *start;
    QPushButton *stop;
    QPushButton *close;
    QPushButton *log;
    QLCDNumber *clock;

    void setupUi(QDialog *TimerDialog)
    {
        if (TimerDialog->objectName().isEmpty())
            TimerDialog->setObjectName("TimerDialog");
        TimerDialog->resize(221, 136);
        start = new QPushButton(TimerDialog);
        start->setObjectName("start");
        start->setGeometry(QRect(10, 70, 61, 21));
        stop = new QPushButton(TimerDialog);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(10, 100, 61, 21));
        close = new QPushButton(TimerDialog);
        close->setObjectName("close");
        close->setGeometry(QRect(150, 100, 61, 21));
        log = new QPushButton(TimerDialog);
        log->setObjectName("log");
        log->setGeometry(QRect(149, 70, 61, 21));
        clock = new QLCDNumber(TimerDialog);
        clock->setObjectName("clock");
        clock->setGeometry(QRect(60, 20, 101, 23));

        retranslateUi(TimerDialog);

        QMetaObject::connectSlotsByName(TimerDialog);
    } // setupUi

    void retranslateUi(QDialog *TimerDialog)
    {
        TimerDialog->setWindowTitle(QCoreApplication::translate("TimerDialog", "Dialog", nullptr));
        start->setText(QCoreApplication::translate("TimerDialog", "Start", nullptr));
        stop->setText(QCoreApplication::translate("TimerDialog", "Stop", nullptr));
        close->setText(QCoreApplication::translate("TimerDialog", "Cancel", nullptr));
        log->setText(QCoreApplication::translate("TimerDialog", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimerDialog: public Ui_TimerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERDIALOG_H
