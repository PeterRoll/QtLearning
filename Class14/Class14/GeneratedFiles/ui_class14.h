/********************************************************************************
** Form generated from reading UI file 'class14.ui'
**
** Created: Mon Jun 8 21:05:32 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS14_H
#define UI_CLASS14_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Class14Class
{
public:
    QLabel *label;

    void setupUi(QDialog *Class14Class)
    {
        if (Class14Class->objectName().isEmpty())
            Class14Class->setObjectName(QString::fromUtf8("Class14Class"));
        Class14Class->resize(600, 400);
        label = new QLabel(Class14Class);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 111, 21));

        retranslateUi(Class14Class);

        QMetaObject::connectSlotsByName(Class14Class);
    } // setupUi

    void retranslateUi(QDialog *Class14Class)
    {
        Class14Class->setWindowTitle(QApplication::translate("Class14Class", "Class14", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Class14Class", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class14Class: public Ui_Class14Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS14_H
