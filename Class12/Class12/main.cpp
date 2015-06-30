
#include <QtCore/QCoreApplication>
#include <QtCore/QFile>
#include <QtCore/QString>
#include <QtCore/QDebug>
#include <QtCore/QTextStream>

void Write(QString Filename)
{
	QFile mFile(Filename);
	if (!mFile.open(QFile::WriteOnly | QFile::Text))
	{
		qDebug() << "can not open file!";
		return;
	}
	QTextStream out(&mFile);
	out << "Hello world!";

	mFile.flush();
	mFile.close();
}

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

	QString mFilename= "E:/Test/myfile.txt";

	Write(mFilename);
	Read(mFilename);
	
	return a.exec();
}
