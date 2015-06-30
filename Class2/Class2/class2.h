#ifndef CLASS2_H
#define CLASS2_H

#include <QtGui/QMainWindow>
#include "ui_class2.h"

class Class2 : public QMainWindow
{
	Q_OBJECT

public:
	Class2(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class2();

private:
	Ui::Class2Class ui;
};

#endif // CLASS2_H
