/********************************************************************************
** Form generated from reading UI file 'coursecreate.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSECREATE_H
#define UI_COURSECREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CourseCreate
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *courseNameEdit;
    QLabel *label;

    void setupUi(QDialog *CourseCreate)
    {
        if (CourseCreate->objectName().isEmpty())
            CourseCreate->setObjectName("CourseCreate");
        CourseCreate->resize(221, 133);
        buttonBox = new QDialogButtonBox(CourseCreate);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(60, 90, 141, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        courseNameEdit = new QLineEdit(CourseCreate);
        courseNameEdit->setObjectName("courseNameEdit");
        courseNameEdit->setGeometry(QRect(20, 50, 181, 20));
        label = new QLabel(CourseCreate);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 81, 31));

        retranslateUi(CourseCreate);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CourseCreate, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CourseCreate, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CourseCreate);
    } // setupUi

    void retranslateUi(QDialog *CourseCreate)
    {
        CourseCreate->setWindowTitle(QCoreApplication::translate("CourseCreate", "Dialog", nullptr));
        courseNameEdit->setInputMask(QString());
        courseNameEdit->setPlaceholderText(QCoreApplication::translate("CourseCreate", "e.g. ELEC 376", nullptr));
        label->setText(QCoreApplication::translate("CourseCreate", "Course Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseCreate: public Ui_CourseCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSECREATE_H
