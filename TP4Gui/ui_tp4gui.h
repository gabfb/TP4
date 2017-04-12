/********************************************************************************
** Form generated from reading UI file 'tp4gui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TP4GUI_H
#define UI_TP4GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TP4GuiClass
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *AnnuaireTexte;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *AjouterPersonne;
    QPushButton *SupprimerPersonne;
    QPushButton *Quitter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TP4GuiClass)
    {
        if (TP4GuiClass->objectName().isEmpty())
            TP4GuiClass->setObjectName(QString::fromUtf8("TP4GuiClass"));
        TP4GuiClass->resize(800, 600);
        centralwidget = new QWidget(TP4GuiClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 581, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AnnuaireTexte = new QTextEdit(verticalLayoutWidget);
        AnnuaireTexte->setObjectName(QString::fromUtf8("AnnuaireTexte"));

        verticalLayout->addWidget(AnnuaireTexte);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(590, 0, 160, 551));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        AjouterPersonne = new QPushButton(verticalLayoutWidget_2);
        AjouterPersonne->setObjectName(QString::fromUtf8("AjouterPersonne"));

        verticalLayout_2->addWidget(AjouterPersonne);

        SupprimerPersonne = new QPushButton(verticalLayoutWidget_2);
        SupprimerPersonne->setObjectName(QString::fromUtf8("SupprimerPersonne"));

        verticalLayout_2->addWidget(SupprimerPersonne);

        Quitter = new QPushButton(verticalLayoutWidget_2);
        Quitter->setObjectName(QString::fromUtf8("Quitter"));

        verticalLayout_2->addWidget(Quitter);

        TP4GuiClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TP4GuiClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        TP4GuiClass->setMenuBar(menubar);
        statusbar = new QStatusBar(TP4GuiClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TP4GuiClass->setStatusBar(statusbar);

        retranslateUi(TP4GuiClass);

        QMetaObject::connectSlotsByName(TP4GuiClass);
    } // setupUi

    void retranslateUi(QMainWindow *TP4GuiClass)
    {
        TP4GuiClass->setWindowTitle(QApplication::translate("TP4GuiClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        AjouterPersonne->setText(QApplication::translate("TP4GuiClass", "Ajouter", 0, QApplication::UnicodeUTF8));
        SupprimerPersonne->setText(QApplication::translate("TP4GuiClass", "Supprimer", 0, QApplication::UnicodeUTF8));
        Quitter->setText(QApplication::translate("TP4GuiClass", "Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TP4GuiClass: public Ui_TP4GuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP4GUI_H
