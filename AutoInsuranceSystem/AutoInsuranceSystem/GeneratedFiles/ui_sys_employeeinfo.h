/********************************************************************************
** Form generated from reading UI file 'sys_employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYS_EMPLOYEEINFO_H
#define UI_SYS_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sys_employeeinfoForm
{
public:
    QLabel *INSUR_LABEL;
    QLineEdit *EmployeeName;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *State;
    QLabel *label_9;
    QComboBox *ReferencesName;
    QLabel *label_10;
    QComboBox *Source;
    QLabel *label_11;
    QComboBox *Department;
    QLineEdit *EmployeeCode;
    QLabel *label_12;
    QComboBox *Sex;
    QLabel *label_13;
    QLineEdit *Academic;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *Telephone;
    QLineEdit *OriginalOccupation;
    QLabel *label_16;
    QLabel *label_2;
    QDateEdit *BirthDay;
    QLabel *label_3;
    QDateEdit *EntryTime;
    QLabel *label_17;
    QLineEdit *IdCard;
    QLineEdit *HomeAddress;
    QLabel *label_18;
    QLabel *label_19;
    QTextEdit *Description;
    QPushButton *Cancel;
    QPushButton *Entry;

    void setupUi(QWidget *sys_employeeinfoForm)
    {
        if (sys_employeeinfoForm->objectName().isEmpty())
            sys_employeeinfoForm->setObjectName(QStringLiteral("sys_employeeinfoForm"));
        sys_employeeinfoForm->resize(800, 600);
        INSUR_LABEL = new QLabel(sys_employeeinfoForm);
        INSUR_LABEL->setObjectName(QStringLiteral("INSUR_LABEL"));
        INSUR_LABEL->setGeometry(QRect(220, 0, 360, 60));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        INSUR_LABEL->setFont(font);
        INSUR_LABEL->setAlignment(Qt::AlignCenter);
        EmployeeName = new QLineEdit(sys_employeeinfoForm);
        EmployeeName->setObjectName(QStringLiteral("EmployeeName"));
        EmployeeName->setGeometry(QRect(90, 80, 120, 25));
        EmployeeName->setInputMethodHints(Qt::ImhNone);
        label_7 = new QLabel(sys_employeeinfoForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 80, 60, 25));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(sys_employeeinfoForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 80, 60, 25));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        State = new QComboBox(sys_employeeinfoForm);
        State->addItem(QString());
        State->addItem(QString());
        State->setObjectName(QStringLiteral("State"));
        State->setGeometry(QRect(360, 80, 120, 25));
        State->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_9 = new QLabel(sys_employeeinfoForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(560, 80, 60, 25));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ReferencesName = new QComboBox(sys_employeeinfoForm);
        ReferencesName->setObjectName(QStringLiteral("ReferencesName"));
        ReferencesName->setGeometry(QRect(620, 80, 120, 25));
        ReferencesName->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_10 = new QLabel(sys_employeeinfoForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 120, 60, 25));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Source = new QComboBox(sys_employeeinfoForm);
        Source->addItem(QString());
        Source->addItem(QString());
        Source->setObjectName(QStringLiteral("Source"));
        Source->setGeometry(QRect(90, 120, 120, 25));
        Source->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_11 = new QLabel(sys_employeeinfoForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(300, 120, 60, 25));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Department = new QComboBox(sys_employeeinfoForm);
        Department->addItem(QString());
        Department->addItem(QString());
        Department->setObjectName(QStringLiteral("Department"));
        Department->setGeometry(QRect(360, 120, 120, 25));
        Department->setContextMenuPolicy(Qt::DefaultContextMenu);
        EmployeeCode = new QLineEdit(sys_employeeinfoForm);
        EmployeeCode->setObjectName(QStringLiteral("EmployeeCode"));
        EmployeeCode->setGeometry(QRect(620, 120, 120, 25));
        EmployeeCode->setInputMethodHints(Qt::ImhNone);
        label_12 = new QLabel(sys_employeeinfoForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(560, 120, 60, 25));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Sex = new QComboBox(sys_employeeinfoForm);
        Sex->addItem(QString());
        Sex->addItem(QString());
        Sex->addItem(QString());
        Sex->setObjectName(QStringLiteral("Sex"));
        Sex->setGeometry(QRect(90, 160, 120, 25));
        Sex->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_13 = new QLabel(sys_employeeinfoForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 160, 60, 25));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Academic = new QLineEdit(sys_employeeinfoForm);
        Academic->setObjectName(QStringLiteral("Academic"));
        Academic->setGeometry(QRect(360, 160, 120, 25));
        Academic->setInputMethodHints(Qt::ImhNone);
        label_14 = new QLabel(sys_employeeinfoForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(300, 160, 60, 25));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_15 = new QLabel(sys_employeeinfoForm);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(560, 160, 60, 25));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Telephone = new QLineEdit(sys_employeeinfoForm);
        Telephone->setObjectName(QStringLiteral("Telephone"));
        Telephone->setGeometry(QRect(620, 160, 120, 25));
        Telephone->setInputMethodHints(Qt::ImhNone);
        OriginalOccupation = new QLineEdit(sys_employeeinfoForm);
        OriginalOccupation->setObjectName(QStringLiteral("OriginalOccupation"));
        OriginalOccupation->setGeometry(QRect(90, 200, 120, 25));
        OriginalOccupation->setInputMethodHints(Qt::ImhNone);
        label_16 = new QLabel(sys_employeeinfoForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 200, 60, 25));
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(sys_employeeinfoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 200, 60, 25));
        BirthDay = new QDateEdit(sys_employeeinfoForm);
        BirthDay->setObjectName(QStringLiteral("BirthDay"));
        BirthDay->setGeometry(QRect(360, 200, 120, 25));
        label_3 = new QLabel(sys_employeeinfoForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(560, 200, 60, 25));
        EntryTime = new QDateEdit(sys_employeeinfoForm);
        EntryTime->setObjectName(QStringLiteral("EntryTime"));
        EntryTime->setGeometry(QRect(620, 200, 120, 25));
        label_17 = new QLabel(sys_employeeinfoForm);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 240, 60, 25));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        IdCard = new QLineEdit(sys_employeeinfoForm);
        IdCard->setObjectName(QStringLiteral("IdCard"));
        IdCard->setGeometry(QRect(90, 240, 210, 25));
        IdCard->setInputMethodHints(Qt::ImhNone);
        HomeAddress = new QLineEdit(sys_employeeinfoForm);
        HomeAddress->setObjectName(QStringLiteral("HomeAddress"));
        HomeAddress->setGeometry(QRect(90, 280, 650, 25));
        HomeAddress->setInputMethodHints(Qt::ImhNone);
        label_18 = new QLabel(sys_employeeinfoForm);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 280, 60, 25));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_19 = new QLabel(sys_employeeinfoForm);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 320, 60, 25));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Description = new QTextEdit(sys_employeeinfoForm);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(90, 320, 650, 150));
        Cancel = new QPushButton(sys_employeeinfoForm);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(650, 510, 90, 40));
        Entry = new QPushButton(sys_employeeinfoForm);
        Entry->setObjectName(QStringLiteral("Entry"));
        Entry->setGeometry(QRect(510, 510, 90, 40));

        retranslateUi(sys_employeeinfoForm);

        QMetaObject::connectSlotsByName(sys_employeeinfoForm);
    } // setupUi

    void retranslateUi(QWidget *sys_employeeinfoForm)
    {
        sys_employeeinfoForm->setWindowTitle(QApplication::translate("sys_employeeinfoForm", "Form", nullptr));
        INSUR_LABEL->setText(QApplication::translate("sys_employeeinfoForm", "\345\205\254\345\217\270\345\221\230\345\267\245\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        label_7->setText(QApplication::translate("sys_employeeinfoForm", "\345\247\223\345\220\215", nullptr));
        label_8->setText(QApplication::translate("sys_employeeinfoForm", "\347\216\260\347\212\266", nullptr));
        State->setItemText(0, QApplication::translate("sys_employeeinfoForm", "\345\234\250\350\201\214", nullptr));
        State->setItemText(1, QApplication::translate("sys_employeeinfoForm", "\347\246\273\350\201\214", nullptr));

        label_9->setText(QApplication::translate("sys_employeeinfoForm", "\346\216\250\350\215\220\344\272\272", nullptr));
        label_10->setText(QApplication::translate("sys_employeeinfoForm", "\346\235\245\346\272\220", nullptr));
        Source->setItemText(0, QApplication::translate("sys_employeeinfoForm", "\344\273\213\347\273\215", nullptr));
        Source->setItemText(1, QApplication::translate("sys_employeeinfoForm", "\346\212\225\347\256\200\345\216\206", nullptr));

        label_11->setText(QApplication::translate("sys_employeeinfoForm", "\345\275\222\345\217\243\351\203\250\351\227\250", nullptr));
        Department->setItemText(0, QApplication::translate("sys_employeeinfoForm", "\344\270\232\345\212\241\344\270\200\347\273\204", nullptr));
        Department->setItemText(1, QApplication::translate("sys_employeeinfoForm", "\344\270\232\345\212\241\344\272\214\347\273\204", nullptr));

        label_12->setText(QApplication::translate("sys_employeeinfoForm", "\344\270\232\345\212\241\347\274\226\345\217\267", nullptr));
        Sex->setItemText(0, QApplication::translate("sys_employeeinfoForm", "\347\224\267", nullptr));
        Sex->setItemText(1, QApplication::translate("sys_employeeinfoForm", "\345\245\263", nullptr));
        Sex->setItemText(2, QApplication::translate("sys_employeeinfoForm", "\344\270\255\346\200\247", nullptr));

        label_13->setText(QApplication::translate("sys_employeeinfoForm", "\346\200\247\345\210\253", nullptr));
        label_14->setText(QApplication::translate("sys_employeeinfoForm", "\345\255\246\345\216\206", nullptr));
        label_15->setText(QApplication::translate("sys_employeeinfoForm", "\346\211\213\346\234\272", nullptr));
        label_16->setText(QApplication::translate("sys_employeeinfoForm", "\345\216\237\350\201\214\344\270\232", nullptr));
        label_2->setText(QApplication::translate("sys_employeeinfoForm", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_3->setText(QApplication::translate("sys_employeeinfoForm", "\346\212\245\345\210\260\346\227\266\351\227\264", nullptr));
        label_17->setText(QApplication::translate("sys_employeeinfoForm", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_18->setText(QApplication::translate("sys_employeeinfoForm", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        label_19->setText(QApplication::translate("sys_employeeinfoForm", "\345\244\207\346\263\250", nullptr));
        Cancel->setText(QApplication::translate("sys_employeeinfoForm", "\345\217\226\346\266\210", nullptr));
        Entry->setText(QApplication::translate("sys_employeeinfoForm", "\345\275\225\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sys_employeeinfoForm: public Ui_sys_employeeinfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYS_EMPLOYEEINFO_H
