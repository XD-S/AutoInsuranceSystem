#ifndef MYSQLCONNECT_H
#define MYSQLCONNECT_H
#include "mysql.h"
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
	void AddItem(string TableName, QStandardItemModel *Model, vector<int> items);
	bool UpdateId(string TableName);
	bool Command(string command);

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

