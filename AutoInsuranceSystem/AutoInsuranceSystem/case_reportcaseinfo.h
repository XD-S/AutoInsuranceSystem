#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_case_reportcaseinfo.h"

class case_reportcaseinfo : public QMainWindow
{
	Q_OBJECT

public:
	case_reportcaseinfo(QWidget *parent = Q_NULLPTR);
	//~insur_guaranteeslip();

public slots:
	void Entry_click();
	void Cancel_click();
private:
	void closeEvent(QCloseEvent *event);

	Ui::case_reportcaseinfoForm ui;
	QWidget *parent;
};
