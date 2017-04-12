/********************************************************************************
** Form generated from reading UI file 'ajouterentraineur.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERENTRAINEUR_H
#define UI_AJOUTERENTRAINEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AjouterEntraineurClass
{
public:

    void setupUi(QDialog *AjouterEntraineurClass)
    {
        if (AjouterEntraineurClass->objectName().isEmpty())
            AjouterEntraineurClass->setObjectName(QString::fromUtf8("AjouterEntraineurClass"));
        AjouterEntraineurClass->resize(400, 300);

        retranslateUi(AjouterEntraineurClass);

        QMetaObject::connectSlotsByName(AjouterEntraineurClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterEntraineurClass)
    {
        AjouterEntraineurClass->setWindowTitle(QApplication::translate("AjouterEntraineurClass", "AjouterEntraineur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterEntraineurClass: public Ui_AjouterEntraineurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERENTRAINEUR_H
