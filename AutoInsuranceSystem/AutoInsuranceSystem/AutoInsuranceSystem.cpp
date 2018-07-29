#include "AutoInsuranceSystem.h"

AutoInsuranceSystem::AutoInsuranceSystem(QWidget *parent)
	: QMainWindow(parent)
{
	

	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//绑定按钮的槽函数
	connect(ui.Insured, SIGNAL(clicked()), this, SLOT(Insured_click()));
	connect(ui.CompanyEntry, SIGNAL(clicked()), this, SLOT(CompanyEntry_click()));
	connect(ui.PersonnelEntry, SIGNAL(clicked()), this, SLOT(PersonnelEntry_click()));
	connect(ui.ClaimEntry, SIGNAL(clicked()), this, SLOT(ClaimEntry_click()));
	connect(ui.PlateNumberInquiry, SIGNAL(clicked()), this, SLOT(PlateNumberInquiry_click()));
	connect(ui.ManagerInquiry, SIGNAL(clicked()), this, SLOT(ManagerInquiry_click()));

	connect(ui.CompanyDelete, SIGNAL(clicked()), this, SLOT(CompanyDelete_click()));
	connect(ui.PersonnelDelete, SIGNAL(clicked()), this, SLOT(PersonnelDelete_click()));
	connect(ui.ClaimDelete, SIGNAL(clicked()), this, SLOT(ClaimlDelete_click()));
	connect(ui.InsuredDelete, SIGNAL(clicked()), this, SLOT(InsuredDelete_click()));

	connect(ui.CompanyTableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(CompanyViewTableDoubleClicked(const QModelIndex &)));
	connect(ui.PersonnelTableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(PersonnelViewTableDoubleClicked(const QModelIndex &)));
	connect(ui.ClaimTableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(ClaimViewTableDoubleClicked(const QModelIndex &)));
	connect(ui.InsuredTableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(InsuredViewTableDoubleClicked(const QModelIndex &)));

	ui.tabWidget->setStyleSheet("QTabWidget::pane{border: 1px;}"
  "QTabWidget::tab-bar{alignment:center;}"
	"QTabBar::tab:selected{color:green;}");
	this->UpdateViewTable();

	ui.ClaimTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.PersonnelTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.CompanyTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.InsuredTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.InquireTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void AutoInsuranceSystem::UpdateViewTable(string TableName)
{
	if (TableName == "")
	{
		//保单管理的表头初始化设置
		InsuredModel = new QStandardItemModel(q->GetItemNumber("insur_guaranteeslip"), 10);
		ui.InsuredTableView->setModel(InsuredModel);
		for (int i = 0; i < 10; i++)
		{
			InsuredModel->setHeaderData(i, Qt::Horizontal, tr(this->InsuredTableViewItem[i]));
		}
		q->AddItem("insur_guaranteeslip", InsuredModel, vector<int> {1, 2, 5, 4, 6, 7, 8, 9, 10, 11});
		//设置整行选中
		ui.InsuredTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		//基础设置的表头初始化
		CompanyModel = new QStandardItemModel(q->GetItemNumber("sys_insurancecomputer"), 2);
		ui.CompanyTableView->setModel(CompanyModel);
		for (int i = 0; i < 2; i++)
		{
			CompanyModel->setHeaderData(i, Qt::Horizontal, tr(this->CompanyTableViewItem[i]));
		}
		q->AddItem("sys_insurancecomputer", CompanyModel, vector<int> {2, 3});
		//设置整行选中
		ui.CompanyTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		//团队管理的表头初始化
		PersonnelModel = new QStandardItemModel(q->GetItemNumber("sys_employeeinfo"), 10);
		ui.PersonnelTableView->setModel(PersonnelModel);
		for (int i = 0; i < 10; i++)
		{
			PersonnelModel->setHeaderData(i, Qt::Horizontal, tr(this->PersonnelTableViewItem[i]));
		}
		q->AddItem("sys_employeeinfo", PersonnelModel, vector<int> {1, 2, 4, 5, 7, 8, 6, 13, 10, 9});
		//设置整行选中
		ui.PersonnelTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		//理赔管理的表头初始化
		ClaimModel = new QStandardItemModel(q->GetItemNumber("case_reportcaseinfo"), 10);
		ui.ClaimTableView->setModel(ClaimModel);
		for (int i = 0; i < 10; i++)
		{
			ClaimModel->setHeaderData(i, Qt::Horizontal, tr(this->ClaimTableViewItem[i]));
		}
		q->AddItem("case_reportcaseinfo", ClaimModel, vector<int> {1, 5, 4, 14, 8, 2, 11, 15, 10, 12});
		//设置整行选中
		ui.ClaimTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

		InquireModel = new QStandardItemModel(0, 10);
		ui.InquireTableView->setModel(InquireModel);
		for (int i = 0; i < 10; i++)
		{
			InquireModel->setHeaderData(i, Qt::Horizontal, tr(InquireTableViewItem[i]));
		}
		//设置整行选中
		ui.InquireTableView->setSelectionBehavior(QAbstractItemView::SelectRows);


	}
	else if (TableName=="sys_insurancecomputer")
	{
		//基础设置的表头初始化
		CompanyModel = new QStandardItemModel(q->GetItemNumber("sys_insurancecomputer"), 2);
		ui.CompanyTableView->setModel(CompanyModel);
		for (int i = 0; i < 2; i++)
		{
			CompanyModel->setHeaderData(i, Qt::Horizontal, tr(this->CompanyTableViewItem[i]));
		}
		q->AddItem("sys_insurancecomputer", CompanyModel, vector<int> {2, 3});
		//设置整行选中
		ui.CompanyTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
	else if (TableName=="sys_employeeinfo")
	{
		//团队管理的表头初始化
		PersonnelModel = new QStandardItemModel(q->GetItemNumber("sys_employeeinfo"), 10);
		ui.PersonnelTableView->setModel(PersonnelModel);
		for (int i = 0; i < 10; i++)
		{
			PersonnelModel->setHeaderData(i, Qt::Horizontal, tr(this->PersonnelTableViewItem[i]));
		}
		q->AddItem("sys_employeeinfo", PersonnelModel, vector<int> {1, 2, 4, 5, 7, 8, 6, 13, 10, 9});
		//设置整行选中
		ui.PersonnelTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
	else if (TableName=="case_reportcaseinfo")
	{
		//理赔管理的表头初始化
		ClaimModel = new QStandardItemModel(q->GetItemNumber("case_reportcaseinfo"), 10);
		ui.ClaimTableView->setModel(ClaimModel);
		for (int i = 0; i < 10; i++)
		{
			ClaimModel->setHeaderData(i, Qt::Horizontal, tr(this->ClaimTableViewItem[i]));
		}
		q->AddItem("case_reportcaseinfo", ClaimModel, vector<int> {1, 5, 4, 14, 8, 2, 11, 15, 10, 12});
		//设置整行选中
		ui.ClaimTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
	else if (TableName == "insur_guaranteeslip")
	{
		//保单管理的表头初始化设置
		InsuredModel = new QStandardItemModel(q->GetItemNumber("insur_guaranteeslip"), 10);
		ui.InsuredTableView->setModel(InsuredModel);
		for (int i = 0; i < 10; i++)
		{
			InsuredModel->setHeaderData(i, Qt::Horizontal, tr(this->InsuredTableViewItem[i]));
		}
		q->AddItem("insur_guaranteeslip", InsuredModel, vector<int> {1, 2, 5, 4, 6, 7, 8, 9, 10, 11});
		//设置整行选中
		ui.InsuredTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
	else if (TableName == "Inquire")
	{
		InquireModel = new QStandardItemModel(0, 10);
		ui.InquireTableView->setModel(InquireModel);
		for (int i = 0; i < 10; i++)
		{
			InquireModel->setHeaderData(i, Qt::Horizontal, tr(InquireTableViewItem[i]));
		}
		//设置整行选中
		ui.InquireTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	}
}

void AutoInsuranceSystem::CompanyEntry_click()
{
	sys_insurancecomputer *d = new sys_insurancecomputer(this);
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::PersonnelEntry_click()
{
	sys_employeeinfo *d = new sys_employeeinfo(this);
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::ClaimEntry_click()
{
	case_reportcaseinfo *d = new case_reportcaseinfo(this);
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::CompanyDelete_click()
{
	QModelIndex index = ui.CompanyTableView->currentIndex();
	if (index.isValid())
	{
		if (QMessageBox::question(NULL, u8"注意：", u8"是否要删除？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
		{
			q->Command(this->GetDeleteCommand("sys_insurancecomputer", index.row() + 1));
			q->UpdateId("sys_insurancecomputer");
			QMessageBox::about(this, u8"提示：", u8"删除成功！！");
			this->UpdateViewTable("sys_insurancecomputer");
		}
	}
	else
	{
		QMessageBox::about(this, u8"提示：", u8"请选择需要删除的项");
	}
}

void AutoInsuranceSystem::PersonnelDelete_click()
{
	QModelIndex index = ui.PersonnelTableView->currentIndex();
	if (index.isValid())
	{
		if (QMessageBox::question(NULL, u8"注意：", u8"是否要删除？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
		{
			q->Command(this->GetDeleteCommand("sys_employeeinfo", index.row() + 1));
			q->UpdateId("sys_employeeinfo");
			QMessageBox::about(this, u8"提示：", u8"删除成功！！");
			this->UpdateViewTable("sys_employeeinfo");
		}
	}
	else
	{
		QMessageBox::about(this, u8"提示：", u8"请选择需要删除的项");
	}
}

void AutoInsuranceSystem::ClaimlDelete_click()
{
	QModelIndex index = ui.ClaimTableView->currentIndex();
	if (index.isValid())
	{
		if (QMessageBox::question(NULL, u8"注意：", u8"是否要删除？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
		{
			q->Command(this->GetDeleteCommand("case_reportcaseinfo", index.row() + 1));
			q->UpdateId("case_reportcaseinfo");
			QMessageBox::about(this, u8"提示：", u8"删除成功！！");
			this->UpdateViewTable("case_reportcaseinfo");
		}
	}
	else
	{
		QMessageBox::about(this, u8"提示：", u8"请选择需要删除的项");
	}
}

void AutoInsuranceSystem::InsuredDelete_click()
{
	QModelIndex index = ui.InsuredTableView->currentIndex();
	if (index.isValid())
	{
		if (QMessageBox::question(NULL, u8"注意：", u8"是否要删除？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
		{
			q->Command(this->GetDeleteCommand("insur_guaranteeslip", index.row() + 1));
			q->UpdateId("insur_guaranteeslip");
			QMessageBox::about(this, u8"提示：", u8"删除成功！！");
			this->UpdateViewTable("insur_guaranteeslip");
		}
	}
	else
	{
		QMessageBox::about(this, u8"提示：", u8"请选择需要删除的项");
	}
}

void AutoInsuranceSystem::PlateNumberInquiry_click()
{
	Inquire *d = new Inquire(this,Inquires::PlateNumberInquiry);
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::ManagerInquiry_click()
{
	Inquire *d = new Inquire(this, Inquires::ManagerInquiry);
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

void AutoInsuranceSystem::CompanyViewTableDoubleClicked(const QModelIndex &index)
{
	if (index.isValid())
	{
		sys_insurancecomputer *d = new sys_insurancecomputer(this,index.row()+1);
		//设置父窗口不可用
		d->setWindowModality(Qt::ApplicationModal);
		d->show();
		d->LoadInformation();
	}
}

void AutoInsuranceSystem::PersonnelViewTableDoubleClicked(const QModelIndex & index)
{
	if (index.isValid())
	{
		sys_employeeinfo *d = new sys_employeeinfo(this, index.row() + 1);
		//设置父窗口不可用
		d->setWindowModality(Qt::ApplicationModal);
		d->show();
		d->LoadInformation();
	}
}

void AutoInsuranceSystem::ClaimViewTableDoubleClicked(const QModelIndex & index)
{
	if (index.isValid())
	{
		case_reportcaseinfo *d = new case_reportcaseinfo(this,index.row()+1);
		//设置父窗口不可用
		d->setWindowModality(Qt::ApplicationModal);
		d->show();
		d->LoadInformation();
	}
}

void AutoInsuranceSystem::InsuredViewTableDoubleClicked(const QModelIndex & index)
{
	if (index.isValid())
	{
		insur_guaranteeslip *d = new insur_guaranteeslip(this,index.row()+1);
		//设置父窗口不可用
		d->setWindowModality(Qt::ApplicationModal);
		d->show();
		d->LoadInformation();
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
	//设置父窗口不可用
	d->setWindowModality(Qt::ApplicationModal);
	d->show();
}

