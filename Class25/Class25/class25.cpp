#include "class25.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>

Class25::Class25(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.actionDo_something,SIGNAL(triggered()),this,SLOT(on_actionDo_Something_triggered()));
	
	Statlabel = new QLabel(this);
	Statprogress = new QProgressBar(this);

	ui.statusBar->addPermanentWidget(Statlabel);
	ui.statusBar->addPermanentWidget(Statprogress);

	Statlabel->setText("Hello");
	//Statprogress->setTextVisible(false);
}

Class25::~Class25()
{

}
void Class25::on_actionDo_Something_triggered()
{
	ui.statusBar->showMessage("Hello",2000);
	Statprogress->setValue(45);
}