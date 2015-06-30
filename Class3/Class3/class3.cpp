#include "class3.h"

Class3::Class3(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.pushButton->setText("Hello");
}

Class3::~Class3()
{

}
