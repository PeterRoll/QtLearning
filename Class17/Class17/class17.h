#ifndef CLASS17_H
#define CLASS17_H

#include <QtGui/QDialog>
#include "ui_class17.h"

class Class17 : public QDialog
{
	Q_OBJECT

public:
	Class17(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class17();

private:
	Ui::Class17Class ui;
private slots:
	void on_pushButton_clicked();
};

#endif // CLASS17_H
