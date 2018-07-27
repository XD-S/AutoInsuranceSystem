#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());


	//�󶨰�ť�Ĳۺ���
	connect(ui.Insured, SIGNAL(clicked()), this, SLOT(Insured_click()));
	connect(ui.CompanyEntry, SIGNAL(clicked()), this, SLOT(CompanyEntry_click()));
	connect(ui.PersonnelEntry, SIGNAL(clicked()), this, SLOT(PersonnelEntry_click()));
	connect(ui.ClaimEntry, SIGNAL(clicked()), this, SLOT(ClaimEntry_click()));

	//��������ı�ͷ��ʼ������
	InsuredModel = new QStandardItemModel(q->GetItemNumber("insur_guaranteeslip"), 10);
	ui.InsuredTableView->setModel(InsuredModel);
	for (int i = 0; i < 10; i++)
	{
		InsuredModel->setHeaderData(i, Qt::Horizontal, tr(this->InsuredTableViewItem[i]));
	}
	q->AddItem("insur_guaranteeslip", InsuredModel, vector<int> {1, 2, 5, 4, 6, 7, 8, 9, 10, 11});

	//�������õı�ͷ��ʼ��
	CompanyModel = new QStandardItemModel(q->GetItemNumber("sys_insurancecomputer"), 2);
	ui.CompanyTableView->setModel(CompanyModel);
	for (int i = 0; i < 2; i++)
	{
		CompanyModel->setHeaderData(i, Qt::Horizontal, tr(this->CompanyTableViewItem[i]));
	}
	ui.CompanyTableView->setColumnWidth(1, 250);
	q->AddItem("sys_insurancecomputer", CompanyModel, vector<int> {2, 3});

	//�Ŷӹ���ı�ͷ��ʼ��
	PersonnelModel = new QStandardItemModel(q->GetItemNumber("sys_employeeinfo"), 10);
	ui.PersonnelTableView->setModel(PersonnelModel);
	for (int i = 0; i < 10; i++)
	{
		PersonnelModel->setHeaderData(i, Qt::Horizontal, tr(this->PersonnelTableViewItem[i]));
	}
	q->AddItem("sys_employeeinfo", PersonnelModel, vector<int> {1, 2, 4, 5, 7, 8, 6, 13, 10, 9});

	//�������ı�ͷ��ʼ��
	ClaimModel = new QStandardItemModel(q->GetItemNumber("case_reportcaseinfo"), 10);
	ui.ClaimTableView->setModel(ClaimModel);
	for (int i = 0; i < 10; i++)
	{
		ClaimModel->setHeaderData(i, Qt::Horizontal, tr(this->ClaimTableViewItem[i]));
	}
	q->AddItem("case_reportcaseinfo", ClaimModel, vector<int> {1, 5, 4, 14, 8, 2, 11, 15, 10, 12});
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