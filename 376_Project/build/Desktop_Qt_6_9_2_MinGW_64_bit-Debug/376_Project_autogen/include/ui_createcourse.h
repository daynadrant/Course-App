/********************************************************************************
** Form generated from reading UI file 'createcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECOURSE_H
#define UI_CREATECOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseCreatePage
{
public:
    QRadioButton *radioButton;

    void setupUi(QWidget *CourseCreatePage)
    {
        if (CourseCreatePage->objectName().isEmpty())
            CourseCreatePage->setObjectName("CourseCreatePage");
        CourseCreatePage->resize(900, 600);
        radioButton = new QRadioButton(CourseCreatePage);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(310, 190, 68, 16));

        retranslateUi(CourseCreatePage);

        QMetaObject::connectSlotsByName(CourseCreatePage);
    } // setupUi

    void retranslateUi(QWidget *CourseCreatePage)
    {
        CourseCreatePage->setWindowTitle(QCoreApplication::translate("CourseCreatePage", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("CourseCreatePage", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseCreatePage: public Ui_CourseCreatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOURSE_H
