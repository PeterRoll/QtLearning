/********************************************************************************
** Form generated from reading UI file 'class15.ui'
**
** Created: Tue Jun 16 21:15:23 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS15_H
#define UI_CLASS15_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Class15Class
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Class15Class)
    {
        if (Class15Class->objectName().isEmpty())
            Class15Class->setObjectName(QString::fromUtf8("Class15Class"));
        Class15Class->resize(600, 400);
        pushButton = new QPushButton(Class15Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 75, 23));

        retranslateUi(Class15Class);

        QMetaObject::connectSlotsByName(Class15Class);
    } // setupUi

    void retranslateUi(QDialog *Class15Class)
    {
        Class15Class->setWindowTitle(QApplication::translate("Class15Class", "Class15", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class15Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class15Class: public Ui_Class15Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS15_H
