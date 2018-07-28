#include "AutoInsuranceSystem.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "mysql.h"
MySqlConnect *q;
int main(int argc, char *argv[])
{
	q = new MySqlConnect("132.232.13.36","root","525126","carinsurancessystem");
	/*q->Command("INSERT INTO `carinsurancessystem`.`sys_insurancecomputer` (`CompanyCode`, `CompanyName`, `Description`) VALUES ('0004', '********保险公司', '********保险公司一一一');");
	q->UpdateId("sys_insurancecomputer");
	system("pause");
	return 0;*/
	QApplication a(argc, argv);
	AutoInsuranceSystem w;
	w.show();
	int ret = a.exec();
	q->closeConnect();
	return ret;
}
