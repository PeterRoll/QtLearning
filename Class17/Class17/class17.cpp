#include "class17.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>

Class17::Class17(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
	ui.checkBox->setChecked(true);
}

Class17::~Class17()
{

}

void Class17::on_pushButton_clicked()
{
	if (ui.checkBox->isChecked())
	{
		QMessageBox::information(this,"Cats","You like Cats");
	}else
	{
		QMessageBox::information(this,"Cats","You don not like Cats");
	}
}