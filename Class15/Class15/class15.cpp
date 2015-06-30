#include "class15.h"
#include <QtCore/QtCore>
#include <QtGui/Qtgui>

Class15::Class15(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

Class15::~Class15()
{

}

void Class15::on_pushButton_clicked()
{
	QMessageBox::information(this,"Title  here","Hello World");
}
