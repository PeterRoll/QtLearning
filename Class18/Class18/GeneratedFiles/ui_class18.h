/********************************************************************************
** Form generated from reading UI file 'class18.ui'
**
** Created: Tue Jun 16 21:43:53 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS18_H
#define UI_CLASS18_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Class18Class
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QPushButton *pushButton;

    void setupUi(QDialog *Class18Class)
    {
        if (Class18Class->objectName().isEmpty())
            Class18Class->setObjectName(QString::fromUtf8("Class18Class"));
        Class18Class->resize(330, 145);
        horizontalLayout = new QHBoxLayout(Class18Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton1 = new QRadioButton(Class18Class);
        radioButton1->setObjectName(QString::fromUtf8("radioButton1"));
        radioButton1->setChecked(true);

        verticalLayout->addWidget(radioButton1);

        radioButton2 = new QRadioButton(Class18Class);
        radioButton2->setObjectName(QString::fromUtf8("radioButton2"));

        verticalLayout->addWidget(radioButton2);


        horizontalLayout->addLayout(verticalLayout);

        pushButton = new QPushButton(Class18Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Class18Class);

        QMetaObject::connectSlotsByName(Class18Class);
    } // setupUi

    void retranslateUi(QDialog *Class18Class)
    {
        Class18Class->setWindowTitle(QApplication::translate("Class18Class", "Class18", 0, QApplication::UnicodeUTF8));
        radioButton1->setText(QApplication::translate("Class18Class", "Cats", 0, QApplication::UnicodeUTF8));
        radioButton2->setText(QApplication::translate("Class18Class", "Dogs", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class18Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class18Class: public Ui_Class18Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS18_H
