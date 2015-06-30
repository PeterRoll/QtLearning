#ifndef CLASS6_H
#define CLASS6_H

#include <QtGui/QDialog>
#include "ui_class6.h"

class Class6 : public QDialog
{
	Q_OBJECT

public:
	Class6(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class6();

private:
	Ui::Class6Class ui;
};

#endif // CLASS6_H
