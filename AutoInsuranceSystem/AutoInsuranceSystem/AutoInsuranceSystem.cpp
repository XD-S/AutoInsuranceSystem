#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	CommonHelper::setStyle("qss/lightgray.css");
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());


	//�󶨰�ť�Ĳۺ���
	connect(ui.Insured, SIGNAL(clicked()), this, SLOT(Insured_click()));
	connect(ui.CompanyEntry, SIGNAL(clicked()), this, SLOT(CompanyEntry_click()));
	connect(ui.PersonnelEntry, SIGNAL(clicked()), this, SLOT(PersonnelEntry_click()));
	connect(ui.ClaimEntry, SIGNAL(clicked()), this, SLOT(ClaimEntry_click()));
	connect(ui.CompanyDelete, SIGNAL(clicked()), this, SLOT(CompanyDelete_click()));
	connect(ui.PersonnelDelete, SIGNAL(clicked()), this, SLOT(PersonnelDelete_click()));


	connect(ui.CompanyTableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(CompanyViewTableDoubleClicked(const QModelIndex &)));
	connect(ui.PersonnelTableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(PersonnelViewTableDoubleClicked(const QModelIndex &)));
	this->UpdateViewTable();

	ui.ClaimTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.PersonnelTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.CompanyTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.InsuredTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void AutoInsuranceSystem::UpdateViewTable(string TableName)
{
	if (TableName == "")
	{
		//��������ı�ͷ��ʼ������
		InsuredModel = new QStandardItemModel(q->GetItemNumber("insur_guaranteeslip"), 10);
		ui.InsuredTableView->setModel(InsuredModel);
		for (int i = 0; i < 10; i++)
		{
			InsuredModel->setHeaderData(i, Qt::Horizontal, tr(this->InsuredTableViewItem[i]));
		}
		q->AddItem("insur_guaranteeslip", InsuredModel, vector<int> {1, 2, 5, 4, 6, 7, 8, 9, 10, 11});
		//��������ѡ��
		ui.InsuredTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		//�������õı�ͷ��ʼ��
		CompanyModel = new QStandardItemModel(q->GetItemNumber("sys_insurancecomputer"), 2);
		ui.CompanyTableView->setModel(CompanyModel);
		for (int i = 0; i < 2; i++)
		{
			CompanyModel->setHeaderData(i, Qt::Horizontal, tr(this->CompanyTableViewItem[i]));
		}
		q->AddItem("sys_insurancecomputer", CompanyModel, vector<int> {2, 3});
		//��������ѡ��
		ui.CompanyTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		//�Ŷӹ���ı�ͷ��ʼ��
		PersonnelModel = new QStandardItemModel(q->GetItemNumber("sys_employeeinfo"), 10);
		ui.PersonnelTableView->setModel(PersonnelModel);
		for (int i = 0; i < 10; i++)
		{
			PersonnelModel->setHeaderData(i, Qt::Horizontal, tr(this->PersonnelTableViewItem[i]));
		}
		q->AddItem("sys_employeeinfo", PersonnelModel, vector<int> {1, 2, 4, 5, 7, 8, 6, 13, 10, 9});
		//��������ѡ��
		ui.PersonnelTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		//�������ı�ͷ��ʼ��
		ClaimModel = new QStandardItemModel(q->GetItemNumber("case_reportcaseinfo"), 10);
		ui.ClaimTableView->setModel(ClaimModel);
		for (int i = 0; i < 10; i++)
		{
			ClaimModel->setHeaderData(i, Qt::Horizontal, tr(this->ClaimTableViewItem[i]));
		}
		q->AddItem("case_reportcaseinfo", ClaimModel, vector<int> {1, 5, 4, 14, 8, 2, 11, 15, 10, 12});
		//��������ѡ��
		ui.ClaimTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
	else if (TableName=="sys_insurancecomputer")
	{
		//�������õı�ͷ��ʼ��
		CompanyModel = new QStandardItemModel(q->GetItemNumber("sys_insurancecomputer"), 2);
		ui.CompanyTableView->setModel(CompanyModel);
		for (int i = 0; i < 2; i++)
		{
			CompanyModel->setHeaderData(i, Qt::Horizontal, tr(this->CompanyTableViewItem[i]));
		}
		q->AddItem("sys_insurancecomputer", CompanyModel, vector<int> {2, 3});
		//��������ѡ��
		ui.CompanyTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
	else if (TableName=="sys_employeeinfo")
	{
		//�Ŷӹ���ı�ͷ��ʼ��
		PersonnelModel = new QStandardItemModel(q->GetItemNumber("sys_employeeinfo"), 10);
		ui.PersonnelTableView->setModel(PersonnelModel);
		for (int i = 0; i < 10; i++)
		{
			PersonnelModel->setHeaderData(i, Qt::Horizontal, tr(this->PersonnelTableViewItem[i]));
		}
		q->AddItem("sys_employeeinfo", PersonnelModel, vector<int> {1, 2, 4, 5, 7, 8, 6, 13, 10, 9});
		//��������ѡ��
		ui.PersonnelTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
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

void AutoInsuranceSystem::CompanyDelete_click()
{
	QModelIndex index = ui.CompanyTableView->currentIndex();
	if (index.isValid())
	{
		if (QMessageBox::question(NULL, u8"ע�⣺", u8"�Ƿ�Ҫɾ����", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
		{
			q->Command(this->GetDeleteCommand("sys_insurancecomputer", index.row() + 1));
			q->UpdateId("sys_insurancecomputer");
			QMessageBox::about(this, u8"��ʾ��", u8"ɾ���ɹ�����");
			this->UpdateViewTable("sys_insurancecomputer");
		}
	}
	else
	{
		QMessageBox::about(this, u8"��ʾ��", u8"��ѡ����Ҫɾ������");
	}
}

void AutoInsuranceSystem::PersonnelDelete_click()
{
	QModelIndex index = ui.PersonnelTableView->currentIndex();
	if (index.isValid())
	{
		if (QMessageBox::question(NULL, u8"ע�⣺", u8"�Ƿ�Ҫɾ����", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
		{
			q->Command(this->GetDeleteCommand("sys_employeeinfo", index.row() + 1));
			q->UpdateId("sys_employeeinfo");
			QMessageBox::about(this, u8"��ʾ��", u8"ɾ���ɹ�����");
			this->UpdateViewTable("sys_employeeinfo");
		}
	}
	else
	{
		QMessageBox::about(this, u8"��ʾ��", u8"��ѡ����Ҫɾ������");
	}
}

void AutoInsuranceSystem::CompanyViewTableDoubleClicked(const QModelIndex &index)
{
	if (index.isValid())
	{
		sys_insurancecomputer *d = new sys_insurancecomputer(this,index.row()+1);
		//���ø����ڲ�����
		d->setWindowModality(Qt::ApplicationModal);
		d->show();
	}
}

void AutoInsuranceSystem::PersonnelViewTableDoubleClicked(const QModelIndex & index)
{
	if (index.isValid())
	{
		sys_employeeinfo *d = new sys_employeeinfo(this, index.row() + 1);
		//���ø����ڲ�����
		d->setWindowModality(Qt::ApplicationModal);
		d->show();
	}
}

string AutoInsuranceSystem::GetDeleteCommand(string TableName, int item)
{
	string ans = "DELETE FROM `"+TableName+"` WHERE (`id`='"+to_string(item)+"');";
	return ans;
}

void AutoInsuranceSystem::Insured_click()
{
	insur_guaranteeslip *d = new insur_guaranteeslip(this);
	//���ø����ڲ�����
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

