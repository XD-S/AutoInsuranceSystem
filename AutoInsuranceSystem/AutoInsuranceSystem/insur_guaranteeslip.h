#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_insur_guaranteeslip.h"

class insur_guaranteeslip : public QMainWindow
{
	Q_OBJECT

public:
	insur_guaranteeslip(QWidget *parent = Q_NULLPTR);
	//~insur_guaranteeslip();

private:
	void closeEvent(QCloseEvent *event);
	Ui::Form ui;
	QWidget *parent;
};
