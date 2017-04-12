/********************************************************************************
** Form generated from reading UI file 'ajouterjoueur.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOUEUR_H
#define UI_AJOUTERJOUEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterJoueurClass
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *AjouterJoueurClass)
    {
        if (AjouterJoueurClass->objectName().isEmpty())
            AjouterJoueurClass->setObjectName(QString::fromUtf8("AjouterJoueurClass"));
        AjouterJoueurClass->resize(407, 409);
        horizontalLayoutWidget = new QWidget(AjouterJoueurClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 160, 331, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(AjouterJoueurClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 55, 17));

        retranslateUi(AjouterJoueurClass);

        QMetaObject::connectSlotsByName(AjouterJoueurClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterJoueurClass)
    {
        AjouterJoueurClass->setWindowTitle(QApplication::translate("AjouterJoueurClass", "AjouterJoueur", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AjouterJoueurClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AjouterJoueurClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterJoueurClass: public Ui_AjouterJoueurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEUR_H
