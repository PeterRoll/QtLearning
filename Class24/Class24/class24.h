#ifndef CLASS24_H
#define CLASS24_H

#include <QtGui/QDialog>
#include "ui_class24.h"

class Class24 : public QDialog
{
	Q_OBJECT

public:
	Class24(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class24();

private:
	Ui::Class24Class ui;
};

#endif // CLASS24_H
