#include "MySqlConnect.h"

MySqlConnect::MySqlConnect(string IP, string username, string password, string databases)
{
	database = databases;
	mysql_init(&mysql);
	try
	{
		if (!mysql_real_connect(&mysql, IP.c_str(), username.c_str(), password.c_str(), database.c_str(), 3306, NULL, 0))
		{
			throw string("CONNECT FAILED");
		}
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
	}
}

void MySqlConnect::closeConnect()
{
	if (result != NULL)
		mysql_free_result(result);
	mysql_close(&mysql);
}

int MySqlConnect::GetItemNumber(string TableName)
{
	try
	{
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (mysql_query(&mysql, ("select id from " + TableName + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (result != NULL) mysql_free_result(result);
		if (!(result = mysql_store_result(&mysql)))
		{
			throw string(mysql_error(&mysql));
		}
		return result->row_count;
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
	}
	return -1;
}

void MySqlConnect::AddItem(string TableName, QStandardItemModel * Model, vector<int> items)
{
	try
	{
		mysql_query(&mysql, "set names utf8");
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (mysql_query(&mysql, ("select * from " + TableName + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (result != NULL) mysql_free_result(result);
		if (!(result = mysql_store_result(&mysql)))
		{
			throw string(mysql_error(&mysql));
		}
		int k = 0;
		while (row = mysql_fetch_row(result))
		{
			for (int i = 0; i < items.size(); i++)
			{
				QString str = QString(row[items[i]]);
				Model->setItem(k, i, new QStandardItem(str));
			}
			k++;
		}
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
	}
}

void MySqlConnect::operation(string TableName)
{
	try
	{
		mysql_query(&mysql, "set names gbk");
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (mysql_query(&mysql, ("select * from " + TableName + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (result != NULL) mysql_free_result(result);
		if (!(result = mysql_store_result(&mysql)))
		{
			throw string(mysql_error(&mysql));
		}
		/*field=result->fields;
		cout << result->field_count << endl;
		for (int i = 0; i < result->field_count; i++)
		{
		cout << field[i].name << endl;
		}
		cout << endl;*/
		while (row = mysql_fetch_row(result))
		{
			for (int i = 0; i < result->field_count; i++)
				cout << row[i] << " ";
			cout << endl;
		}
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
	}
}
