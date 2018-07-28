#include "sys_insurancecomputer.h"
#include <QCloseEvent>
#include <QMessageBox>
sys_insurancecomputer::sys_insurancecomputer(QWidget *parent,int items)
	: QMainWindow(parent)
{
	item = items;
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//上下文环境
	this->parent = parent;
	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));
	if (items != -1)
	{
		ui.Entry->setText(u8"修改");
		this->LoadInformation();
	}
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
string sys_insurancecomputer::GetUpdateCommand()
{
	string ans = "UPDATE `carinsurancessystem`.`sys_insurancecomputer` SET `CompanyCode`='0004',";
	ans = ans + " `CompanyName`='"+ ui.CompanyName->text().toUtf8().toStdString()+"'";
	ans = ans + ", `Description`='"+ ui.Description->toPlainText().toUtf8().toStdString()+"'";
	ans = ans + "WHERE(`id`='"+std::to_string(item)+"');";
	return ans;
}
void sys_insurancecomputer::LoadInformation()
{
	ui.CompanyName->setText(QString::fromStdString(q->GetItemSelect("sys_insurancecomputer","CompanyName",item)));
	ui.Description->setText(QString::fromStdString(q->GetItemSelect("sys_insurancecomputer", "Description", item)));
}
void sys_insurancecomputer::Entry_click()
{
	if (item == -1)
	{
		q->Command(this->GetInsertCommand());
		q->UpdateId("sys_insurancecomputer");
		QMessageBox::about(this, u8"提示：", u8"录入信息成功！！");
	}
	else
	{
		q->Command(this->GetUpdateCommand());
		q->UpdateId("sys_insurancecomputer");
		QMessageBox::about(this, u8"提示：", u8"修改信息成功！！");
	}

	((AutoInsuranceSystem*) this->parent)->UpdateViewTable("sys_insurancecomputer");

	delete this;
}
void sys_insurancecomputer::Cancel_click()
{
	delete this;
}