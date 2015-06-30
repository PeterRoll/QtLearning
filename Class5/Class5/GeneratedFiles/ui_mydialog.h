/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created: Tue May 26 20:15:26 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mydialog
{
public:

    void setupUi(QDialog *mydialog)
    {
        if (mydialog->objectName().isEmpty())
            mydialog->setObjectName(QString::fromUtf8("mydialog"));
        mydialog->resize(400, 300);

        retranslateUi(mydialog);

        QMetaObject::connectSlotsByName(mydialog);
    } // setupUi

    void retranslateUi(QDialog *mydialog)
    {
        mydialog->setWindowTitle(QApplication::translate("mydialog", "mydialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mydialog: public Ui_mydialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
