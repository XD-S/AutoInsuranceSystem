#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());


	//�󶨰�ť�Ĳۺ���
	connect(ui.Insured, SIGNAL(clicked()),this, SLOT(Insured_click()));

}
void AutoInsuranceSystem::Insured_click()
{
	/*if(d == Q_NULLPTR) d = new insur_guaranteeslip(this);
	if (d != Q_NULLPTR) d->show();*/
	insur_guaranteeslip *d = new insur_guaranteeslip(this);
	//���ø����ڲ�����
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}