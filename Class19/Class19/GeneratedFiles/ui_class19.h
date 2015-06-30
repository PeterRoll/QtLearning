/********************************************************************************
** Form generated from reading UI file 'class19.ui'
**
** Created: Tue Jun 16 21:59:29 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS19_H
#define UI_CLASS19_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Class19Class
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *Class19Class)
    {
        if (Class19Class->objectName().isEmpty())
            Class19Class->setObjectName(QString::fromUtf8("Class19Class"));
        Class19Class->resize(433, 155);
        comboBox = new QComboBox(Class19Class);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 30, 181, 22));
        pushButton = new QPushButton(Class19Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 30, 75, 23));

        retranslateUi(Class19Class);

        QMetaObject::connectSlotsByName(Class19Class);
    } // setupUi

    void retranslateUi(QDialog *Class19Class)
    {
        Class19Class->setWindowTitle(QApplication::translate("Class19Class", "Class19", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class19Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class19Class: public Ui_Class19Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS19_H
