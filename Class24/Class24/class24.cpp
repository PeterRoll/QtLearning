#include "class24.h"

Class24::Class24(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	ui.progressBar->setValue(ui.horizontalSlider->value());
	connect(ui.horizontalSlider,SIGNAL(valueChanged(int)),ui.progressBar,SLOT(setValue(int)));
}

Class24::~Class24()
{

}
