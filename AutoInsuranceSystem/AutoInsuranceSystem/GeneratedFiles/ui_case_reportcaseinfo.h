/********************************************************************************
** Form generated from reading UI file 'case_reportcaseinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASE_REPORTCASEINFO_H
#define UI_CASE_REPORTCASEINFO_H

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

class Ui_case_reportcaseinfoForm
{
public:
    QLabel *INSUR_LABEL;
    QLabel *label_7;
    QLineEdit *ClaimNumber;
    QLabel *label_2;
    QDateEdit *TimeOfOccurrenceOfCase;
    QLabel *label_8;
    QLineEdit *Telephone;
    QDateEdit *DateOfAcceptance;
    QLabel *label_9;
    QLineEdit *PlateNumber;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *CompanyName;
    QLabel *label_12;
    QLineEdit *CauseOfCase;
    QLineEdit *Insurant;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *EmployeeName;
    QLineEdit *Department;
    QLabel *label_15;
    QLineEdit *DamageExpectancy;
    QLabel *label_16;
    QLineEdit *PlaceOfOccurrenceOfACase;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *ClaimState;
    QLineEdit *ReportingUnitOrIndividual;
    QLabel *label_19;
    QLineEdit *ActualClaimAmount;
    QLabel *label_20;
    QTextEdit *Description;
    QLabel *label_21;
    QPushButton *Cancel;
    QPushButton *Entry;

    void setupUi(QWidget *case_reportcaseinfoForm)
    {
        if (case_reportcaseinfoForm->objectName().isEmpty())
            case_reportcaseinfoForm->setObjectName(QStringLiteral("case_reportcaseinfoForm"));
        case_reportcaseinfoForm->resize(800, 550);
        INSUR_LABEL = new QLabel(case_reportcaseinfoForm);
        INSUR_LABEL->setObjectName(QStringLiteral("INSUR_LABEL"));
        INSUR_LABEL->setGeometry(QRect(220, 0, 360, 60));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        INSUR_LABEL->setFont(font);
        INSUR_LABEL->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(case_reportcaseinfoForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 60, 60, 25));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ClaimNumber = new QLineEdit(case_reportcaseinfoForm);
        ClaimNumber->setObjectName(QStringLiteral("ClaimNumber"));
        ClaimNumber->setGeometry(QRect(90, 60, 120, 25));
        ClaimNumber->setInputMethodHints(Qt::ImhNone);
        label_2 = new QLabel(case_reportcaseinfoForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(285, 60, 75, 25));
        TimeOfOccurrenceOfCase = new QDateEdit(case_reportcaseinfoForm);
        TimeOfOccurrenceOfCase->setObjectName(QStringLiteral("TimeOfOccurrenceOfCase"));
        TimeOfOccurrenceOfCase->setGeometry(QRect(360, 60, 120, 25));
        label_8 = new QLabel(case_reportcaseinfoForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(560, 60, 60, 25));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Telephone = new QLineEdit(case_reportcaseinfoForm);
        Telephone->setObjectName(QStringLiteral("Telephone"));
        Telephone->setGeometry(QRect(620, 60, 120, 25));
        Telephone->setInputMethodHints(Qt::ImhNone);
        DateOfAcceptance = new QDateEdit(case_reportcaseinfoForm);
        DateOfAcceptance->setObjectName(QStringLiteral("DateOfAcceptance"));
        DateOfAcceptance->setGeometry(QRect(90, 100, 120, 25));
        label_9 = new QLabel(case_reportcaseinfoForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 100, 60, 25));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PlateNumber = new QLineEdit(case_reportcaseinfoForm);
        PlateNumber->setObjectName(QStringLiteral("PlateNumber"));
        PlateNumber->setGeometry(QRect(360, 100, 120, 25));
        PlateNumber->setInputMethodHints(Qt::ImhNone);
        label_10 = new QLabel(case_reportcaseinfoForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(300, 100, 60, 25));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_11 = new QLabel(case_reportcaseinfoForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(560, 100, 60, 25));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CompanyName = new QComboBox(case_reportcaseinfoForm);
        CompanyName->setObjectName(QStringLiteral("CompanyName"));
        CompanyName->setGeometry(QRect(620, 100, 120, 25));
        CompanyName->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_12 = new QLabel(case_reportcaseinfoForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 140, 60, 25));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CauseOfCase = new QLineEdit(case_reportcaseinfoForm);
        CauseOfCase->setObjectName(QStringLiteral("CauseOfCase"));
        CauseOfCase->setGeometry(QRect(90, 140, 390, 25));
        CauseOfCase->setInputMethodHints(Qt::ImhNone);
        Insurant = new QLineEdit(case_reportcaseinfoForm);
        Insurant->setObjectName(QStringLiteral("Insurant"));
        Insurant->setEnabled(false);
        Insurant->setGeometry(QRect(620, 140, 120, 25));
        Insurant->setInputMethodHints(Qt::ImhNone);
        label_13 = new QLabel(case_reportcaseinfoForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(560, 140, 60, 25));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_14 = new QLabel(case_reportcaseinfoForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 180, 60, 25));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        EmployeeName = new QLineEdit(case_reportcaseinfoForm);
        EmployeeName->setObjectName(QStringLiteral("EmployeeName"));
        EmployeeName->setGeometry(QRect(90, 180, 120, 25));
        EmployeeName->setInputMethodHints(Qt::ImhNone);
        Department = new QLineEdit(case_reportcaseinfoForm);
        Department->setObjectName(QStringLiteral("Department"));
        Department->setEnabled(false);
        Department->setGeometry(QRect(370, 180, 110, 25));
        Department->setInputMethodHints(Qt::ImhNone);
        label_15 = new QLabel(case_reportcaseinfoForm);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(310, 180, 60, 25));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        DamageExpectancy = new QLineEdit(case_reportcaseinfoForm);
        DamageExpectancy->setObjectName(QStringLiteral("DamageExpectancy"));
        DamageExpectancy->setGeometry(QRect(620, 180, 120, 25));
        DamageExpectancy->setInputMethodHints(Qt::ImhNone);
        label_16 = new QLabel(case_reportcaseinfoForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(560, 180, 60, 25));
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        PlaceOfOccurrenceOfACase = new QLineEdit(case_reportcaseinfoForm);
        PlaceOfOccurrenceOfACase->setObjectName(QStringLiteral("PlaceOfOccurrenceOfACase"));
        PlaceOfOccurrenceOfACase->setGeometry(QRect(90, 220, 651, 25));
        PlaceOfOccurrenceOfACase->setInputMethodHints(Qt::ImhNone);
        label_17 = new QLabel(case_reportcaseinfoForm);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(15, 220, 75, 25));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_18 = new QLabel(case_reportcaseinfoForm);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 260, 60, 25));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ClaimState = new QComboBox(case_reportcaseinfoForm);
        ClaimState->addItem(QString());
        ClaimState->addItem(QString());
        ClaimState->addItem(QString());
        ClaimState->setObjectName(QStringLiteral("ClaimState"));
        ClaimState->setGeometry(QRect(90, 260, 120, 25));
        ClaimState->setContextMenuPolicy(Qt::DefaultContextMenu);
        ReportingUnitOrIndividual = new QLineEdit(case_reportcaseinfoForm);
        ReportingUnitOrIndividual->setObjectName(QStringLiteral("ReportingUnitOrIndividual"));
        ReportingUnitOrIndividual->setGeometry(QRect(360, 260, 120, 25));
        ReportingUnitOrIndividual->setInputMethodHints(Qt::ImhNone);
        label_19 = new QLabel(case_reportcaseinfoForm);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(270, 260, 90, 25));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ActualClaimAmount = new QLineEdit(case_reportcaseinfoForm);
        ActualClaimAmount->setObjectName(QStringLiteral("ActualClaimAmount"));
        ActualClaimAmount->setGeometry(QRect(620, 260, 120, 25));
        ActualClaimAmount->setInputMethodHints(Qt::ImhNone);
        label_20 = new QLabel(case_reportcaseinfoForm);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(560, 260, 60, 25));
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Description = new QTextEdit(case_reportcaseinfoForm);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(90, 300, 650, 150));
        label_21 = new QLabel(case_reportcaseinfoForm);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 300, 60, 25));
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Cancel = new QPushButton(case_reportcaseinfoForm);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(650, 480, 90, 40));
        Entry = new QPushButton(case_reportcaseinfoForm);
        Entry->setObjectName(QStringLiteral("Entry"));
        Entry->setGeometry(QRect(510, 480, 90, 40));

        retranslateUi(case_reportcaseinfoForm);

        QMetaObject::connectSlotsByName(case_reportcaseinfoForm);
    } // setupUi

    void retranslateUi(QWidget *case_reportcaseinfoForm)
    {
        case_reportcaseinfoForm->setWindowTitle(QApplication::translate("case_reportcaseinfoForm", "Form", nullptr));
        INSUR_LABEL->setText(QApplication::translate("case_reportcaseinfoForm", "\347\220\206\350\265\224\345\217\227\347\220\206\350\256\260\345\275\225", nullptr));
        label_7->setText(QApplication::translate("case_reportcaseinfoForm", "\344\270\232\345\212\241\347\274\226\345\217\267", nullptr));
        label_2->setText(QApplication::translate("case_reportcaseinfoForm", "\346\241\210\344\273\266\345\217\221\347\224\237\346\227\266\351\227\264", nullptr));
        label_8->setText(QApplication::translate("case_reportcaseinfoForm", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_9->setText(QApplication::translate("case_reportcaseinfoForm", "\345\217\227\347\220\206\346\227\245\346\234\237", nullptr));
        label_10->setText(QApplication::translate("case_reportcaseinfoForm", "\350\275\246\347\211\214\345\217\267", nullptr));
        label_11->setText(QApplication::translate("case_reportcaseinfoForm", "\346\211\277\344\277\235\345\205\254\345\217\270", nullptr));
        label_12->setText(QApplication::translate("case_reportcaseinfoForm", "\346\241\210\344\273\266\345\216\237\345\233\240", nullptr));
        Insurant->setText(QString());
        label_13->setText(QApplication::translate("case_reportcaseinfoForm", "\350\242\253\344\277\235\351\231\251\344\272\272", nullptr));
        label_14->setText(QApplication::translate("case_reportcaseinfoForm", "\347\273\217\345\212\236\344\272\272", nullptr));
        label_15->setText(QApplication::translate("case_reportcaseinfoForm", "\345\275\222\345\217\243\351\203\250\351\227\250", nullptr));
        label_16->setText(QApplication::translate("case_reportcaseinfoForm", "\344\274\260\350\256\241\346\215\237\345\244\261", nullptr));
        label_17->setText(QApplication::translate("case_reportcaseinfoForm", "\346\241\210\344\273\266\345\217\221\347\224\237\345\234\260\347\202\271", nullptr));
        label_18->setText(QApplication::translate("case_reportcaseinfoForm", "\347\220\206\350\265\224\347\212\266\346\200\201", nullptr));
        ClaimState->setItemText(0, QApplication::translate("case_reportcaseinfoForm", "\345\267\262\345\233\236\345\216\202", nullptr));
        ClaimState->setItemText(1, QApplication::translate("case_reportcaseinfoForm", "\346\234\252\345\233\236\345\216\202", nullptr));
        ClaimState->setItemText(2, QApplication::translate("case_reportcaseinfoForm", "\345\244\226\345\216\202", nullptr));

        ReportingUnitOrIndividual->setText(QString());
        label_19->setText(QApplication::translate("case_reportcaseinfoForm", "\346\212\245\346\241\210\345\215\225\344\275\215\346\210\226\344\270\252\344\272\272", nullptr));
        ActualClaimAmount->setText(QString());
        label_20->setText(QApplication::translate("case_reportcaseinfoForm", "\347\220\206\350\265\224\351\207\221\351\242\235", nullptr));
        label_21->setText(QApplication::translate("case_reportcaseinfoForm", "\346\215\237\345\244\261\351\203\250\344\275\215", nullptr));
        Cancel->setText(QApplication::translate("case_reportcaseinfoForm", "\345\217\226\346\266\210", nullptr));
        Entry->setText(QApplication::translate("case_reportcaseinfoForm", "\345\275\225\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class case_reportcaseinfoForm: public Ui_case_reportcaseinfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASE_REPORTCASEINFO_H
