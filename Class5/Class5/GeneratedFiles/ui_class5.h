/********************************************************************************
** Form generated from reading UI file 'class5.ui'
**
** Created: Tue May 26 20:15:26 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS5_H
#define UI_CLASS5_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class5Class
{
public:
    QAction *actionNewWindow;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Class5Class)
    {
        if (Class5Class->objectName().isEmpty())
            Class5Class->setObjectName(QString::fromUtf8("Class5Class"));
        Class5Class->resize(600, 400);
        actionNewWindow = new QAction(Class5Class);
        actionNewWindow->setObjectName(QString::fromUtf8("actionNewWindow"));
        centralWidget = new QWidget(Class5Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(160, 50, 211, 161));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 230, 75, 23));
        Class5Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Class5Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Class5Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Class5Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Class5Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Class5Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Class5Class->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNewWindow);
        mainToolBar->addAction(actionNewWindow);

        retranslateUi(Class5Class);

        QMetaObject::connectSlotsByName(Class5Class);
    } // setupUi

    void retranslateUi(QMainWindow *Class5Class)
    {
        Class5Class->setWindowTitle(QApplication::translate("Class5Class", "Class5", 0, QApplication::UnicodeUTF8));
        actionNewWindow->setText(QApplication::translate("Class5Class", "NewWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class5Class", "PushButton", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Class5Class", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class5Class: public Ui_Class5Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS5_H
