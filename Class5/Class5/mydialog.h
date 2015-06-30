#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include "ui_mydialog.h"

class mydialog : public QDialog
{
	Q_OBJECT

public:
	mydialog(QWidget *parent = 0);
	~mydialog();

private:
	Ui::mydialog ui;
};

#endif // MYDIALOG_H
