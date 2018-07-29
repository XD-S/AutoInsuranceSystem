#pragma once

#include <QtWidgets/QMainWindow>
#include <iostream>
#include <string>
#include "ui_sys_employeeinfo.h"
#include "AutoInsuranceSystem.h"
#include "MySqlConnect.h"
using namespace std;
extern MySqlConnect *q;
class sys_employeeinfo : public QMainWindow
{
	Q_OBJECT

public:
	sys_employeeinfo(QWidget *parent = Q_NULLPTR, int items = -1);
	//~insur_guaranteeslip();
	void LoadInformation();
public slots:
	void Entry_click();
	void Cancel_click();
private:
	void closeEvent(QCloseEvent *event);
	void initQComboBox();

	string GetUpdateCommand();
	string GetInsertCommand();

	Ui::sys_employeeinfoForm ui;
	QWidget *parent;
	int item;
};
