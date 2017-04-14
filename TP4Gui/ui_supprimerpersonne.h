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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SupprimerPersonneClass
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLabel *label_5;
    QSpinBox *spinBox_jour;
    QSpinBox *spinBox_mois;
    QSpinBox *spinBox_an;
    QPushButton *BoutonCancel;
    QPushButton *BoutonOk;
    QLabel *label_6;

    void setupUi(QDialog *SupprimerPersonneClass)
    {
        if (SupprimerPersonneClass->objectName().isEmpty())
            SupprimerPersonneClass->setObjectName(QString::fromUtf8("SupprimerPersonneClass"));
        SupprimerPersonneClass->resize(391, 297);
        gridLayoutWidget = new QWidget(SupprimerPersonneClass);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 50, 341, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit_nom = new QLineEdit(gridLayoutWidget);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));

        gridLayout->addWidget(lineEdit_nom, 0, 1, 1, 3);

        lineEdit_prenom = new QLineEdit(gridLayoutWidget);
        lineEdit_prenom->setObjectName(QString::fromUtf8("lineEdit_prenom"));

        gridLayout->addWidget(lineEdit_prenom, 1, 1, 1, 3);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        spinBox_jour = new QSpinBox(gridLayoutWidget);
        spinBox_jour->setObjectName(QString::fromUtf8("spinBox_jour"));
        spinBox_jour->setMinimum(1);
        spinBox_jour->setMaximum(31);

        gridLayout->addWidget(spinBox_jour, 2, 1, 1, 1);

        spinBox_mois = new QSpinBox(gridLayoutWidget);
        spinBox_mois->setObjectName(QString::fromUtf8("spinBox_mois"));
        spinBox_mois->setMinimum(1);
        spinBox_mois->setMaximum(12);

        gridLayout->addWidget(spinBox_mois, 2, 2, 1, 1);

        spinBox_an = new QSpinBox(gridLayoutWidget);
        spinBox_an->setObjectName(QString::fromUtf8("spinBox_an"));
        spinBox_an->setMinimum(1970);
        spinBox_an->setMaximum(2020);

        gridLayout->addWidget(spinBox_an, 2, 3, 1, 1);

        BoutonCancel = new QPushButton(gridLayoutWidget);
        BoutonCancel->setObjectName(QString::fromUtf8("BoutonCancel"));

        gridLayout->addWidget(BoutonCancel, 3, 0, 1, 1);

        BoutonOk = new QPushButton(gridLayoutWidget);
        BoutonOk->setObjectName(QString::fromUtf8("BoutonOk"));

        gridLayout->addWidget(BoutonOk, 3, 3, 1, 1);

        label_6 = new QLabel(SupprimerPersonneClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 20, 231, 20));

        retranslateUi(SupprimerPersonneClass);
        QObject::connect(BoutonCancel, SIGNAL(clicked()), SupprimerPersonneClass, SLOT(close()));

        QMetaObject::connectSlotsByName(SupprimerPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *SupprimerPersonneClass)
    {
        SupprimerPersonneClass->setWindowTitle(QApplication::translate("SupprimerPersonneClass", "SupprimerPersonne", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SupprimerPersonneClass", "Nom:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SupprimerPersonneClass", "Prenom:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SupprimerPersonneClass", "Date (j / m / a):", 0, QApplication::UnicodeUTF8));
        BoutonCancel->setText(QApplication::translate("SupprimerPersonneClass", "Cancel", 0, QApplication::UnicodeUTF8));
        BoutonOk->setText(QApplication::translate("SupprimerPersonneClass", "Ok", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SupprimerPersonneClass", "Veuillez saisir les informations suivantes:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupprimerPersonneClass: public Ui_SupprimerPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERPERSONNE_H
