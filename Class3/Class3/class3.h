#ifndef CLASS3_H
#define CLASS3_H

#include <QtGui/QMainWindow>
#include "ui_class3.h"

class Class3 : public QMainWindow
{
	Q_OBJECT

public:
	Class3(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class3();

private:
	Ui::Class3Class ui;
};

#endif // CLASS3_H
