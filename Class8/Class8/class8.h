#ifndef CLASS8_H
#define CLASS8_H

#include <QtGui/QWidget>
#include "ui_class8.h"

class Class8 : public QWidget
{
	Q_OBJECT

public:
	Class8(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class8();

private:
	Ui::Class8Class ui;
};

#endif // CLASS8_H
