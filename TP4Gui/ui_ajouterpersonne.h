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
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterPersonneClass
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAjouterJoueur;
    QPushButton *pushButtonAjouterEntraineur;

    void setupUi(QDialog *AjouterPersonneClass)
    {
        if (AjouterPersonneClass->objectName().isEmpty())
            AjouterPersonneClass->setObjectName(QString::fromUtf8("AjouterPersonneClass"));
        AjouterPersonneClass->resize(271, 172);
        verticalLayoutWidget = new QWidget(AjouterPersonneClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 271, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAjouterJoueur = new QPushButton(verticalLayoutWidget);
        pushButtonAjouterJoueur->setObjectName(QString::fromUtf8("pushButtonAjouterJoueur"));

        verticalLayout->addWidget(pushButtonAjouterJoueur);

        pushButtonAjouterEntraineur = new QPushButton(verticalLayoutWidget);
        pushButtonAjouterEntraineur->setObjectName(QString::fromUtf8("pushButtonAjouterEntraineur"));

        verticalLayout->addWidget(pushButtonAjouterEntraineur);


        retranslateUi(AjouterPersonneClass);

        QMetaObject::connectSlotsByName(AjouterPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterPersonneClass)
    {
        AjouterPersonneClass->setWindowTitle(QApplication::translate("AjouterPersonneClass", "AjouterPersonne", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterJoueur->setText(QApplication::translate("AjouterPersonneClass", "Ajouter Joueur", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterEntraineur->setText(QApplication::translate("AjouterPersonneClass", "Ajouter Entraineur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterPersonneClass: public Ui_AjouterPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERPERSONNE_H
