#ifndef CLASS21_H
#define CLASS21_H

#include <QtGui/QDialog>
#include "ui_class21.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>

class Class21 : public QDialog
{
	Q_OBJECT

void AddRoot(QString name, QString Description);
void AddChild(QTreeWidgetItem *parent,QString name, QString Description);

public:
	Class21(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Class21();

private:
	Ui::Class21Class ui;
private slots:
	void on_pushButton_clicked();
};

#endif // CLASS21_H
