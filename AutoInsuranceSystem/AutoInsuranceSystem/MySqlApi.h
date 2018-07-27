#ifndef CIRCLE_H
#define CIRCLE_H
#include "stdafx.h"
#include <WinSock2.h>
#include "mysql.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include<vector>
class MySqlApi
{
public:
	//����MySql���û��� ���� ���ݿ��� ����� ��ñ������
	int getRowCount(std::string UserName,std::string PassWord,std::string Database,std::string Table);//�õ��������
	//����MySql���û��� ���� ���ݿ��� ����� ��ñ������
	int getFieldCount(std::string UserName,std::string PassWord,std::string Database,std::string Table);//�õ��������
	//���������� ����һ��string���� ���� std::string FieldName[10];    ����ͬMySql���û��� ���� ���ݿ��� ����� ���뺯�� ��������ͷ���ݴ��� string������
	void getFieldName(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string* FieldName);//�õ���ͷ����

	//���������� ����һ��string��ά���� ���� std::string FieldName[10][10];    ����ͬMySql���û��� ���� ���ݿ��� ����� ���뺯�� ��������ͷ���ݴ��� string��ά������
	void getTable(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string table[][10]);//�õ��������

	//���������� ����һ��string���� ���� std::string FieldName[10];    ����ͬMySql���û��� ���� ���ݿ��� ����� �ؼ��� ���뺯�� 
	//�����ݴ��� ����������string������ ����ֵΪ1 ���� ����ֵ Ϊ0  �ú���ֻ�ɲ���һ�� ����keyword Ϊ����  ���ڲ����û�
	int selectRowExists(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string* Row,
		std::string KeyWordField,std::string KeyWord);


	//���������� ����һ��string��ά���� ���� std::string FieldName[10][10];    ����ͬMySql���û��� ���� ���ݿ��� ����� �ؼ��� ���뺯�� 
	//�����ݴ��� ����������string��ά������ ����ֵΪ1 ���� ����ֵ Ϊ0      
	int selectTable(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string data[][10],
		std::string KeyWordField,std::string KeyWord);
	//���������ﴴ��һ��string  ���� std::string value = (1,\"chenyi\",\"man\",2015.2014)   value�ڸ�ʽ����Ϊ (1,\"chenyi\",\"man\",2015.2014)  ������ΪҪ��ӵ�����
	//�ַ����� ����Ϊ \"
	void insertRow(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string value );
	//����������  ��KeyWordField���ֶ����� �� Ҫɾ����KeyWord  ͬMySql���û��� ���� ���ݿ��� ����� ���뺯�� 
	void deletetRow(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string KeyWordField,std::string KeyWord);
	//���������� ����һ��string��ά���� ���� std::string FieldName[10][10];    ����ͬMySql���û��� ���� ���ݿ��� ����� �ؼ��� ���뺯�� 
	//�����ݴ��� ����������string��ά������ ����ֵΪ1 ���� ����ֵ Ϊ0   ģ����ѯ
	int fuzzyQuery(std::string UserName,std::string PassWord,std::string Database,std::string Table,std::string data[][10],
		std::string KeyWordField,std::string KeyWord);
};


#endif