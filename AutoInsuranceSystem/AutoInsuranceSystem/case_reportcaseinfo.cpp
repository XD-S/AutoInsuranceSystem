#include "case_reportcaseinfo.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
case_reportcaseinfo::case_reportcaseinfo(QWidget *parent,int items)
	: QMainWindow(parent)
{
	item = items;
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());
	//�����Ļ���
	this->parent = parent;

	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));
	this->initQComboBox();

}
void case_reportcaseinfo::Cancel_click()
{
	delete this;
}
void case_reportcaseinfo::Entry_click()
{
	//sql��䣬¼����Ϣ
	QMessageBox::about(this, u8"��ʾ��", u8"¼����Ϣ�ɹ�����");
	delete this;
}

void case_reportcaseinfo::closeEvent(QCloseEvent *event)
{
	event->ignore();
}

void case_reportcaseinfo::initQComboBox()
{
	q->AddComboBoxItem("insur_guaranteeslip", "PlateNumber", ui.PlateNumber);
	q->AddComboBoxItem("sys_employeeinfo", "EmployeeName", ui.EmployeeName);
	ui.TimeOfOccurrenceOfCase->setDisplayFormat("yyyy-MM-dd");
	ui.DateOfAcceptance->setDisplayFormat("yyyy-MM-dd");
}
