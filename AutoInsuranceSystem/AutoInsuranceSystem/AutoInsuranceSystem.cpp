#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());


	//绑定按钮的槽函数
	connect(ui.pushButton, SIGNAL(clicked()),this, SLOT(click()));
	
}
void AutoInsuranceSystem::click()
{
	if(d== Q_NULLPTR) d = new insur_guaranteeslip(this);
	d->show();
	this->hide();
}