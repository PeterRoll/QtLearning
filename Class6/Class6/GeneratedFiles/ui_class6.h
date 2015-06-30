/********************************************************************************
** Form generated from reading UI file 'class6.ui'
**
** Created: Tue May 26 20:32:17 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS6_H
#define UI_CLASS6_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Class6Class
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Class6Class)
    {
        if (Class6Class->objectName().isEmpty())
            Class6Class->setObjectName(QString::fromUtf8("Class6Class"));
        Class6Class->resize(479, 216);
        verticalLayout = new QVBoxLayout(Class6Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Class6Class);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Class6Class);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(Class6Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Class6Class);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Class6Class);

        QMetaObject::connectSlotsByName(Class6Class);
    } // setupUi

    void retranslateUi(QDialog *Class6Class)
    {
        Class6Class->setWindowTitle(QApplication::translate("Class6Class", "Class6", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Class6Class", "Name", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class6Class", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Class6Class", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class6Class: public Ui_Class6Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS6_H
