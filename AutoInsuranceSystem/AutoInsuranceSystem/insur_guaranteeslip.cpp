#include "insur_guaranteeslip.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
insur_guaranteeslip::insur_guaranteeslip(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->parent = parent;
	/*
	//��ҵ�պţ���������,��������������
	QRegExp regx("[0-9]+$");
	QValidator *validator = new QRegExpValidator(regx, ui.CommercialRiskCode);
	ui.CommercialRiskCode->setValidator(validator);
	//��ǿ�պ�,�������ƣ���������������
	ui.TrafficRiskCode->setValidator(validator);
	*/
	
}
void insur_guaranteeslip::closeEvent(QCloseEvent *event)
{
	this->parent->show();
	event->accept();
}