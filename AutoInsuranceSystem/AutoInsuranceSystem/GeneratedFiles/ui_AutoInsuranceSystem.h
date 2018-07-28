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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoInsuranceSystemClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QFrame *line_2;
    QPushButton *CompanyEntry;
    QTableView *CompanyTableView;
    QPushButton *CompanyDelete;
    QWidget *tab;
    QFrame *line;
    QPushButton *Insured;
    QTableView *InsuredTableView;
    QWidget *tab_3;
    QFrame *line_3;
    QPushButton *PersonnelEntry;
    QTableView *PersonnelTableView;
    QPushButton *PersonnelDelete;
    QWidget *tab_4;
    QFrame *line_4;
    QPushButton *ClaimEntry;
    QTableView *ClaimTableView;
    QWidget *tab_5;
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
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1200, 800));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(120, 0, 10, 800));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        CompanyEntry = new QPushButton(tab_2);
        CompanyEntry->setObjectName(QStringLiteral("CompanyEntry"));
        CompanyEntry->setGeometry(QRect(5, 10, 110, 40));
        CompanyTableView = new QTableView(tab_2);
        CompanyTableView->setObjectName(QStringLiteral("CompanyTableView"));
        CompanyTableView->setGeometry(QRect(135, 0, 1050, 800));
        CompanyTableView->setStyleSheet(QStringLiteral(""));
        CompanyTableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        CompanyTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        CompanyTableView->setShowGrid(true);
        CompanyTableView->setGridStyle(Qt::SolidLine);
        CompanyDelete = new QPushButton(tab_2);
        CompanyDelete->setObjectName(QStringLiteral("CompanyDelete"));
        CompanyDelete->setGeometry(QRect(5, 60, 110, 40));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(120, 0, 10, 800));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        Insured = new QPushButton(tab);
        Insured->setObjectName(QStringLiteral("Insured"));
        Insured->setGeometry(QRect(5, 10, 110, 40));
        InsuredTableView = new QTableView(tab);
        InsuredTableView->setObjectName(QStringLiteral("InsuredTableView"));
        InsuredTableView->setGeometry(QRect(135, 0, 1050, 800));
        InsuredTableView->setStyleSheet(QStringLiteral(""));
        InsuredTableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        InsuredTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        InsuredTableView->setShowGrid(true);
        InsuredTableView->setGridStyle(Qt::SolidLine);
        tabWidget->addTab(tab, QString());
        Insured->raise();
        line->raise();
        InsuredTableView->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        line_3 = new QFrame(tab_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(120, 0, 10, 800));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        PersonnelEntry = new QPushButton(tab_3);
        PersonnelEntry->setObjectName(QStringLiteral("PersonnelEntry"));
        PersonnelEntry->setGeometry(QRect(5, 10, 110, 40));
        PersonnelTableView = new QTableView(tab_3);
        PersonnelTableView->setObjectName(QStringLiteral("PersonnelTableView"));
        PersonnelTableView->setGeometry(QRect(135, 0, 1050, 800));
        PersonnelTableView->setStyleSheet(QStringLiteral(""));
        PersonnelTableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        PersonnelTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        PersonnelTableView->setShowGrid(true);
        PersonnelTableView->setGridStyle(Qt::SolidLine);
        PersonnelDelete = new QPushButton(tab_3);
        PersonnelDelete->setObjectName(QStringLiteral("PersonnelDelete"));
        PersonnelDelete->setGeometry(QRect(5, 60, 110, 40));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        line_4 = new QFrame(tab_4);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(120, 0, 10, 800));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        ClaimEntry = new QPushButton(tab_4);
        ClaimEntry->setObjectName(QStringLiteral("ClaimEntry"));
        ClaimEntry->setGeometry(QRect(5, 10, 110, 40));
        ClaimTableView = new QTableView(tab_4);
        ClaimTableView->setObjectName(QStringLiteral("ClaimTableView"));
        ClaimTableView->setGeometry(QRect(135, 0, 1050, 800));
        ClaimTableView->setStyleSheet(QStringLiteral(""));
        ClaimTableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        ClaimTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        ClaimTableView->setShowGrid(true);
        ClaimTableView->setGridStyle(Qt::SolidLine);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        AutoInsuranceSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AutoInsuranceSystemClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AutoInsuranceSystemClass->setStatusBar(statusBar);

        retranslateUi(AutoInsuranceSystemClass);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AutoInsuranceSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *AutoInsuranceSystemClass)
    {
        AutoInsuranceSystemClass->setWindowTitle(QApplication::translate("AutoInsuranceSystemClass", "AutoInsuranceSystem", nullptr));
        CompanyEntry->setText(QApplication::translate("AutoInsuranceSystemClass", "\345\205\254\345\217\270\345\275\225\345\205\245", nullptr));
        CompanyDelete->setText(QApplication::translate("AutoInsuranceSystemClass", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AutoInsuranceSystemClass", "\345\237\272\347\241\200\350\256\276\347\275\256", nullptr));
        Insured->setText(QApplication::translate("AutoInsuranceSystemClass", "\350\275\246\351\231\251\345\275\225\345\205\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AutoInsuranceSystemClass", "\344\277\235\345\215\225\347\256\241\347\220\206", nullptr));
        PersonnelEntry->setText(QApplication::translate("AutoInsuranceSystemClass", "\344\272\272\345\221\230\345\275\225\345\205\245", nullptr));
        PersonnelDelete->setText(QApplication::translate("AutoInsuranceSystemClass", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AutoInsuranceSystemClass", "\345\233\242\351\230\237\347\256\241\347\220\206", nullptr));
        ClaimEntry->setText(QApplication::translate("AutoInsuranceSystemClass", "\347\220\206\350\265\224\345\275\225\345\205\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AutoInsuranceSystemClass", "\347\220\206\350\265\224\347\256\241\347\220\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("AutoInsuranceSystemClass", "\350\265\204\346\226\231\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoInsuranceSystemClass: public Ui_AutoInsuranceSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOINSURANCESYSTEM_H
