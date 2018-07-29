#include "case_reportcaseinfo.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
case_reportcaseinfo::case_reportcaseinfo(QWidget *parent,int items)
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
	connect(ui.PlateNumber, SIGNAL(currentIndexChanged(int)), this, SLOT(PlateNumberChanged()));
	connect(ui.EmployeeName, SIGNAL(currentIndexChanged(int)), this, SLOT(EmployeeNameChanged()));


	this->initQComboBox();
	if (item != -1)
	{
		ui.Entry->setText(u8"修改");
	}
}
void case_reportcaseinfo::Cancel_click()
{
	delete this;
}

void case_reportcaseinfo::Entry_click()
{
	if (item == -1)
	{
		if (!q->Command(this->GetInsertCommand()))
		{
			QMessageBox::critical(NULL, u8"提示：", u8"录入信息失败！！");
			return;
		}
		q->UpdateId("case_reportcaseinfo");
		QMessageBox::about(this, u8"提示：", u8"录入信息成功！！");
	}
	else
	{
		if (!q->Command(this->GetUpdateCommand()))
		{
			QMessageBox::critical(NULL, u8"提示：", u8"修改信息失败！！");
			return;
		}
		q->UpdateId("case_reportcaseinfo");
		QMessageBox::about(this, u8"提示：", u8"修改信息成功！！");
	}
	((AutoInsuranceSystem*)this->parent)->UpdateViewTable("case_reportcaseinfo");
	delete this;
}

void case_reportcaseinfo::PlateNumberChanged()
{
	ui.CompanyName->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip","InsuranceCompany","PlateNumber", ui.PlateNumber->currentText().toUtf8().toStdString())));
	ui.Insurant->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "InsurancedPerson", "PlateNumber", ui.PlateNumber->currentText().toUtf8().toStdString())));
}

void case_reportcaseinfo::EmployeeNameChanged()
{
	ui.Department->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Department", "EmployeeName", ui.EmployeeName->currentText().toUtf8().toStdString())));
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

void case_reportcaseinfo::LoadInformation()
{
	ui.ClaimNumber->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "ClaimNumber", item)));
	ui.TimeOfOccurrenceOfCase->setDateTime(QDateTime::fromString(q->GetItemSelect("case_reportcaseinfo", "TimeOfOccurrenceOfCase", item).c_str(), "yyyy-MM-dd"));
	ui.Telephone->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "Telephone", item)));
	ui.DateOfAcceptance->setDateTime(QDateTime::fromString(q->GetItemSelect("case_reportcaseinfo", "DateOfAcceptance", item).c_str(), "yyyy-MM-dd"));
	ui.PlateNumber->setCurrentIndex(ui.PlateNumber->findText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "PlateNumber", item))));
	ui.CompanyName->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "CompanyName", item)));
	ui.CauseOfCase->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "CauseOfCase", item)));
	ui.Insurant->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "Insurant", item)));
	ui.EmployeeName->setCurrentIndex(ui.EmployeeName->findText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "EmployeeName", item))));
	ui.Department->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "Department", item)));
	ui.DamageExpectancy->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "DamageExpectancy", item)));
	ui.PlaceOfOccurrenceOfACase->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "PlaceOfOccurrenceOfACase", item)));
	ui.ClaimState->setCurrentIndex(ui.ClaimState->findText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "ClaimState", item))));
	ui.ReportingUnitOrIndividual->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "ReportingUnitOrIndividual", item)));
	ui.ActualClaimAmount->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "ActualClaimAmount", item)));
	ui.Description->setText(QString::fromStdString(q->GetItemSelect("case_reportcaseinfo", "Description", item)));
}

string case_reportcaseinfo::GetUpdateCommand()
{
	string ans = "UPDATE `carinsurancessystem`.`case_reportcaseinfo` SET ";
	ans = ans + "`ClaimNumber`='"+ui.ClaimNumber->text().toUtf8().toStdString()+"', ";
	ans = ans + "`TimeOfOccurrenceOfCase`='"+ui.TimeOfOccurrenceOfCase->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Telephone`='"+ui.Telephone->text().toUtf8().toStdString()+"', ";
	ans = ans + "`DateOfAcceptance`='"+ui.DateOfAcceptance->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PlateNumber`='"+ui.PlateNumber->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`CompanyName`='"+ui.CompanyName->text().toUtf8().toStdString()+"', ";
	ans = ans + "`CauseOfCase`='"+ui.CauseOfCase->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Insurant`='"+ui.Insurant->text().toUtf8().toStdString()+"', ";
	ans = ans + "`EmployeeName`='"+ui.EmployeeName->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`Department`='"+ui.Department->text().toUtf8().toStdString()+"', ";
	ans = ans + "`DamageExpectancy`='"+ui.DamageExpectancy->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PlaceOfOccurrenceOfACase`='"+ui.PlaceOfOccurrenceOfACase->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ClaimState`='"+ui.ClaimState->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`ReportingUnitOrIndividual`='"+ui.ReportingUnitOrIndividual->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ActualClaimAmount`='"+ui.ActualClaimAmount->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Description`='"+ui.Description->toPlainText().toUtf8().toStdString()+"' ";
	ans = ans + "WHERE (`id`='"+to_string(item)+"');";
	return ans;
}

string case_reportcaseinfo::GetInsertCommand()
{
	string ans = "INSERT INTO `carinsurancessystem`.`case_reportcaseinfo` (`ClaimNumber`, `TimeOfOccurrenceOfCase`, `Telephone`, `DateOfAcceptance`, `PlateNumber`, `CompanyName`, `CauseOfCase`, `Insurant`, `EmployeeName`, `Department`, `DamageExpectancy`, `PlaceOfOccurrenceOfACase`, `ClaimState`, `ReportingUnitOrIndividual`, `ActualClaimAmount`, `Description`) VALUES (";
	ans = ans + "'"+ ui.ClaimNumber->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.TimeOfOccurrenceOfCase->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Telephone->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.DateOfAcceptance->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PlateNumber->currentText().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CompanyName->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CauseOfCase->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Insurant->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.EmployeeName->currentText().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Department->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.DamageExpectancy->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PlaceOfOccurrenceOfACase->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ClaimState->currentText().toUtf8().toStdString() + "', ";
	ans = ans + "'"+ ui.ReportingUnitOrIndividual->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ActualClaimAmount->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Description->toPlainText().toUtf8().toStdString() +"');";
	return ans;
}
