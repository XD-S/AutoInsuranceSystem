#include "AutoInsuranceSystem.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "mysql.h"
MySqlConnect *q;
int main(int argc, char *argv[])
{
	q = new MySqlConnect("132.232.13.36","root","525126","carinsurancessystem");
	/*cout<<q->GetItemSelect("sys_insurancecomputer","CompanyName",2);
	system("pause");
	return 0;*/
	QApplication a(argc, argv);
	AutoInsuranceSystem w;
	w.show();
	int ret = a.exec();
	q->closeConnect();
	return ret;
}
