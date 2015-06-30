#include "class20.h"
#include <QtGui>
#include <QtCore>

Class20::Class20(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
	for (int i=0;i<9;i++)
	{
		ui.listWidget->addItem(QString::number(i) + "item");
	}
}

Class20::~Class20()
{

}

void Class20::on_pushButton_clicked()
{
	//ui.listWidget->currentItem()->setText("Busy Boy");
	QListWidgetItem *itm = ui.listWidget->currentItem();
	itm->setText("Busy Boy");
	itm->setTextColor(Qt::red);
	itm->setBackgroundColor(Qt::black);
}
