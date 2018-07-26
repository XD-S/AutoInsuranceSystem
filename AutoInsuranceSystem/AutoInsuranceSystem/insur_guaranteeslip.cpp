#include "insur_guaranteeslip.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
insur_guaranteeslip::insur_guaranteeslip(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//上下文环境
	this->parent = parent;
	//this->setEnabled(true);
	/*
	//商业险号，输入限制,仅仅能输入数字
	QRegExp regx("[0-9]+$");
	QValidator *validator = new QRegExpValidator(regx, ui.CommercialRiskCode);
	ui.CommercialRiskCode->setValidator(validator);
	//交强险号,输入限制，仅仅能输入数字
	ui.TrafficRiskCode->setValidator(validator);
	*/
	connect(ui.Entry, SIGNAL(clicked()),this,SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));
}
void insur_guaranteeslip::Cancel_click()
{
	delete this;
}
void insur_guaranteeslip::Entry_click()
{
	//sql语句，录入信息
	QMessageBox::about(this,u8"提示：",u8"录入信息成功！！");
	delete this;
}

void insur_guaranteeslip::closeEvent(QCloseEvent *event)
{
	event->ignore();
}
