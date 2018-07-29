#include "Login.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
Login::Login(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//上下文环境
	this->parent = parent;

	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));
	ui.Entry->setStyleSheet("QPushButton{ border - radius:20px; background:rgb(110, 190, 10); color:white; }"
		"QPushButton:hover{background:rgb(140, 220, 35);}");
	ui.password->setEchoMode(QLineEdit::Password);
}

void Login::Entry_click()
{
	try
	{
		q = new MySqlConnect("132.232.13.36", ui.user->text().toUtf8().toStdString(), ui.password->text().toUtf8().toStdString(), "carinsurancessystem");
		AutoInsuranceSystem * w = new AutoInsuranceSystem();
		w->show();
		this->hide();
		return;
	}
	catch (string &error_msg)
	{
		QMessageBox::critical(NULL, u8"提示：", QString::fromStdString(error_msg));
		cout << error_msg << endl;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
	}
	delete q;
}
