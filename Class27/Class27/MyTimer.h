#pragma once
#include <QtCore/QtCore>

class MyTimer : public QObject
{
	Q_OBJECT
public:
	MyTimer(void);
	~MyTimer(void);
	QTimer* timer;
public slots:
	void MySlot();
};

