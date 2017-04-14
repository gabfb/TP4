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

class Ui_AjouterJoueurClass
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_tel;
    QSpinBox *spinBox_jour;
    QSpinBox *spinBox_mois;
    QSpinBox *spinBox_an;
    QLabel *label_5;
    QComboBox *comboBoxPosition;
    QLabel *label_6;
    QPushButton *BoutonCancel;
    QPushButton *BoutonOk;

    void setupUi(QDialog *AjouterJoueurClass)
    {
        if (AjouterJoueurClass->objectName().isEmpty())
            AjouterJoueurClass->setObjectName(QString::fromUtf8("AjouterJoueurClass"));
        AjouterJoueurClass->resize(378, 297);
        gridLayoutWidget = new QWidget(AjouterJoueurClass);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 341, 184));
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

        spinBox_jour = new QSpinBox(gridLayoutWidget);
        spinBox_jour->setObjectName(QString::fromUtf8("spinBox_jour"));
        spinBox_jour->setMinimum(1);
        spinBox_jour->setMaximum(31);

        gridLayout->addWidget(spinBox_jour, 4, 1, 1, 1);

        spinBox_mois = new QSpinBox(gridLayoutWidget);
        spinBox_mois->setObjectName(QString::fromUtf8("spinBox_mois"));
        spinBox_mois->setMinimum(1);
        spinBox_mois->setMaximum(12);

        gridLayout->addWidget(spinBox_mois, 4, 2, 1, 1);

        spinBox_an = new QSpinBox(gridLayoutWidget);
        spinBox_an->setObjectName(QString::fromUtf8("spinBox_an"));
        spinBox_an->setMinimum(1970);
        spinBox_an->setMaximum(2020);

        gridLayout->addWidget(spinBox_an, 4, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBoxPosition = new QComboBox(gridLayoutWidget);
        comboBoxPosition->setObjectName(QString::fromUtf8("comboBoxPosition"));

        gridLayout->addWidget(comboBoxPosition, 3, 1, 1, 3);

        label_6 = new QLabel(AjouterJoueurClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 10, 231, 20));
        BoutonCancel = new QPushButton(AjouterJoueurClass);
        BoutonCancel->setObjectName(QString::fromUtf8("BoutonCancel"));
        BoutonCancel->setGeometry(QRect(20, 260, 85, 27));
        BoutonOk = new QPushButton(AjouterJoueurClass);
        BoutonOk->setObjectName(QString::fromUtf8("BoutonOk"));
        BoutonOk->setGeometry(QRect(260, 260, 101, 27));

        retranslateUi(AjouterJoueurClass);
        QObject::connect(BoutonCancel, SIGNAL(clicked()), AjouterJoueurClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AjouterJoueurClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterJoueurClass)
    {
        AjouterJoueurClass->setWindowTitle(QApplication::translate("AjouterJoueurClass", "AjouterJoueur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AjouterJoueurClass", "Nom:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AjouterJoueurClass", "Prenom:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AjouterJoueurClass", "Num\303\251ro de t\303\251l\303\251phone:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AjouterJoueurClass", "Position:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AjouterJoueurClass", "Date (j / m / a)", 0, QApplication::UnicodeUTF8));
        comboBoxPosition->clear();
        comboBoxPosition->insertItems(0, QStringList()
         << QApplication::translate("AjouterJoueurClass", "gardien", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AjouterJoueurClass", "ailier", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AjouterJoueurClass", "centre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AjouterJoueurClass", "defensseur", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("AjouterJoueurClass", "Veuillez saisir les informations suivantes:", 0, QApplication::UnicodeUTF8));
        BoutonCancel->setText(QApplication::translate("AjouterJoueurClass", "Cancel", 0, QApplication::UnicodeUTF8));
        BoutonOk->setText(QApplication::translate("AjouterJoueurClass", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterJoueurClass: public Ui_AjouterJoueurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEUR_H
