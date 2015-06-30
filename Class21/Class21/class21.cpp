#include "class21.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>

Class21::Class21(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
	ui.treeWidget->setColumnCount(2);
	ui.treeWidget->setHeaderLabels(QStringList() << "one" << "two");
	AddRoot("1 Hello","World");
	AddRoot("2 Hello","World");
	AddRoot("3 Hello","World");
}

Class21::~Class21()
{

}

void Class21::AddRoot(QString name, QString Description)
{
	QTreeWidgetItem *itm = new QTreeWidgetItem(ui.treeWidget);
	itm->setText(0,name);
	itm->setText(1,Description);
	ui.treeWidget->addTopLevelItem(itm);
	AddChild(itm,"one","hello");
	AddChild(itm,"two","World");
}

void Class21::AddChild(QTreeWidgetItem *parent,QString name, QString Description)
{
	QTreeWidgetItem *itm = new QTreeWidgetItem(parent);
	itm->setText(0,name);
	itm->setText(1,Description);
	parent->addChild(itm);
}

void Class21::on_pushButton_clicked()
{
	ui.treeWidget->currentItem()->setBackgroundColor(0,Qt::red);
	ui.treeWidget->currentItem()->setBackgroundColor(1,Qt::blue);
}