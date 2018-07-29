#include "Inquire.h"
Inquire::Inquire(QWidget *parent, int inquires)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());
	this->parent = parent;
	inquire = inquires;
	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));

	if (inquires == Inquires::PlateNumberInquiry)
	{
		ui.INSUR_LABEL->setText(u8"���Ʋ�ѯ");
		ui.label_25->setText(u8"����");
	}
	else if (inquires == Inquires::ManagerInquiry)
	{
		ui.INSUR_LABEL->setText(u8"�����˲�ѯ");
		ui.label_25->setText(u8"������");
	}
}

void Inquire::closeEvent(QCloseEvent *event)
{
	event->ignore();
}

void Inquire::Entry_click()
{
	if (inquire == Inquires::PlateNumberInquiry)
	{
		q->AddItem("insur_guaranteeslip","PlateNumber",ui.InquireValue->text().toUtf8().toStdString(), ((AutoInsuranceSystem *)this->parent)->InquireModel, vector<int> {1, 2, 5, 4, 6, 7, 8, 9, 10, 11});
	}
	else if (inquire == Inquires::ManagerInquiry)
	{
		q->AddItem("insur_guaranteeslip", "Agent", ui.InquireValue->text().toUtf8().toStdString(), ((AutoInsuranceSystem *)this->parent)->InquireModel, vector<int> { 1, 2, 5, 4, 6, 7, 8, 9, 10, 11});
	}
	delete this;
}