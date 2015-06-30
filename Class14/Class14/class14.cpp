#include "class14.h"

Class14::Class14(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	ui.label->setText("Hello world");
}

Class14::~Class14()
{

}
