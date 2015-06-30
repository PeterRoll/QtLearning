#include "class19.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>


Class19::Class19(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	//ui.comboBox->addItem("Hello");
	//ui.comboBox->addItem("World");

	for (int i=0;i<9;i++)
	{
		ui.comboBox->addItem(QString::number(i) + "item");
	}
}

Class19::~Class19()
{

}

void Class19::on_pushButton_clicked()
{
	QMessageBox::information(this,"Title",ui.comboBox->currentText());
}
