/********************************************************************************
** Form generated from reading UI file 'class8.ui'
**
** Created: Mon Jun 8 19:55:36 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS8_H
#define UI_CLASS8_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class8Class
{
public:

    void setupUi(QWidget *Class8Class)
    {
        if (Class8Class->objectName().isEmpty())
            Class8Class->setObjectName(QString::fromUtf8("Class8Class"));
        Class8Class->resize(600, 400);

        retranslateUi(Class8Class);

        QMetaObject::connectSlotsByName(Class8Class);
    } // setupUi

    void retranslateUi(QWidget *Class8Class)
    {
        Class8Class->setWindowTitle(QApplication::translate("Class8Class", "Class8", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class8Class: public Ui_Class8Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS8_H
