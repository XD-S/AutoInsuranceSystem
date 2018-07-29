#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QTableView>
#include <QStandardItemModel>
#include <QCloseEvent>
#include "ui_Inquire.h"
#include "MySqlConnect.h"
#include "AutoInsuranceSystem.h"
extern MySqlConnect *q;
class Inquire : public QMainWindow
{
	Q_OBJECT

public:
	Inquire(QWidget *parent = Q_NULLPTR, int items = -1);
	//~insur_guaranteeslip();

public slots:
	void Entry_click();
private:
	void closeEvent(QCloseEvent *event);
	QWidget *parent;
	Ui::InquireForm ui;
	int inquire;
};
enum Inquires
{
	PlateNumberInquiry, ManagerInquiry
};