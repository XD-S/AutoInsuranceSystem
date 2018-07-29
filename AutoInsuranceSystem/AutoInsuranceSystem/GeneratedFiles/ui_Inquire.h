/********************************************************************************
** Form generated from reading UI file 'Inquire.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRE_H
#define UI_INQUIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InquireForm
{
public:
    QLabel *INSUR_LABEL;
    QLabel *label_25;
    QLineEdit *InquireValue;
    QPushButton *Entry;

    void setupUi(QWidget *InquireForm)
    {
        if (InquireForm->objectName().isEmpty())
            InquireForm->setObjectName(QStringLiteral("InquireForm"));
        InquireForm->resize(350, 200);
        INSUR_LABEL = new QLabel(InquireForm);
        INSUR_LABEL->setObjectName(QStringLiteral("INSUR_LABEL"));
        INSUR_LABEL->setGeometry(QRect(75, 10, 200, 60));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        INSUR_LABEL->setFont(font);
        INSUR_LABEL->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(InquireForm);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(60, 90, 60, 25));
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        InquireValue = new QLineEdit(InquireForm);
        InquireValue->setObjectName(QStringLiteral("InquireValue"));
        InquireValue->setGeometry(QRect(130, 90, 130, 25));
        InquireValue->setInputMethodHints(Qt::ImhNone);
        Entry = new QPushButton(InquireForm);
        Entry->setObjectName(QStringLiteral("Entry"));
        Entry->setGeometry(QRect(129, 130, 131, 40));

        retranslateUi(InquireForm);

        QMetaObject::connectSlotsByName(InquireForm);
    } // setupUi

    void retranslateUi(QWidget *InquireForm)
    {
        InquireForm->setWindowTitle(QApplication::translate("InquireForm", "Form", nullptr));
        INSUR_LABEL->setText(QApplication::translate("InquireForm", "\345\217\267\347\211\214\346\237\245\350\257\242", nullptr));
        label_25->setText(QApplication::translate("InquireForm", "\345\217\267\347\211\214", nullptr));
        Entry->setText(QApplication::translate("InquireForm", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InquireForm: public Ui_InquireForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRE_H
