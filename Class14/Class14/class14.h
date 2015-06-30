#ifndef CLASS14_H
#define CLASS14_H

#include <QtGui/QDialog>
#include "ui_class14.h"

class Class14 : public QDialog
{
	Q_OBJECT

public:
	Class14(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class14();

private:
	Ui::Class14Class ui;
};

#endif // CLASS14_H
