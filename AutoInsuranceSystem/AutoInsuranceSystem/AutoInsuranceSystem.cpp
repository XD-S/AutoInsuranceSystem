#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());


	//�󶨰�ť�Ĳۺ���
	connect(ui.Insured, SIGNAL(clicked()),this, SLOT(Insured_click()));
	connect(ui.CompanyEntry, SIGNAL(clicked()), this, SLOT(CompanyEntry_click()));
	connect(ui.PersonnelEntry, SIGNAL(clicked()), this, SLOT(PersonnelEntry_click()));
	connect(ui.ClaimEntry, SIGNAL(clicked()), this, SLOT(ClaimEntry_click()));

	//��������ı�ͷ��ʼ������
	QStandardItemModel *InsuredModel = new QStandardItemModel(20,10);
	ui.InsuredTableView->setModel(InsuredModel);
	for (int i = 0; i < 10; i++)
	{
		InsuredModel->setHeaderData(i, Qt::Horizontal,tr(this->InsuredTableViewItem[i]));
	}
	//�������õı�ͷ��ʼ��
	QStandardItemModel *CompanyModel = new QStandardItemModel(20, 2);
	ui.CompanyTableView->setModel(CompanyModel);
	for (int i = 0; i < 2; i++)
	{
		CompanyModel->setHeaderData(i, Qt::Horizontal, tr(this->CompanyTableViewItem[i]));
	}
	ui.CompanyTableView->setColumnWidth(1, 250);
	//�Ŷӹ���ı�ͷ��ʼ��
	QStandardItemModel *PersonnelModel = new QStandardItemModel(20, 10);
	ui.PersonnelTableView->setModel(PersonnelModel);
	for (int i = 0; i < 10; i++)
	{
		PersonnelModel->setHeaderData(i, Qt::Horizontal, tr(this->PersonnelTableViewItem[i]));
	}
	//�������ı�ͷ��ʼ��
	QStandardItemModel *ClaimModel = new QStandardItemModel(20, 10);
	ui.ClaimTableView->setModel(ClaimModel);
	for (int i = 0; i < 10; i++)
	{
		ClaimModel->setHeaderData(i, Qt::Horizontal, tr(this->ClaimTableViewItem[i]));
	}

}
void AutoInsuranceSystem::Insured_click()
{
	insur_guaranteeslip *d = new insur_guaranteeslip(this);
	//���ø����ڲ�����
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::CompanyEntry_click()
{
	sys_insurancecomputer *d = new sys_insurancecomputer(this);
	//���ø����ڲ�����
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}	

void AutoInsuranceSystem::PersonnelEntry_click()
{
	sys_employeeinfo *d = new sys_employeeinfo(this);
	//���ø����ڲ�����
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::ClaimEntry_click()
{
	case_reportcaseinfo *d = new case_reportcaseinfo(this);
	//���ø����ڲ�����
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}