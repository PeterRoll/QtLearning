/********************************************************************************
** Form generated from reading UI file 'class17.ui'
**
** Created: Tue Jun 16 21:31:15 2015
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS17_H
#define UI_CLASS17_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Class17Class
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QDialog *Class17Class)
    {
        if (Class17Class->objectName().isEmpty())
            Class17Class->setObjectName(QString::fromUtf8("Class17Class"));
        Class17Class->resize(254, 87);
        horizontalLayout = new QHBoxLayout(Class17Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(Class17Class);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(Class17Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Class17Class);

        QMetaObject::connectSlotsByName(Class17Class);
    } // setupUi

    void retranslateUi(QDialog *Class17Class)
    {
        Class17Class->setWindowTitle(QApplication::translate("Class17Class", "Class17", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Class17Class", "I like cats", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Class17Class", "Click me", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Class17Class: public Ui_Class17Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS17_H
