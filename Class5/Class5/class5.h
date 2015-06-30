#ifndef CLASS5_H
#define CLASS5_H

#include <QtGui/QMainWindow>
#include "ui_class5.h"

class Class5 : public QMainWindow
{
	Q_OBJECT

public:
	Class5(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class5();

private:
	Ui::Class5Class ui;
private slots:
	void on_actionNew_Window_triggered();
};

#endif // CLASS5_H
