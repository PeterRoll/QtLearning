#ifndef CLASS23_H
#define CLASS23_H

#include <QtGui/QMainWindow>
#include "ui_class23.h"

class Class23 : public QMainWindow
{
	Q_OBJECT

public:
	Class23(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class23();

private:
	Ui::Class23Class ui;
private slots:
	void on_actionOpen_triggered();
};

#endif // CLASS23_H
