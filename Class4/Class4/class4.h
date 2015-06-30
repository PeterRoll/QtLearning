#ifndef CLASS4_H
#define CLASS4_H

#include <QtGui/QMainWindow>
#include "ui_class4.h"

class Class4 : public QMainWindow
{
	Q_OBJECT

public:
	Class4(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class4();

private:
	Ui::Class4Class ui;
};

#endif // CLASS4_H
