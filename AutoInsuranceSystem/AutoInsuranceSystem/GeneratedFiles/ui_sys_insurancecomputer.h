/********************************************************************************
** Form generated from reading UI file 'sys_insurancecomputer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_INSURANCECOMPUTER_H
#define UI_SYS_INSURANCECOMPUTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sys_insurancecomputerForm
{
public:
    QLabel *INSUR_LABEL;
    QLineEdit *CompanyName;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *Cancel;
    QPushButton *Entry;
    QTextEdit *Description;

    void setupUi(QWidget *sys_insurancecomputerForm)
    {
        if (sys_insurancecomputerForm->objectName().isEmpty())
            sys_insurancecomputerForm->setObjectName(QStringLiteral("sys_insurancecomputerForm"));
        sys_insurancecomputerForm->resize(400, 300);
        INSUR_LABEL = new QLabel(sys_insurancecomputerForm);
        INSUR_LABEL->setObjectName(QStringLiteral("INSUR_LABEL"));
        INSUR_LABEL->setGeometry(QRect(20, 0, 360, 60));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        INSUR_LABEL->setFont(font);
        INSUR_LABEL->setAlignment(Qt::AlignCenter);
        CompanyName = new QLineEdit(sys_insurancecomputerForm);
        CompanyName->setObjectName(QStringLiteral("CompanyName"));
        CompanyName->setGeometry(QRect(110, 70, 241, 25));
        CompanyName->setInputMethodHints(Qt::ImhNone);
        label_7 = new QLabel(sys_insurancecomputerForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 70, 60, 25));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(sys_insurancecomputerForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 110, 60, 25));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Cancel = new QPushButton(sys_insurancecomputerForm);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(230, 230, 90, 40));
        Entry = new QPushButton(sys_insurancecomputerForm);
        Entry->setObjectName(QStringLiteral("Entry"));
        Entry->setGeometry(QRect(90, 230, 90, 40));
        Description = new QTextEdit(sys_insurancecomputerForm);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(110, 110, 241, 91));

        retranslateUi(sys_insurancecomputerForm);

        QMetaObject::connectSlotsByName(sys_insurancecomputerForm);
    } // setupUi

    void retranslateUi(QWidget *sys_insurancecomputerForm)
    {
        sys_insurancecomputerForm->setWindowTitle(QApplication::translate("sys_insurancecomputerForm", "Form", nullptr));
        INSUR_LABEL->setText(QApplication::translate("sys_insurancecomputerForm", "\346\211\277\344\277\235\345\205\254\345\217\270\345\275\225\345\205\245", nullptr));
        label_7->setText(QApplication::translate("sys_insurancecomputerForm", "\346\211\277\344\277\235\345\205\254\345\217\270", nullptr));
        label_8->setText(QApplication::translate("sys_insurancecomputerForm", "\345\205\254\345\217\270\346\217\217\350\277\260", nullptr));
        Cancel->setText(QApplication::translate("sys_insurancecomputerForm", "\345\217\226\346\266\210", nullptr));
        Entry->setText(QApplication::translate("sys_insurancecomputerForm", "\345\275\225\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_insurancecomputerForm: public Ui_sys_insurancecomputerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_INSURANCECOMPUTER_H
