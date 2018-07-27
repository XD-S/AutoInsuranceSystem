#include "sys_insurancecomputer.h"
#include <QCloseEvent>
#include <QMessageBox>
sys_insurancecomputer::sys_insurancecomputer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//固定窗口大小
	this->setFixedSize(this->size());
	//上下文环境
	this->parent = parent;
	connect(ui.Entry, SIGNAL(clicked()), this, SLOT(Entry_click()));
	connect(ui.Cancel, SIGNAL(clicked()), this, SLOT(Cancel_click()));
}
void sys_insurancecomputer::closeEvent(QCloseEvent *event)
{
	event->ignore();
}
void sys_insurancecomputer::Entry_click()
{
	//sql语句，录入信息
	QMessageBox::about(this, u8"提示：", u8"录入信息成功！！");
	delete this;
}
void sys_insurancecomputer::Cancel_click()
{
	delete this;
}