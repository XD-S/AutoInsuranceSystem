#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sys_insurancecomputer.h"
#include "MySqlConnect.h"
extern MySqlConnect *q;
class sys_insurancecomputer : public QMainWindow
{
	Q_OBJECT

public:
	sys_insurancecomputer(QWidget *parent = Q_NULLPTR);
	//~insur_guaranteeslip();

public slots:
	void Entry_click();
	void Cancel_click();

private:
	void closeEvent(QCloseEvent *event);
	string GetInsertCommand();
	Ui::sys_insurancecomputerForm ui;
	QWidget *parent;
};
