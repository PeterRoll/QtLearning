/********************************************************************************
** Form generated from reading UI file 'class25.ui'
**
** Created: Wed Jun 17 22:31:04 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS25_H
#define UI_CLASS25_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class25Class
{
public:
    QAction *actionDo_something;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Class25Class)
    {
        if (Class25Class->objectName().isEmpty())
            Class25Class->setObjectName(QString::fromUtf8("Class25Class"));
        Class25Class->resize(600, 400);
        actionDo_something = new QAction(Class25Class);
        actionDo_something->setObjectName(QString::fromUtf8("actionDo_something"));
        centralWidget = new QWidget(Class25Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Class25Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Class25Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Class25Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Class25Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Class25Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Class25Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Class25Class->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionDo_something);
        mainToolBar->addAction(actionDo_something);

        retranslateUi(Class25Class);

        QMetaObject::connectSlotsByName(Class25Class);
    } // setupUi

    void retranslateUi(QMainWindow *Class25Class)
    {
        Class25Class->setWindowTitle(QApplication::translate("Class25Class", "Class25", 0, QApplication::UnicodeUTF8));
        actionDo_something->setText(QApplication::translate("Class25Class", "Do something", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Class25Class", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class25Class: public Ui_Class25Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS25_H
