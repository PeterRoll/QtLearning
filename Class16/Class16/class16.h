#ifndef CLASS16_H
#define CLASS16_H

#include <QtGui/QDialog>
#include "ui_class16.h"

class Class16 : public QDialog
{
	Q_OBJECT

public:
	Class16(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class16();

private:
	Ui::Class16Class ui;

private slots:
	void on_pushButton_clicked();
};

#endif // CLASS16_H
