#include "sys_employeeinfo.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>


sys_employeeinfo::sys_employeeinfo(QWidget *parent,int items)
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
	this->initQComboBox();
	if (item != -1)
	{
		ui.Entry->setText(u8"修改");
		this->LoadInformation();
	}
}
void sys_employeeinfo::Cancel_click()
{
	delete this;
}
void sys_employeeinfo::Entry_click()
{
	if (item == -1)
	{
		q->Command(this->GetInsertCommand());
		q->UpdateId("sys_employeeinfo");
		QMessageBox::about(this, u8"提示：", u8"录入信息成功！！");
	}
	else
	{
		q->Command(this->GetUpdateCommand());
		q->UpdateId("sys_employeeinfo");
		QMessageBox::about(this, u8"提示：", u8"修改信息成功！！");
	}
	((AutoInsuranceSystem*)this->parent)->UpdateViewTable("sys_employeeinfo");
	delete this;
}

void sys_employeeinfo::closeEvent(QCloseEvent *event)
{
	event->ignore();
}

void sys_employeeinfo::initQComboBox()
{
	q->AddComboBoxItem("sys_employeeinfo","EmployeeName",ui.ReferencesName);
	ui.BirthDay->setDisplayFormat("yyyy-MM-dd");
	ui.EntryTime->setDisplayFormat("yyyy-MM-dd");
}

void sys_employeeinfo::LoadInformation()
{
	ui.EmployeeName->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "EmployeeName", item)));
	ui.State->setCurrentIndex(ui.State->findText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "State", item))));
	ui.ReferencesName->setCurrentIndex(ui.ReferencesName->findText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "ReferencesName", item))));
	ui.Source->setCurrentIndex(ui.Source->findText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Source", item))));
	ui.Department->setCurrentIndex(ui.Department->findText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Department", item))));
	ui.EmployeeCode->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "EmployeeCode", item)));
	ui.Sex->setCurrentIndex(ui.Sex->findText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Sex", item))));
	ui.Academic->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Academic", item)));
	ui.Telephone->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Telephone", item)));
	ui.OriginalOccupation->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "OriginalOccupation", item)));
	ui.BirthDay->setDateTime(QDateTime::fromString(q->GetItemSelect("sys_employeeinfo", "BirthDay", item).c_str(),"yyyy-MM-dd"));
	ui.EntryTime->setDateTime(QDateTime::fromString(q->GetItemSelect("sys_employeeinfo", "EntryTime", item).c_str(), "yyyy-MM-dd"));
	ui.IdCard->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "IdCard", item)));
	ui.HomeAddress->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "HomeAddress", item)));
	ui.Description->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Description", item)));
}

string sys_employeeinfo::GetUpdateCommand()
{
	string ans = "UPDATE `carinsurancessystem`.`sys_employeeinfo` SET ";
	ans = ans + "`EmployeeName`='"+ui.EmployeeName->text().toUtf8().toStdString()+"', ";
	ans = ans + "`State`='"+ui.State->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`ReferencesName`='"+ui.ReferencesName->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`Source`='"+ui.Source->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`Department`='"+ui.Department->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`EmployeeCode`='"+ui.EmployeeCode->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Sex`='"+ui.Sex->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`Academic`='"+ui.Academic->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Telephone`='"+ui.Telephone->text().toUtf8().toStdString()+"', ";
	ans = ans + "`OriginalOccupation`='"+ui.OriginalOccupation->text().toUtf8().toStdString()+"', ";
	ans = ans + "`BirthDay`='"+ui.BirthDay->text().toUtf8().toStdString()+"', ";
	ans = ans + "`EntryTime`='"+ui.EntryTime->text().toUtf8().toStdString()+"', ";
	ans = ans + "`IdCard`='"+ui.IdCard->text().toUtf8().toStdString()+"', ";
	ans = ans + "`HomeAddress`='"+ui.HomeAddress->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Description`='"+ui.Description->toPlainText().toUtf8().toStdString()+"' ";
	ans = ans + "WHERE (`id`='"+std::to_string(item)+"');";
	return ans;
}

string sys_employeeinfo::GetInsertCommand()
{
	string ans = "INSERT INTO `carinsurancessystem`.`sys_employeeinfo` (`EmployeeName`, `State`, `ReferencesName`, `Source`, `Department`, `EmployeeCode`, `Sex`, `Academic`, `Telephone`, `OriginalOccupation`, `BirthDay`, `EntryTime`, `IdCard`, `HomeAddress`, `Description`) VALUES ('";
	ans = ans + ui.EmployeeName->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.State->currentText().toUtf8().toStdString() + "', '";
	ans = ans + ui.ReferencesName->currentText().toUtf8().toStdString() + "', '";
	ans = ans + ui.Source->currentText().toUtf8().toStdString() + "', '";
	ans = ans + ui.Department->currentText().toUtf8().toStdString() + "', '";
	ans = ans + ui.EmployeeCode->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.Sex->currentText().toUtf8().toStdString() + "', '";
	ans = ans + ui.Academic->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.Telephone->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.OriginalOccupation->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.BirthDay->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.EntryTime->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.IdCard->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.HomeAddress->text().toUtf8().toStdString() + "', '";
	ans = ans + ui.Description->toPlainText().toUtf8().toStdString() + "');";
	return ans;
}
