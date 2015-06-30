#ifndef CLASS25_H
#define CLASS25_H

#include <QtGui/QMainWindow>
#include "ui_class25.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>

class Class25 : public QMainWindow
{
	Q_OBJECT

public:
	Class25(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class25();

private:
	Ui::Class25Class ui;
	QLabel *Statlabel;
	QProgressBar *Statprogress;
private slots:
	void on_actionDo_Something_triggered();
};

#endif // CLASS25_H
