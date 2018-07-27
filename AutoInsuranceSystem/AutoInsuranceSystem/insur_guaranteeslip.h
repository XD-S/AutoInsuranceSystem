#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_insur_guaranteeslip.h"

class insur_guaranteeslip : public QMainWindow
{
	Q_OBJECT

public:
	insur_guaranteeslip(QWidget *parent = Q_NULLPTR);
	//~insur_guaranteeslip();

public slots:
	void Entry_click();
	void Cancel_click();
private:
	void closeEvent(QCloseEvent *event);

	Ui::insur_guaranteeslipForm ui;
	QWidget *parent;
};
