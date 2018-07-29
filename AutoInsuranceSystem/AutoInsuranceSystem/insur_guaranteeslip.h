#pragma once

#include <QtWidgets/QMainWindow>
#include <iostream>
#include <string>
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
#include "ui_insur_guaranteeslip.h"
#include "AutoInsuranceSystem.h"
#include "MySqlConnect.h"
using namespace std;
extern MySqlConnect *q;
class insur_guaranteeslip : public QMainWindow
{
	Q_OBJECT

public:
	insur_guaranteeslip(QWidget *parent = Q_NULLPTR,int items=-1);
	void LoadInformation();
	//~insur_guaranteeslip();

public slots:
	void Entry_click();
	void Cancel_click();
	void AgentChanged();
private:
	void closeEvent(QCloseEvent *event);
	void initQComboBox();
	
	string GetUpdateCommand();
	string GetInsertCommand();

	Ui::insur_guaranteeslipForm ui;
	QWidget *parent;
	int item;
	int Totalinsuredamount=0;
};
