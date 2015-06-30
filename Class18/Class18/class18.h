#ifndef CLASS18_H
#define CLASS18_H

#include <QtGui/QDialog>
#include "ui_class18.h"

class Class18 : public QDialog
{
	Q_OBJECT

public:
	Class18(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class18();

private:
	Ui::Class18Class ui;
private slots:
	void on_pushButton_clicked();
};

#endif // CLASS18_H
