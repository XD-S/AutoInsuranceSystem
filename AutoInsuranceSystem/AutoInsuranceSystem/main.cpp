#include "AutoInsuranceSystem.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "mysql.h"
#include "Login.h"
MySqlConnect *q=NULL;
int main(int argc, char *argv[])
{
	
	/*cout<<q->GetItemSelect("sys_insurancecomputer","CompanyName",2);
	system("pause");
	return 0;*/
	
	QApplication a(argc, argv);
	CommonHelper::setStyle("qss/lightgray.css");
	Login d;
	d.show();

	/*AutoInsuranceSystem w;
	w.show();*/

	int ret = a.exec();
	if(q!=NULL) q->closeConnect();
	return ret;
}
