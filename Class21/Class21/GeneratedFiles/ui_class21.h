/********************************************************************************
** Form generated from reading UI file 'class21.ui'
**
** Created: Wed Jun 17 21:10:12 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS21_H
#define UI_CLASS21_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Class21Class
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Class21Class)
    {
        if (Class21Class->objectName().isEmpty())
            Class21Class->setObjectName(QString::fromUtf8("Class21Class"));
        Class21Class->resize(316, 301);
        verticalLayout = new QVBoxLayout(Class21Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(Class21Class);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        pushButton = new QPushButton(Class21Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Class21Class);

        QMetaObject::connectSlotsByName(Class21Class);
    } // setupUi

    void retranslateUi(QDialog *Class21Class)
    {
        Class21Class->setWindowTitle(QApplication::translate("Class21Class", "Class21", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class21Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class21Class: public Ui_Class21Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS21_H
