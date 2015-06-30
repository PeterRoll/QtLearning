#include "class2.h"
#include <QtGui/QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//Class2 w;
	//w.show();
	qDebug() << "hello world";
	return a.exec();
}
