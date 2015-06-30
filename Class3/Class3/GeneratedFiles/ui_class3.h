/********************************************************************************
** Form generated from reading UI file 'class3.ui'
**
** Created: Tue May 26 19:15:09 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS3_H
#define UI_CLASS3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class3Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Class3Class)
    {
        if (Class3Class->objectName().isEmpty())
            Class3Class->setObjectName(QString::fromUtf8("Class3Class"));
        Class3Class->resize(600, 400);
        centralWidget = new QWidget(Class3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 75, 23));
        Class3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Class3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Class3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Class3Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Class3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Class3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Class3Class->setStatusBar(statusBar);

        retranslateUi(Class3Class);
        QObject::connect(pushButton, SIGNAL(clicked()), Class3Class, SLOT(close()));

        QMetaObject::connectSlotsByName(Class3Class);
    } // setupUi

    void retranslateUi(QMainWindow *Class3Class)
    {
        Class3Class->setWindowTitle(QApplication::translate("Class3Class", "Class3", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class3Class", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class3Class: public Ui_Class3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS3_H
