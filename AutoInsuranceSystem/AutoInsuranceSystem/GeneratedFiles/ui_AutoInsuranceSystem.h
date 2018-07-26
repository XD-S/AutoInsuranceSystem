/********************************************************************************
** Form generated from reading UI file 'AutoInsuranceSystem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOINSURANCESYSTEM_H
#define UI_AUTOINSURANCESYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoInsuranceSystemClass
{
public:
    QWidget *centralWidget;
    QPushButton *Insured;
    QFrame *line;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AutoInsuranceSystemClass)
    {
        if (AutoInsuranceSystemClass->objectName().isEmpty())
            AutoInsuranceSystemClass->setObjectName(QStringLiteral("AutoInsuranceSystemClass"));
        AutoInsuranceSystemClass->setEnabled(true);
        AutoInsuranceSystemClass->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AutoInsuranceSystemClass->sizePolicy().hasHeightForWidth());
        AutoInsuranceSystemClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(AutoInsuranceSystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Insured = new QPushButton(centralWidget);
        Insured->setObjectName(QStringLiteral("Insured"));
        Insured->setGeometry(QRect(10, 10, 110, 40));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(120, 0, 20, 800));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        AutoInsuranceSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AutoInsuranceSystemClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AutoInsuranceSystemClass->setStatusBar(statusBar);

        retranslateUi(AutoInsuranceSystemClass);

        QMetaObject::connectSlotsByName(AutoInsuranceSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *AutoInsuranceSystemClass)
    {
        AutoInsuranceSystemClass->setWindowTitle(QApplication::translate("AutoInsuranceSystemClass", "AutoInsuranceSystem", nullptr));
        Insured->setText(QApplication::translate("AutoInsuranceSystemClass", "\346\212\225\344\277\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoInsuranceSystemClass: public Ui_AutoInsuranceSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOINSURANCESYSTEM_H
