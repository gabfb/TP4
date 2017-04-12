/********************************************************************************
** Form generated from reading UI file 'ajouterpersonne.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERPERSONNE_H
#define UI_AJOUTERPERSONNE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterPersonneClass
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *typelineedit;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *AjouterPersonneClass)
    {
        if (AjouterPersonneClass->objectName().isEmpty())
            AjouterPersonneClass->setObjectName(QString::fromUtf8("AjouterPersonneClass"));
        AjouterPersonneClass->resize(400, 300);
        verticalLayoutWidget = new QWidget(AjouterPersonneClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 40, 271, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typelineedit = new QLineEdit(verticalLayoutWidget);
        typelineedit->setObjectName(QString::fromUtf8("typelineedit"));

        verticalLayout->addWidget(typelineedit);

        pushButtonOK = new QPushButton(verticalLayoutWidget);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        verticalLayout->addWidget(pushButtonOK);


        retranslateUi(AjouterPersonneClass);

        QMetaObject::connectSlotsByName(AjouterPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterPersonneClass)
    {
        AjouterPersonneClass->setWindowTitle(QApplication::translate("AjouterPersonneClass", "AjouterPersonne", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("AjouterPersonneClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterPersonneClass: public Ui_AjouterPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPERSONNE_H
