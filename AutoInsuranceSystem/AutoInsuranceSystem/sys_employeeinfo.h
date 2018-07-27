#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sys_employeeinfo.h"

class sys_employeeinfo : public QMainWindow
{
	Q_OBJECT

public:
	sys_employeeinfo(QWidget *parent = Q_NULLPTR);
	//~insur_guaranteeslip();

public slots:
	void Entry_click();
	void Cancel_click();
private:
	void closeEvent(QCloseEvent *event);

	Ui::sys_employeeinfoForm ui;
	QWidget *parent;
};
