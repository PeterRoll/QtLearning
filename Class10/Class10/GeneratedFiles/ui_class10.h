/********************************************************************************
** Form generated from reading UI file 'class10.ui'
**
** Created: Mon Jun 8 20:01:01 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS10_H
#define UI_CLASS10_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_Class10Class
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Class10Class)
    {
        if (Class10Class->objectName().isEmpty())
            Class10Class->setObjectName(QString::fromUtf8("Class10Class"));
        Class10Class->resize(359, 199);
        horizontalLayout = new QHBoxLayout(Class10Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(Class10Class);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        splitter->addWidget(pushButton_2);

        horizontalLayout->addWidget(splitter);


        retranslateUi(Class10Class);

        QMetaObject::connectSlotsByName(Class10Class);
    } // setupUi

    void retranslateUi(QDialog *Class10Class)
    {
        Class10Class->setWindowTitle(QApplication::translate("Class10Class", "Class10", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class10Class", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Class10Class", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class10Class: public Ui_Class10Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS10_H
