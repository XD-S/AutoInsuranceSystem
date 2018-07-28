#include "sys_insurancecomputer.h"
#include <QCloseEvent>
#include <QMessageBox>
sys_insurancecomputer::sys_insurancecomputer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//上下文环境
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

	//sql语句，录入信息
	QMessageBox::about(this, u8"提示：", u8"录入信息成功！！");

	this->parent;

	delete this;
}
void sys_insurancecomputer::Cancel_click()
{
	delete this;
}