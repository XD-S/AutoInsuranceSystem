#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include "ui_AutoInsuranceSystem.h"
#include "insur_guaranteeslip.h"

class AutoInsuranceSystem : public QMainWindow
{
	Q_OBJECT

public:
	AutoInsuranceSystem(QWidget *parent = Q_NULLPTR);
	
public slots:
	void Insured_click();

private:
	Ui::AutoInsuranceSystemClass ui;

	/*insur_guaranteeslip * d = Q_NULLPTR;*/
};
