#pragma once
#include <QFile>
#include <QApplication>
#include <QStandardItemModel>
class CommonHelper
{
public:
	static void setStyle(const QString &style) 
	{
		QFile qss(style);
		qss.open(QFile::ReadOnly);
		qApp->setStyleSheet(qss.readAll());
		qss.close();
	}
	static void clearModel(QStandardItemModel * Model)
	{
		for (int i = 0; i<Model->rowCount(); i++)
		{
			for (int j = 0; j < Model->columnCount(); j++)
			{
				delete Model->item(i, j);
			}
		}
		Model->setRowCount(0);
	}
};