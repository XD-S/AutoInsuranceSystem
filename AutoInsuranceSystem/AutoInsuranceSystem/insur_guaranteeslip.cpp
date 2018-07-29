#include "insur_guaranteeslip.h"

insur_guaranteeslip::insur_guaranteeslip(QWidget *parent,int items)
	: QMainWindow(parent)
{
	item = items;
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//上下文环境
	this->parent = parent;

	connect(ui.Entry, SIGNAL(clicked()),this,SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));

	connect(ui.Agent, SIGNAL(currentIndexChanged(int)), this, SLOT(AgentChanged()));
	this->initQComboBox();
	if (item != -1)
	{
		ui.Entry->setText(u8"修改");
		//this->LoadInformation();
	}
}

void insur_guaranteeslip::Cancel_click()
{
	delete this;
}

void insur_guaranteeslip::Entry_click()
{
	if (item == -1)
	{
		if (!q->Command(this->GetInsertCommand()))
		{
			QMessageBox::critical(NULL, u8"提示：", u8"录入信息失败！！");
			return;
		}
		q->UpdateId("insur_guaranteeslip");
		QMessageBox::about(this, u8"提示：", u8"录入信息成功！！");
	}
	else
	{
		if (!q->Command(this->GetUpdateCommand()))
		{
			QMessageBox::critical(NULL, u8"提示：", u8"修改信息失败！！");
			return;
		}
		q->UpdateId("insur_guaranteeslip");
		QMessageBox::about(this, u8"提示：", u8"修改信息成功！！");
	}
	((AutoInsuranceSystem*)this->parent)->UpdateViewTable("insur_guaranteeslip");
	delete this;
}

void insur_guaranteeslip::closeEvent(QCloseEvent *event)
{
	event->ignore();
}

void insur_guaranteeslip::initQComboBox()
{
	q->AddComboBoxItem("sys_insurancecomputer","CompanyName",ui.InsuranceCompany);
	q->AddComboBoxItem("sys_employeeinfo", "EmployeeName", ui.Agent);
	ui.InsuranceStartDate->setDisplayFormat("yyyy-MM-dd");
	ui.InsuranceEndDate->setDisplayFormat("yyyy-MM-dd");
	ui.InsurancePaymentDate->setDisplayFormat("yyyy-MM-dd");
}

void insur_guaranteeslip::AgentChanged()
{
	ui.Department->setText(QString::fromStdString(q->GetItemSelect("sys_employeeinfo", "Department", "EmployeeName", ui.Agent->currentText().toUtf8().toStdString())));
}

void insur_guaranteeslip::LoadInformation()
{
	ui.InsuranceStartDate->setDateTime(QDateTime::fromString(q->GetItemSelect("insur_guaranteeslip", "InsuranceStartDate", item).c_str(), "yyyy-MM-dd"));
	ui.InsuranceEndDate->setDateTime(QDateTime::fromString(q->GetItemSelect("insur_guaranteeslip", "InsuranceEndDate", item).c_str(), "yyyy-MM-dd"));
	ui.InsuranceCompany->setCurrentIndex(ui.InsuranceCompany->findText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "InsuranceCompany", item))));
	ui.CommercialRiskCode->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "CommercialRiskCode", item)));
	ui.TrafficRiskCode->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "TrafficRiskCode", item)));
	ui.Contacts->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "Contacts", item)));
	ui.Telephone->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "Telephone", item)));
	ui.IdCard->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "IdCard", item)));
	ui.Agent->setCurrentIndex(ui.Agent->findText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "Agent", item))));
	ui.Department->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "Department", item)));
	ui.PaymentState->setCurrentIndex(ui.PaymentState->findText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "PaymentState", item))));
	ui.InsurancePaymentDate->setDateTime(QDateTime::fromString(q->GetItemSelect("insur_guaranteeslip", "InsurancePaymentDate", item).c_str(), "yyyy-MM-dd"));
	ui.PaymentMethod->setCurrentIndex(ui.PaymentMethod->findText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "PaymentMethod", item))));
	ui.TotalPremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "TotalPremium", item)));
	ui.TotalCommercialPremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "TotalCommercialPremium", item)));
	ui.GrossPremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "GrossPremium", item)));
	ui.StrongPreferenceRatio->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "StrongPreferenceRatio", item)));
	ui.CommercialPreferenceRatio->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "CommercialPreferenceRatio", item)));
	ui.ChiuQiangShouldBeCharged->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "ChiuQiangShouldBeCharged", item)));
	ui.CommercialCharges->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "CommercialCharges", item)));
	ui.TotalReceivable->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "TotalReceivable", item)));
	ui.CommissionCost->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "CommissionCost", item)));
	ui.CarOwner->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "CarOwner", item)));
	ui.PlateNumber->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "PlateNumber", item)));
	ui.FrameNumber->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "FrameNumber", item)));
	ui.MotorcycleType->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "MotorcycleType", item)));
	ui.EngineNumber->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "EngineNumber", item)));
	ui.PolicyHolder->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "PolicyHolder", item)));
	ui.CarBrand->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "CarBrand", item)));
	ui.SeatingNumber->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "SeatingNumber", item)));
	ui.InsurancedPerson->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "InsurancedPerson", item)));
	ui.SalesDate->setDateTime(QDateTime::fromString(q->GetItemSelect("insur_guaranteeslip", "SalesDate", item).c_str(), "yyyy-MM-dd"));
	ui.NewCarPurchasePrice->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "NewCarPurchasePrice", item)));
	ui.Description->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "Description", item)));
	ui.VehicleLossInsurance->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "VehicleLossInsurance", item)));
	ui.InsurancePremiumPorLossOfVehicle->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "InsurancePremiumPorLossOfVehicle", item)));
	ui.ThirdPartyLiabilityCoverage->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "ThirdPartyLiabilityCoverage", item)));
	ui.ThirdPartyLiabilityInsurancePremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "ThirdPartyLiabilityInsurancePremium", item)));
	ui.SpontaneousCombustionLossInsurance->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "SpontaneousCombustionLossInsurance", item)));
	ui.SpontaneousCombustionLossInsurancePremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "SpontaneousCombustionLossInsurancePremium", item)));
	ui.ScarInsuranceAmount->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "ScarInsuranceAmount", item)));
	ui.ScarInsurancePremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "ScarInsurancePremium", item)));
	ui.InsuranceCoverage->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "InsuranceCoverage", item)));
	ui.PremiumInsurancePremium->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "PremiumInsurancePremium", item)));
	ui.Description_2->setText(QString::fromStdString(q->GetItemSelect("insur_guaranteeslip", "Description_2", item)));
}

string insur_guaranteeslip::GetUpdateCommand()
{
	string ans = "UPDATE `carinsurancessystem`.`insur_guaranteeslip` SET ";
	ans = ans + "`InsuranceStartDate`='"+ui.InsuranceStartDate->text().toUtf8().toStdString()+"', ";
	ans = ans + "`InsuranceEndDate`='"+ui.InsuranceEndDate->text().toUtf8().toStdString()+"', ";
	ans = ans + "`InsuranceCompany`='"+ui.InsuranceCompany->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`CommercialRiskCode`='"+ui.CommercialRiskCode->text().toUtf8().toStdString()+"', ";
	ans = ans + "`TrafficRiskCode`='"+ui.TrafficRiskCode->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Contacts`='"+ui.Contacts->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Telephone`='"+ui.Telephone->text().toUtf8().toStdString()+"', ";
	ans = ans + "`IdCard`='"+ui.IdCard->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Agent`='"+ui.Agent->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`Department`='"+ui.Department->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PaymentState`='"+ui.PaymentState->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`InsurancePaymentDate`='"+ui.InsurancePaymentDate->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PaymentMethod`='"+ui.PaymentMethod->currentText().toUtf8().toStdString()+"', ";
	ans = ans + "`CarOwner`='"+ui.CarOwner->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PlateNumber`='"+ui.PlateNumber->text().toUtf8().toStdString()+"', ";
	ans = ans + "`FrameNumber`='"+ui.FrameNumber->text().toUtf8().toStdString()+"', ";
	ans = ans + "`MotorcycleType`='"+ui.MotorcycleType->text().toUtf8().toStdString()+"', ";
	ans = ans + "`EngineNumber`='"+ui.EngineNumber->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PolicyHolder`='"+ui.PolicyHolder->text().toUtf8().toStdString()+"', ";
	ans = ans + "`CarBrand`='"+ui.CarBrand->text().toUtf8().toStdString()+"', ";
	ans = ans + "`SeatingNumber`='"+ui.SeatingNumber->text().toUtf8().toStdString()+"', ";
	ans = ans + "`InsurancedPerson`='"+ui.InsurancedPerson->text().toUtf8().toStdString()+"', ";
	ans = ans + "`SalesDate`='"+ui.SalesDate->text().toUtf8().toStdString()+"', ";
	ans = ans + "`NewCarPurchasePrice`='"+ui.NewCarPurchasePrice->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Description`='"+ui.Description->text().toUtf8().toStdString()+"', ";
	ans = ans + "`VehicleLossInsurance`='"+ui.VehicleLossInsurance->text().toUtf8().toStdString()+"', ";
	ans = ans + "`InsurancePremiumPorLossOfVehicle`='"+ui.InsurancePremiumPorLossOfVehicle->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ThirdPartyLiabilityCoverage`='"+ui.ThirdPartyLiabilityCoverage->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ThirdPartyLiabilityInsurancePremium`='"+ui.ThirdPartyLiabilityInsurancePremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`SpontaneousCombustionLossInsurance`='"+ui.SpontaneousCombustionLossInsurance->text().toUtf8().toStdString()+"', ";
	ans = ans + "`SpontaneousCombustionLossInsurancePremium`='"+ui.SpontaneousCombustionLossInsurancePremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ScarInsuranceAmount`='"+ui.ScarInsuranceAmount->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ScarInsurancePremium`='"+ui.ScarInsurancePremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`InsuranceCoverage`='"+ui.InsuranceCoverage->text().toUtf8().toStdString()+"', ";
	ans = ans + "`PremiumInsurancePremium`='"+ui.PremiumInsurancePremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Description_2`='"+ui.Description_2->text().toUtf8().toStdString()+"', ";
	ans = ans + "`StrongPreferenceRatio`='"+ui.StrongPreferenceRatio->text().toUtf8().toStdString()+"', ";
	ans = ans + "`CommercialPreferenceRatio`='"+ui.CommercialPreferenceRatio->text().toUtf8().toStdString()+"', ";
	ans = ans + "`TotalPremium`='"+ui.TotalPremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`TotalCommercialPremium`='"+ui.TotalCommercialPremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`GrossPremium`='"+ui.GrossPremium->text().toUtf8().toStdString()+"', ";
	ans = ans + "`ChiuQiangShouldBeCharged`='"+ui.ChiuQiangShouldBeCharged->text().toUtf8().toStdString()+"', ";
	ans = ans + "`CommercialCharges`='"+ui.CommercialCharges->text().toUtf8().toStdString()+"', ";
	ans = ans + "`TotalReceivable`='"+ui.TotalReceivable->text().toUtf8().toStdString()+"', ";
	ans = ans + "`CommissionCost`='"+ui.CommissionCost->text().toUtf8().toStdString()+"', ";
	ans = ans + "`Totalinsuredamount`='"+to_string(this->Totalinsuredamount)+"' ";
	ans = ans + "WHERE (`id`='"+to_string(this->item)+"');";
	return ans;
}

string insur_guaranteeslip::GetInsertCommand()
{
	string ans = "INSERT INTO `carinsurancessystem`.`insur_guaranteeslip` (`InsuranceStartDate`, `InsuranceEndDate`, `InsuranceCompany`, `CommercialRiskCode`, `TrafficRiskCode`, `Contacts`, `Telephone`, `IdCard`, `Agent`, `Department`, `PaymentState`, `InsurancePaymentDate`, `PaymentMethod`, `CarOwner`, `PlateNumber`, `FrameNumber`, `MotorcycleType`, `EngineNumber`, `PolicyHolder`, `CarBrand`, `SeatingNumber`, `InsurancedPerson`, `SalesDate`, `NewCarPurchasePrice`, `Description`, `VehicleLossInsurance`, `InsurancePremiumPorLossOfVehicle`, `ThirdPartyLiabilityCoverage`, `ThirdPartyLiabilityInsurancePremium`, `SpontaneousCombustionLossInsurance`, `SpontaneousCombustionLossInsurancePremium`, `ScarInsuranceAmount`, `ScarInsurancePremium`, `InsuranceCoverage`, `PremiumInsurancePremium`, `Description_2`, `StrongPreferenceRatio`, `CommercialPreferenceRatio`, `TotalPremium`, `TotalCommercialPremium`, `GrossPremium`, `ChiuQiangShouldBeCharged`, `CommercialCharges`, `TotalReceivable`, `CommissionCost`, `Totalinsuredamount`) VALUES (";
	ans = ans + "'"+ ui.InsuranceStartDate->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.InsuranceEndDate->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.InsuranceCompany->currentText().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CommercialRiskCode->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.TrafficRiskCode->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Contacts->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Telephone->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.IdCard->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Agent->currentText().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Department->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PaymentState->currentText().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.InsurancePaymentDate->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PaymentMethod->currentText().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CarOwner->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PlateNumber->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.FrameNumber->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.MotorcycleType->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.EngineNumber->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PolicyHolder->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CarBrand->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.SeatingNumber->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.InsurancedPerson->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.SalesDate->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.NewCarPurchasePrice->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Description->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.VehicleLossInsurance->text().toUtf8().toStdString() + "', ";
	ans = ans + "'"+ ui.InsurancePremiumPorLossOfVehicle->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ThirdPartyLiabilityCoverage->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ThirdPartyLiabilityInsurancePremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.SpontaneousCombustionLossInsurance->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.SpontaneousCombustionLossInsurancePremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ScarInsuranceAmount->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ScarInsurancePremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.InsuranceCoverage->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.PremiumInsurancePremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.Description_2->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.StrongPreferenceRatio->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CommercialPreferenceRatio->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.TotalPremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.TotalCommercialPremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.GrossPremium->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.ChiuQiangShouldBeCharged->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CommercialCharges->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.TotalReceivable->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ ui.CommissionCost->text().toUtf8().toStdString() +"', ";
	ans = ans + "'"+ to_string(this->Totalinsuredamount) +"');";
	return ans;
}
