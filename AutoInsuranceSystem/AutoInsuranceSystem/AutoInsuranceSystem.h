#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QTableView>
#include <QStandardItemModel>
#include "ui_AutoInsuranceSystem.h"
#include "insur_guaranteeslip.h"
#include "sys_insurancecomputer.h"
#include "sys_employeeinfo.h"
#include "case_reportcaseinfo.h"
#include "MySqlConnect.h"
extern MySqlConnect *q;
class AutoInsuranceSystem : public QMainWindow
{
	Q_OBJECT

public:
	AutoInsuranceSystem(QWidget *parent = Q_NULLPTR);
	void UpdateViewTable();

public slots:
	void Insured_click();
	void CompanyEntry_click();
	void PersonnelEntry_click();
	void ClaimEntry_click();

private:
	Ui::AutoInsuranceSystemClass ui;
	QStandardItemModel *InsuredModel;//保单管理的表头初始化设置
	QStandardItemModel *CompanyModel;//基础设置的表头初始化
	QStandardItemModel *PersonnelModel;//团队管理的表头初始化
	QStandardItemModel *ClaimModel;//理赔管理的表头初始化

	char InsuredTableViewItem[10][20] =
	{
		u8"投保日期",
		u8"保险到期",
		u8"交强险号",
		u8"商业险号",
		u8"联系人",
		u8"联系电话",
		u8"身份证号",
		u8"经办人",
		u8"归口部门",
		u8"保费缴纳状况"
	};
	char CompanyTableViewItem[2][20] =
	{
		u8"承保公司",
		u8"描述"
	};
	char PersonnelTableViewItem[10][20] =
	{
		u8"姓名",
		u8"现状",
		u8"来源",
		u8"归口部门",
		u8"性别",
		u8"学历",
		u8"业务编号",
		u8"身份证号",
		u8"原职业",
		u8"联系电话"
	};
	char ClaimTableViewItem[10][30]
	{
		u8"业务编号",
		u8"车牌号",
		u8"受理日期",
		u8"报案单位或个人",
		u8"联系人",
		u8"案件发生日期",
		u8"估计损失",
		u8"实际理赔金额",
		u8"案件归口部门",
		u8"案件发生地点"
	};
	/*insur_guaranteeslip * d = Q_NULLPTR;*/
};
