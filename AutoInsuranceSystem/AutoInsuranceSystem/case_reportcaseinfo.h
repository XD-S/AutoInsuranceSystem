#pragma once

#include <QtWidgets/QMainWindow>
#include <iostream>
#include <string>
#include "ui_case_reportcaseinfo.h"
#include "AutoInsuranceSystem.h"
#include "MySqlConnect.h"
using namespace std;
extern MySqlConnect *q;
class case_reportcaseinfo : public QMainWindow
{
	Q_OBJECT

public:
	case_reportcaseinfo(QWidget *parent = Q_NULLPTR,int items=-1);
	//~insur_guaranteeslip();
	void LoadInformation();

public slots:
	void Entry_click();
	void Cancel_click();
	void PlateNumberChanged();
	void EmployeeNameChanged();

private:
	void closeEvent(QCloseEvent *event);
	void initQComboBox();

	string GetUpdateCommand();
	string GetInsertCommand();

	Ui::case_reportcaseinfoForm ui;
	QWidget *parent;
	int item;
};
