#include "class16.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>

Class16::Class16(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

Class16::~Class16()
{

}

void Class16::on_pushButton_clicked()
{
	//ui.lineEdit->setText("Hello World");
	QMessageBox::information(this,"Title",ui.lineEdit->text());
}
