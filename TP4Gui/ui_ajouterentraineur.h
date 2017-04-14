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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjouterEntraineurClass
{
public:
    QPushButton *BoutonOk;
    QPushButton *BoutonCancel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_tel;
    QLineEdit *lineEdit_ramq;
    QSpinBox *spinBox_jour;
    QSpinBox *spinBox_mois;
    QSpinBox *spinBox_an;
    QComboBox *comboBoxSex;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *AjouterEntraineurClass)
    {
        if (AjouterEntraineurClass->objectName().isEmpty())
            AjouterEntraineurClass->setObjectName(QString::fromUtf8("AjouterEntraineurClass"));
        AjouterEntraineurClass->resize(446, 300);
        BoutonOk = new QPushButton(AjouterEntraineurClass);
        BoutonOk->setObjectName(QString::fromUtf8("BoutonOk"));
        BoutonOk->setGeometry(QRect(300, 260, 101, 27));
        BoutonCancel = new QPushButton(AjouterEntraineurClass);
        BoutonCancel->setObjectName(QString::fromUtf8("BoutonCancel"));
        BoutonCancel->setGeometry(QRect(30, 260, 85, 27));
        gridLayoutWidget = new QWidget(AjouterEntraineurClass);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 371, 215));
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

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_nom = new QLineEdit(gridLayoutWidget);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));

        gridLayout->addWidget(lineEdit_nom, 0, 1, 1, 3);

        lineEdit_prenom = new QLineEdit(gridLayoutWidget);
        lineEdit_prenom->setObjectName(QString::fromUtf8("lineEdit_prenom"));

        gridLayout->addWidget(lineEdit_prenom, 1, 1, 1, 3);

        lineEdit_tel = new QLineEdit(gridLayoutWidget);
        lineEdit_tel->setObjectName(QString::fromUtf8("lineEdit_tel"));

        gridLayout->addWidget(lineEdit_tel, 2, 1, 1, 3);

        lineEdit_ramq = new QLineEdit(gridLayoutWidget);
        lineEdit_ramq->setObjectName(QString::fromUtf8("lineEdit_ramq"));

        gridLayout->addWidget(lineEdit_ramq, 3, 1, 1, 2);

        spinBox_jour = new QSpinBox(gridLayoutWidget);
        spinBox_jour->setObjectName(QString::fromUtf8("spinBox_jour"));
        spinBox_jour->setMinimum(1);
        spinBox_jour->setMaximum(31);

        gridLayout->addWidget(spinBox_jour, 5, 1, 1, 1);

        spinBox_mois = new QSpinBox(gridLayoutWidget);
        spinBox_mois->setObjectName(QString::fromUtf8("spinBox_mois"));
        spinBox_mois->setMinimum(1);
        spinBox_mois->setMaximum(12);

        gridLayout->addWidget(spinBox_mois, 5, 2, 1, 1);

        spinBox_an = new QSpinBox(gridLayoutWidget);
        spinBox_an->setObjectName(QString::fromUtf8("spinBox_an"));
        spinBox_an->setMinimum(1970);
        spinBox_an->setMaximum(2020);

        gridLayout->addWidget(spinBox_an, 5, 3, 1, 1);

        comboBoxSex = new QComboBox(gridLayoutWidget);
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));

        gridLayout->addWidget(comboBoxSex, 3, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_6 = new QLabel(AjouterEntraineurClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 10, 231, 20));

        retranslateUi(AjouterEntraineurClass);
        QObject::connect(BoutonCancel, SIGNAL(clicked()), AjouterEntraineurClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AjouterEntraineurClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterEntraineurClass)
    {
        AjouterEntraineurClass->setWindowTitle(QApplication::translate("AjouterEntraineurClass", "AjouterEntraineur", 0, QApplication::UnicodeUTF8));
        BoutonOk->setText(QApplication::translate("AjouterEntraineurClass", "Ok", 0, QApplication::UnicodeUTF8));
        BoutonCancel->setText(QApplication::translate("AjouterEntraineurClass", "Cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AjouterEntraineurClass", "Nom:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AjouterEntraineurClass", "Prenom:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AjouterEntraineurClass", "Num\303\251ro de t\303\251l\303\251phone:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AjouterEntraineurClass", "RAMQ:", 0, QApplication::UnicodeUTF8));
        comboBoxSex->clear();
        comboBoxSex->insertItems(0, QStringList()
         << QApplication::translate("AjouterEntraineurClass", "M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AjouterEntraineurClass", "F", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("AjouterEntraineurClass", "Date (j / m / a):", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AjouterEntraineurClass", "Veuillez saisir les informations suivantes:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterEntraineurClass: public Ui_AjouterEntraineurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERENTRAINEUR_H
