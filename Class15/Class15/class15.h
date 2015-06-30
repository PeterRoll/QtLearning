#ifndef CLASS15_H
#define CLASS15_H

#include <QtGui/QDialog>
#include "ui_class15.h"

class Class15 : public QDialog
{
	Q_OBJECT

public:
	Class15(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class15();

private:
	Ui::Class15Class ui;
private slots:
	void on_pushButton_clicked();
};

#endif // CLASS15_H
