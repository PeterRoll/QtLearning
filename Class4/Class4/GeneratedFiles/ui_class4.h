/********************************************************************************
** Form generated from reading UI file 'class4.ui'
**
** Created: Tue May 26 19:37:06 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS4_H
#define UI_CLASS4_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class4Class
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Class4Class)
    {
        if (Class4Class->objectName().isEmpty())
            Class4Class->setObjectName(QString::fromUtf8("Class4Class"));
        Class4Class->resize(600, 400);
        centralWidget = new QWidget(Class4Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 351, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        progressBar_2 = new QProgressBar(layoutWidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setValue(24);

        verticalLayout->addWidget(progressBar_2);

        progressBar_3 = new QProgressBar(layoutWidget);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setValue(24);

        verticalLayout->addWidget(progressBar_3);

        Class4Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Class4Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Class4Class->setMenuBar(menuBar);

        retranslateUi(Class4Class);

        QMetaObject::connectSlotsByName(Class4Class);
    } // setupUi

    void retranslateUi(QMainWindow *Class4Class)
    {
        Class4Class->setWindowTitle(QApplication::translate("Class4Class", "Class4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class4Class: public Ui_Class4Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS4_H
