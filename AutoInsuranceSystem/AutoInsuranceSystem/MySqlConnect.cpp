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
				QStandardItem * temp = new QStandardItem(str);
				temp->setEditable(false);
				Model->setItem(k, i, temp);
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

bool MySqlConnect::UpdateId(string TableName)
{
	try
	{
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (mysql_query(&mysql, ("call UpdateId_" + TableName + "();").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		return true;
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
		return false;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
		return false;
	}
}

bool MySqlConnect::Command(string command)
{
	try
	{
		//mysql_query(&mysql, "set names gbk");
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (mysql_query(&mysql, command.c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		return true;
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
		return false;
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
		return false;
	}
}

string MySqlConnect::GetItemSelect(string TableName, string Colunms, int item)
{
	try
	{
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (mysql_query(&mysql, ("select " + Colunms + " from " + TableName + " where id = " + std::to_string(item) + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (result != NULL) mysql_free_result(result);
		if (!(result = mysql_store_result(&mysql)))
		{
			throw string(mysql_error(&mysql));
		}
		row = mysql_fetch_row(result);
		return string(row[0]);
	}
	catch (string &error_msg)
	{
		cout << error_msg << endl;
		return "";
	}
	catch (...)
	{
		cout << "MySQL operation is error" << endl;
		return "";
	}

}

void MySqlConnect::AddComboBoxItem(string TableName, string Colunms, QComboBox * comboBox)
{
	try
	{
		if (mysql_query(&mysql, ("use " + database + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		//select EmployeeName from sys_employeeinfo;
		if (mysql_query(&mysql, ("select " + Colunms + " from " + TableName + ";").c_str()))
		{
			throw string(mysql_error(&mysql));
		}
		if (result != NULL) mysql_free_result(result);
		if (!(result = mysql_store_result(&mysql)))
		{
			throw string(mysql_error(&mysql));
		}
		while (row = mysql_fetch_row(result))
		{
			comboBox->addItem(QString::fromStdString(string(row[0])));
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
