/********************************************************************************
** Form generated from reading UI file 'class24.ui'
**
** Created: Wed Jun 17 21:53:58 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS24_H
#define UI_CLASS24_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Class24Class
{
public:
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;

    void setupUi(QDialog *Class24Class)
    {
        if (Class24Class->objectName().isEmpty())
            Class24Class->setObjectName(QString::fromUtf8("Class24Class"));
        Class24Class->resize(440, 188);
        verticalLayout = new QVBoxLayout(Class24Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider = new QSlider(Class24Class);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        progressBar = new QProgressBar(Class24Class);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(Class24Class);

        QMetaObject::connectSlotsByName(Class24Class);
    } // setupUi

    void retranslateUi(QDialog *Class24Class)
    {
        Class24Class->setWindowTitle(QApplication::translate("Class24Class", "Class24", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class24Class: public Ui_Class24Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS24_H
