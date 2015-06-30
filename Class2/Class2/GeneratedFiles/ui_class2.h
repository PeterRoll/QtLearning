/********************************************************************************
** Form generated from reading UI file 'class2.ui'
**
** Created: Tue May 26 19:05:09 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS2_H
#define UI_CLASS2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Class2Class)
    {
        if (Class2Class->objectName().isEmpty())
            Class2Class->setObjectName(QString::fromUtf8("Class2Class"));
        Class2Class->resize(600, 400);
        menuBar = new QMenuBar(Class2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Class2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Class2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Class2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Class2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Class2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Class2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Class2Class->setStatusBar(statusBar);

        retranslateUi(Class2Class);

        QMetaObject::connectSlotsByName(Class2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Class2Class)
    {
        Class2Class->setWindowTitle(QApplication::translate("Class2Class", "Class2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class2Class: public Ui_Class2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS2_H
