#ifndef MYSQLCONNECT_H
#define MYSQLCONNECT_H
#include "mysql.h"
#include "QComboBox.h"
#include <QStandardItemModel>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class MySqlConnect
{
public:
	MySqlConnect(string IP, string username, string password, string database);
	void closeConnect();
	int GetItemNumber(string TableName);

	bool UpdateId(string TableName);
	bool Command(string command);
	void AddItem(string TableName, QStandardItemModel *Model, vector<int> items);//��ʼ��TableView
	string GetItemSelect(string TableName,string Colunms,int item);//�õ�ѡ��colunms��itemѡ���ֵ
	void AddComboBoxItem(string TableName,string Colunms, QComboBox * comboBox);//��ʼ��ComboBox

	void operation(string TableName);

private:
	string database;
	MYSQL mysql;
	MYSQL_RES *result = NULL;
	MYSQL_ROW row;
	MYSQL_FIELD *field = NULL;
};

struct SYS_EMPLOYRRINFO
{
	int id;
	char EmployeeName[20];
	char State[20];
	char ReferencesName[20];


};

#endif

