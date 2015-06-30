#ifndef CLASS20_H
#define CLASS20_H

#include <QtGui/QDialog>
#include "ui_class20.h"

class Class20 : public QDialog
{
	Q_OBJECT

public:
	Class20(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class20();

private:
	Ui::Class20Class ui;

private slots:
	void on_pushButton_clicked();
};

#endif // CLASS20_H
