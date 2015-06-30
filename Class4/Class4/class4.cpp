#include "class4.h"

Class4::Class4(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	connect(ui.horizontalSlider,SIGNAL(valueChanged(int)),ui.progressBar,SLOT(setValue(int)));

	connect(ui.horizontalSlider,SIGNAL(valueChanged(int)),ui.progressBar_2,SLOT(setValue(int)));

	connect(ui.horizontalSlider,SIGNAL(valueChanged(int)),ui.progressBar_3,SLOT(setValue(int)));

	disconnect(ui.horizontalSlider,SIGNAL(valueChanged(int)),ui.progressBar,SLOT(setValue(int)));
}

Class4::~Class4()
{

}
