/********************************************************************************
** Form generated from reading UI file 'class23.ui'
**
** Created: Wed Jun 17 21:45:29 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS23_H
#define UI_CLASS23_H

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

class Ui_Class23Class
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Class23Class)
    {
        if (Class23Class->objectName().isEmpty())
            Class23Class->setObjectName(QString::fromUtf8("Class23Class"));
        Class23Class->resize(600, 400);
        actionNew = new QAction(Class23Class);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/page.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Class23Class);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Class23Class);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        centralWidget = new QWidget(Class23Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Class23Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Class23Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Class23Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Class23Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Class23Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Class23Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Class23Class->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);

        retranslateUi(Class23Class);

        QMetaObject::connectSlotsByName(Class23Class);
    } // setupUi

    void retranslateUi(QMainWindow *Class23Class)
    {
        Class23Class->setWindowTitle(QApplication::translate("Class23Class", "Class23", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("Class23Class", "New", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Class23Class", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Class23Class", "Save", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Class23Class", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class23Class: public Ui_Class23Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS23_H
