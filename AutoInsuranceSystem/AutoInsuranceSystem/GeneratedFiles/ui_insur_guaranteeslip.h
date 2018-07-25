/********************************************************************************
** Form generated from reading UI file 'insur_guaranteeslip.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSUR_GUARANTEESLIP_H
#define UI_INSUR_GUARANTEESLIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *INSUR_LABEL;
    QLabel *label_2;
    QDateEdit *InsuranceStartDate;
    QLabel *label_3;
    QDateEdit *InsuranceEndDate;
    QLabel *label_4;
    QComboBox *InsuranceCompany;
    QLabel *label_5;
    QLineEdit *CommercialRiskCode;
    QLabel *label_6;
    QLineEdit *TrafficRiskCode;
    QLabel *label_7;
    QLineEdit *Contacts;
    QLabel *label_8;
    QLineEdit *Telephone;
    QLineEdit *IdCard;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *Agent;
    QLineEdit *Department;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *PaymentState;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(800, 600);
        INSUR_LABEL = new QLabel(Form);
        INSUR_LABEL->setObjectName(QStringLiteral("INSUR_LABEL"));
        INSUR_LABEL->setGeometry(QRect(220, 0, 360, 60));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        INSUR_LABEL->setFont(font);
        INSUR_LABEL->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 60, 25));
        InsuranceStartDate = new QDateEdit(Form);
        InsuranceStartDate->setObjectName(QStringLiteral("InsuranceStartDate"));
        InsuranceStartDate->setGeometry(QRect(90, 80, 110, 25));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 80, 60, 25));
        InsuranceEndDate = new QDateEdit(Form);
        InsuranceEndDate->setObjectName(QStringLiteral("InsuranceEndDate"));
        InsuranceEndDate->setGeometry(QRect(340, 80, 110, 25));
        InsuranceEndDate->setTimeSpec(Qt::LocalTime);
        label_4 = new QLabel(Form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(540, 80, 60, 25));
        InsuranceCompany = new QComboBox(Form);
        InsuranceCompany->setObjectName(QStringLiteral("InsuranceCompany"));
        InsuranceCompany->setGeometry(QRect(600, 80, 160, 25));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 120, 60, 25));
        CommercialRiskCode = new QLineEdit(Form);
        CommercialRiskCode->setObjectName(QStringLiteral("CommercialRiskCode"));
        CommercialRiskCode->setGeometry(QRect(90, 120, 250, 25));
        CommercialRiskCode->setInputMethodHints(Qt::ImhNone);
        label_6 = new QLabel(Form);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(450, 120, 60, 25));
        TrafficRiskCode = new QLineEdit(Form);
        TrafficRiskCode->setObjectName(QStringLiteral("TrafficRiskCode"));
        TrafficRiskCode->setGeometry(QRect(510, 120, 250, 25));
        TrafficRiskCode->setInputMethodHints(Qt::ImhNone);
        label_7 = new QLabel(Form);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 160, 60, 25));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Contacts = new QLineEdit(Form);
        Contacts->setObjectName(QStringLiteral("Contacts"));
        Contacts->setGeometry(QRect(90, 160, 110, 25));
        Contacts->setInputMethodHints(Qt::ImhNone);
        label_8 = new QLabel(Form);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 160, 60, 25));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Telephone = new QLineEdit(Form);
        Telephone->setObjectName(QStringLiteral("Telephone"));
        Telephone->setGeometry(QRect(340, 160, 110, 25));
        Telephone->setInputMethodHints(Qt::ImhNone);
        IdCard = new QLineEdit(Form);
        IdCard->setObjectName(QStringLiteral("IdCard"));
        IdCard->setGeometry(QRect(600, 160, 160, 25));
        IdCard->setInputMethodHints(Qt::ImhNone);
        label_9 = new QLabel(Form);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(540, 160, 60, 25));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(Form);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 200, 60, 25));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Agent = new QComboBox(Form);
        Agent->setObjectName(QStringLiteral("Agent"));
        Agent->setGeometry(QRect(90, 200, 110, 25));
        Department = new QLineEdit(Form);
        Department->setObjectName(QStringLiteral("Department"));
        Department->setEnabled(false);
        Department->setGeometry(QRect(340, 200, 110, 25));
        Department->setInputMethodHints(Qt::ImhNone);
        label_11 = new QLabel(Form);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 200, 60, 25));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(Form);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(540, 200, 60, 25));
        PaymentState = new QComboBox(Form);
        PaymentState->addItem(QString());
        PaymentState->addItem(QString());
        PaymentState->setObjectName(QStringLiteral("PaymentState"));
        PaymentState->setGeometry(QRect(600, 200, 160, 25));
        PaymentState->setContextMenuPolicy(Qt::DefaultContextMenu);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        INSUR_LABEL->setText(QApplication::translate("Form", "\350\275\246\350\276\206\344\277\235\351\231\251\345\275\225\345\205\245", nullptr));
        label_2->setText(QApplication::translate("Form", "\346\212\225\344\277\235\346\227\245\346\234\237", nullptr));
        label_3->setText(QApplication::translate("Form", "\344\277\235\351\231\251\345\210\260\346\234\237", nullptr));
        label_4->setText(QApplication::translate("Form", "\346\211\277\344\277\235\345\205\254\345\217\270", nullptr));
        label_5->setText(QApplication::translate("Form", "\345\225\206\344\270\232\351\231\251\345\217\267", nullptr));
        label_6->setText(QApplication::translate("Form", "\344\272\244\345\274\272\351\231\251\345\217\267", nullptr));
        label_7->setText(QApplication::translate("Form", "\350\201\224\347\263\273\344\272\272", nullptr));
        label_8->setText(QApplication::translate("Form", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_9->setText(QApplication::translate("Form", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_10->setText(QApplication::translate("Form", "\347\273\217\345\212\236\344\272\272", nullptr));
        label_11->setText(QApplication::translate("Form", "\345\275\222\345\217\243\351\203\250\351\227\250", nullptr));
        label_12->setText(QApplication::translate("Form", "\347\274\264\347\272\263\347\212\266\345\206\265", nullptr));
        PaymentState->setItemText(0, QApplication::translate("Form", "\345\267\262\344\272\244", nullptr));
        PaymentState->setItemText(1, QApplication::translate("Form", "\346\234\252\344\272\244", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSUR_GUARANTEESLIP_H
