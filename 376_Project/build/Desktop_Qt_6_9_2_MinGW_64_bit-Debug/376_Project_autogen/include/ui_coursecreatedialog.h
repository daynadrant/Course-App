/********************************************************************************
** Form generated from reading UI file 'coursecreatedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSECREATEDIALOG_H
#define UI_COURSECREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CourseCreateDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *courseNameEdit;
    QLabel *label;

    void setupUi(QDialog *CourseCreateDialog)
    {
        if (CourseCreateDialog->objectName().isEmpty())
            CourseCreateDialog->setObjectName("CourseCreateDialog");
        CourseCreateDialog->resize(221, 133);
        buttonBox = new QDialogButtonBox(CourseCreateDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(60, 90, 141, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        courseNameEdit = new QLineEdit(CourseCreateDialog);
        courseNameEdit->setObjectName("courseNameEdit");
        courseNameEdit->setGeometry(QRect(20, 50, 181, 20));
        label = new QLabel(CourseCreateDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 81, 31));

        retranslateUi(CourseCreateDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CourseCreateDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CourseCreateDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CourseCreateDialog);
    } // setupUi

    void retranslateUi(QDialog *CourseCreateDialog)
    {
        CourseCreateDialog->setWindowTitle(QCoreApplication::translate("CourseCreateDialog", "Dialog", nullptr));
        courseNameEdit->setInputMask(QString());
        courseNameEdit->setPlaceholderText(QCoreApplication::translate("CourseCreateDialog", "e.g. ELEC 376", nullptr));
        label->setText(QCoreApplication::translate("CourseCreateDialog", "Course Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseCreateDialog: public Ui_CourseCreateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSECREATEDIALOG_H
