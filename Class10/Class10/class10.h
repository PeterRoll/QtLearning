#ifndef CLASS10_H
#define CLASS10_H

#include <QtGui/QDialog>
#include "ui_class10.h"

class Class10 : public QDialog
{
	Q_OBJECT

public:
	Class10(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class10();

private:
	Ui::Class10Class ui;
};

#endif // CLASS10_H
