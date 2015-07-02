#include "MyTimer.h"
#include <QtCore/QtCore>
#include <QDebug>
MyTimer::MyTimer(void)
{
	timer = new QTimer(this);
	connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
	timer->start(1000);
}


MyTimer::~MyTimer(void)
{
}

void MyTimer::MySlot()
{
	qDebug() << "Timer executed";
}
