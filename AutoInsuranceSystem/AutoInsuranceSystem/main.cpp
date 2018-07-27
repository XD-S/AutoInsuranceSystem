#include "AutoInsuranceSystem.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "mysql.h"

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	AutoInsuranceSystem w;
	w.show();
	return a.exec();
}
