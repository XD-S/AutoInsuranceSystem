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
	QStandardItemModel *InsuredModel;//��������ı�ͷ��ʼ������
	QStandardItemModel *CompanyModel;//�������õı�ͷ��ʼ��
	QStandardItemModel *PersonnelModel;//�Ŷӹ���ı�ͷ��ʼ��
	QStandardItemModel *ClaimModel;//�������ı�ͷ��ʼ��

	char InsuredTableViewItem[10][20] =
	{
		u8"Ͷ������",
		u8"���յ���",
		u8"��ǿ�պ�",
		u8"��ҵ�պ�",
		u8"��ϵ��",
		u8"��ϵ�绰",
		u8"���֤��",
		u8"������",
		u8"��ڲ���",
		u8"���ѽ���״��"
	};
	char CompanyTableViewItem[2][20] =
	{
		u8"�б���˾",
		u8"����"
	};
	char PersonnelTableViewItem[10][20] =
	{
		u8"����",
		u8"��״",
		u8"��Դ",
		u8"��ڲ���",
		u8"�Ա�",
		u8"ѧ��",
		u8"ҵ����",
		u8"���֤��",
		u8"ԭְҵ",
		u8"��ϵ�绰"
	};
	char ClaimTableViewItem[10][30]
	{
		u8"ҵ����",
		u8"���ƺ�",
		u8"��������",
		u8"������λ�����",
		u8"��ϵ��",
		u8"������������",
		u8"������ʧ",
		u8"ʵ��������",
		u8"������ڲ���",
		u8"���������ص�"
	};
	/*insur_guaranteeslip * d = Q_NULLPTR;*/
};
