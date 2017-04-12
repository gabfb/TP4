/********************************************************************************
** Form generated from reading UI file 'supprimerpersonne.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERPERSONNE_H
#define UI_SUPPRIMERPERSONNE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SupprimerPersonneClass
{
public:

    void setupUi(QDialog *SupprimerPersonneClass)
    {
        if (SupprimerPersonneClass->objectName().isEmpty())
            SupprimerPersonneClass->setObjectName(QString::fromUtf8("SupprimerPersonneClass"));
        SupprimerPersonneClass->resize(400, 300);

        retranslateUi(SupprimerPersonneClass);

        QMetaObject::connectSlotsByName(SupprimerPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *SupprimerPersonneClass)
    {
        SupprimerPersonneClass->setWindowTitle(QApplication::translate("SupprimerPersonneClass", "SupprimerPersonne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupprimerPersonneClass: public Ui_SupprimerPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERPERSONNE_H
