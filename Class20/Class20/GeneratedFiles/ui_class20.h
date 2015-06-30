/********************************************************************************
** Form generated from reading UI file 'class20.ui'
**
** Created: Tue Jun 16 22:35:45 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS20_H
#define UI_CLASS20_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Class20Class
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Class20Class)
    {
        if (Class20Class->objectName().isEmpty())
            Class20Class->setObjectName(QString::fromUtf8("Class20Class"));
        Class20Class->resize(369, 241);
        verticalLayout = new QVBoxLayout(Class20Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Class20Class);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(Class20Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Class20Class);

        QMetaObject::connectSlotsByName(Class20Class);
    } // setupUi

    void retranslateUi(QDialog *Class20Class)
    {
        Class20Class->setWindowTitle(QApplication::translate("Class20Class", "Class20", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class20Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class20Class: public Ui_Class20Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS20_H
