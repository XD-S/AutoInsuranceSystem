#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());


	//�󶨰�ť�Ĳۺ���
	connect(ui.pushButton, SIGNAL(clicked()),this, SLOT(click()));
	
}
void AutoInsuranceSystem::click()
{
	if(d== Q_NULLPTR) d = new insur_guaranteeslip(this);
	d->show();
	this->hide();
}