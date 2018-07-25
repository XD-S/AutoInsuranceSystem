#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AutoInsuranceSystem.h"

class AutoInsuranceSystem : public QMainWindow
{
	Q_OBJECT

public:
	AutoInsuranceSystem(QWidget *parent = Q_NULLPTR);

private:
	Ui::AutoInsuranceSystemClass ui;
};
