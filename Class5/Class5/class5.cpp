#include "class5.h"
#include "mydialog.h"

Class5::Class5(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.actionNewWindow,SIGNAL(activated()),this,SLOT(on_actionNew_Window_triggered()));
}

Class5::~Class5()
{

}

void Class5::on_actionNew_Window_triggered()
{
	mydialog mDialog;
	mDialog.setModal(false);
	mDialog.exec();
}