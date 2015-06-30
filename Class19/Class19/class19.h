#ifndef CLASS19_H
#define CLASS19_H

#include <QtGui/QDialog>
#include "ui_class19.h"

class Class19 : public QDialog
{
	Q_OBJECT

public:
	Class19(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class19();

private:
	Ui::Class19Class ui;

private slots:
	void on_pushButton_clicked();
};

#endif // CLASS19_H
