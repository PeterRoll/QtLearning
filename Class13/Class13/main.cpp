
#include <QtCore/QCoreApplication>
#include <QtCore/QFile>
#include <QtCore/QString>
#include <QtCore/QDebug>
#include <QtCore/QTextStream>



void Read(QString Filename)
{
	QFile mFile(Filename);
	if (!mFile.open(QFile::ReadOnly | QFile::Text))
	{
		qDebug() << "can not read file!";
		return;
	}
	QTextStream in(&mFile);
	QString mText = in.readAll();

	qDebug() << mText;

	mFile.close();
}
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Read(":/MyFiles/main.cpp");

	return a.exec();
}
