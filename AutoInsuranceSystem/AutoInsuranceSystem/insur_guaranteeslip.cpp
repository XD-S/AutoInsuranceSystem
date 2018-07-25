#include "insur_guaranteeslip.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
insur_guaranteeslip::insur_guaranteeslip(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->parent = parent;
	/*
	//商业险号，输入限制,仅仅能输入数字
	QRegExp regx("[0-9]+$");
	QValidator *validator = new QRegExpValidator(regx, ui.CommercialRiskCode);
	ui.CommercialRiskCode->setValidator(validator);
	//交强险号,输入限制，仅仅能输入数字
	ui.TrafficRiskCode->setValidator(validator);
	*/
	
}
void insur_guaranteeslip::closeEvent(QCloseEvent *event)
{
	this->parent->show();
	event->accept();
}