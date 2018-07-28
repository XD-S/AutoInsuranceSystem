#include "sys_insurancecomputer.h"
#include <QCloseEvent>
#include <QMessageBox>
sys_insurancecomputer::sys_insurancecomputer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());
	//�����Ļ���
	this->parent = parent;
	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));
}
void sys_insurancecomputer::closeEvent(QCloseEvent *event)
{
	event->ignore();
}
string sys_insurancecomputer::GetInsertCommand()
{
	string ans = "INSERT INTO `carinsurancessystem`.`sys_insurancecomputer` (`CompanyCode`, `CompanyName`, `Description`) VALUES ('0004'";
	ans=ans+", '"+ui.CompanyName->text().toUtf8().toStdString()+"'";
	ans = ans + ", '" + ui.Description->toPlainText().toUtf8().toStdString() + "');";
	return ans;
}
void sys_insurancecomputer::Entry_click()
{
	q->Command(this->GetInsertCommand());
	q->UpdateId("sys_insurancecomputer");

	//sql��䣬¼����Ϣ
	QMessageBox::about(this, u8"��ʾ��", u8"¼����Ϣ�ɹ�����");

	this->parent;

	delete this;
}
void sys_insurancecomputer::Cancel_click()
{
	delete this;
}