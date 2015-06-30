/********************************************************************************
** Form generated from reading UI file 'class16.ui'
**
** Created: Tue Jun 16 21:27:49 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS16_H
#define UI_CLASS16_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Class16Class
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Class16Class)
    {
        if (Class16Class->objectName().isEmpty())
            Class16Class->setObjectName(QString::fromUtf8("Class16Class"));
        Class16Class->resize(467, 148);
        horizontalLayout = new QHBoxLayout(Class16Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(Class16Class);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(Class16Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Class16Class);

        QMetaObject::connectSlotsByName(Class16Class);
    } // setupUi

    void retranslateUi(QDialog *Class16Class)
    {
        Class16Class->setWindowTitle(QApplication::translate("Class16Class", "Class16", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class16Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class16Class: public Ui_Class16Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS16_H
