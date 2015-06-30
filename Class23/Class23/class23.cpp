#include "class23.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>
Class23::Class23(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.actionOpen,SIGNAL(triggered()),this,SLOT(on_actionOpen_triggered()));
}

Class23::~Class23()
{

}

void Class23::on_actionOpen_triggered()
{
	QMessageBox::information(this,"title","Hello world");
}