#include "insur_guaranteeslip.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
insur_guaranteeslip::insur_guaranteeslip(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());
	//�����Ļ���
	this->parent = parent;
	//this->setEnabled(true);
	/*
	//��ҵ�պţ���������,��������������
	QRegExp regx("[0-9]+$");
	QValidator *validator = new QRegExpValidator(regx, ui.CommercialRiskCode);
	ui.CommercialRiskCode->setValidator(validator);
	//��ǿ�պ�,�������ƣ���������������
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
	//sql��䣬¼����Ϣ
	QMessageBox::about(this,u8"��ʾ��",u8"¼����Ϣ�ɹ�����");
	delete this;
}

void insur_guaranteeslip::closeEvent(QCloseEvent *event)
{
	event->ignore();
}
