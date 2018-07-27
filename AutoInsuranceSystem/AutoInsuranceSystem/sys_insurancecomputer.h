#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sys_insurancecomputer.h"

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

	Ui::sys_insurancecomputerForm ui;
	QWidget *parent;
};
