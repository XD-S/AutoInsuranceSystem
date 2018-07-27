#include "sys_employeeinfo.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <Qvalidator>
sys_employeeinfo::sys_employeeinfo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�̶����ڴ�С
	this->setFixedSize(this->size());
	//�����Ļ���
	this->parent = parent;

	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));

}
void sys_employeeinfo::Cancel_click()
{
	delete this;
}
void sys_employeeinfo::Entry_click()
{
	//sql��䣬¼����Ϣ
	QMessageBox::about(this, u8"��ʾ��", u8"¼����Ϣ�ɹ�����");
	delete this;
}

void sys_employeeinfo::closeEvent(QCloseEvent *event)
{
	event->ignore();
}
