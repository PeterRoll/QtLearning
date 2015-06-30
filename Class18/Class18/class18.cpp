#include "class18.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>
Class18::Class18(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

Class18::~Class18()
{

}

void Class18::on_pushButton_clicked()
{
	if (ui.radioButton1->isChecked())
	{
		QMessageBox::information(this,"Title",ui.radioButton1->text());
	}

	if (ui.radioButton2->isChecked())
	{
		QMessageBox::information(this,"Title",ui.radioButton2->text());
	}
}
