
#include <QtCore/QCoreApplication>
#include <QtGui/QLabel>

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);
	QLabel *label= new QLabel("Hello World");
	label->show();
	return app.exec();
}
