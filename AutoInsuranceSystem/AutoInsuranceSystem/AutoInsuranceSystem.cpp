#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());


	//绑定按钮的槽函数
	connect(ui.Insured, SIGNAL(clicked()),this, SLOT(Insured_click()));

}
void AutoInsuranceSystem::Insured_click()
{
	/*if(d == Q_NULLPTR) d = new insur_guaranteeslip(this);
	if (d != Q_NULLPTR) d->show();*/
	insur_guaranteeslip *d = new insur_guaranteeslip(this);
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}