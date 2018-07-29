#pragma once

#include <QtWidgets/QMainWindow>
#include <iostream>
#include <string>
#include "ui_Login.h"
#include "AutoInsuranceSystem.h"
#include "MySqlConnect.h"
using namespace std;
extern MySqlConnect *q;
class Login : public QMainWindow
{
	Q_OBJECT

public:
	Login(QWidget *parent = Q_NULLPTR);
public slots:
	void Entry_click();
private:
	//void closeEvent(QCloseEvent *event);

	Ui::LoginForm ui;
	QWidget *parent;
};