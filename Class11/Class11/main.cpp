
#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>
#include <QtCore/QDir>
#include <QtCore/QFileInfo>
#include <QtCore/QString>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	//QDir mDir("E:/Project");

	//qDebug() << mDir.exists();

	//QDir mDir;
	//QString mPath="E:/Test/ZZZ";


	//if (!mDir.exists(mPath))
	//{
	//	mDir.mkpath(mPath);
	//	qDebug() << "Created!";
	//}
	//else
	//{
	//	qDebug() << "Already exist!";
	//}
	QDir mDir("E:/Test");

	foreach(QFileInfo mitm,mDir.entryInfoList())
	{
		qDebug() << mitm.absoluteFilePath();
	}

	return a.exec();
}
