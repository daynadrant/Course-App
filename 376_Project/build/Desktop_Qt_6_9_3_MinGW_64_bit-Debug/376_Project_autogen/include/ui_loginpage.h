/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QPushButton *loginButton;
    QLineEdit *emailEdit;
    QPushButton *createButton;
    QLineEdit *passwordEdit;
    QLineEdit *usernameEdit;
    QLabel *label;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(900, 600);
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(350, 330, 91, 31));
        emailEdit = new QLineEdit(LoginPage);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setGeometry(QRect(350, 250, 191, 31));
        emailEdit->setClearButtonEnabled(false);
        createButton = new QPushButton(LoginPage);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(450, 330, 91, 31));
        passwordEdit = new QLineEdit(LoginPage);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(350, 290, 191, 31));
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);
        usernameEdit = new QLineEdit(LoginPage);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(350, 210, 191, 31));
        usernameEdit->setClearButtonEnabled(false);
        label = new QLabel(LoginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 70, 320, 134));
        QFont font;
        font.setFamilies({QString::fromUtf8("8514oem")});
        font.setPointSize(9);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        QWidget::setTabOrder(usernameEdit, emailEdit);
        QWidget::setTabOrder(emailEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, loginButton);
        QWidget::setTabOrder(loginButton, createButton);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "Log In", nullptr));
        emailEdit->setInputMask(QString());
        emailEdit->setText(QString());
        emailEdit->setPlaceholderText(QCoreApplication::translate("LoginPage", "email", nullptr));
        createButton->setText(QCoreApplication::translate("LoginPage", "Create", nullptr));
        passwordEdit->setText(QString());
        passwordEdit->setPlaceholderText(QCoreApplication::translate("LoginPage", "password", nullptr));
        usernameEdit->setInputMask(QString());
        usernameEdit->setText(QString());
        usernameEdit->setPlaceholderText(QCoreApplication::translate("LoginPage", "username", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "<html><head/><body><p>Welcome! </p><p>Ready to Rise Through the Ranks?</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
