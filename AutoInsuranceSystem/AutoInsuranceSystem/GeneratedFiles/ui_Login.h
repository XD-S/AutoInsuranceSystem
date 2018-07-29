/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QLineEdit *user;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *password;
    QLabel *INSUR_LABEL;
    QPushButton *Entry;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(400, 300);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        LoginForm->setFont(font);
        user = new QLineEdit(LoginForm);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(110, 100, 200, 25));
        user->setInputMethodHints(Qt::ImhNone);
        label_11 = new QLabel(LoginForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 140, 60, 25));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(LoginForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 100, 60, 25));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        password = new QLineEdit(LoginForm);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(110, 140, 200, 25));
        password->setInputMethodHints(Qt::ImhNone);
        INSUR_LABEL = new QLabel(LoginForm);
        INSUR_LABEL->setObjectName(QStringLiteral("INSUR_LABEL"));
        INSUR_LABEL->setGeometry(QRect(20, 20, 360, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        INSUR_LABEL->setFont(font1);
        INSUR_LABEL->setAlignment(Qt::AlignCenter);
        Entry = new QPushButton(LoginForm);
        Entry->setObjectName(QStringLiteral("Entry"));
        Entry->setGeometry(QRect(110, 200, 200, 40));

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "Form", nullptr));
        label_11->setText(QApplication::translate("LoginForm", "\345\257\206  \347\240\201", nullptr));
        label_8->setText(QApplication::translate("LoginForm", "\347\224\250\346\210\267\345\220\215", nullptr));
        INSUR_LABEL->setText(QApplication::translate("LoginForm", "\347\231\273   \345\275\225", nullptr));
        Entry->setText(QApplication::translate("LoginForm", "\350\277\233\345\205\245\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
