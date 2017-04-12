#ifndef AJOUTERJOUEUR_H
#define AJOUTERJOUEUR_H

#include <QtGui/QDialog>
#include "ui_ajouterjoueur.h"

class AjouterJoueur : public QDialog
{
    Q_OBJECT

public:
    AjouterJoueur(QWidget *parent = 0);
    ~AjouterJoueur();

private:
    Ui::AjouterJoueurClass ui;
};

#endif // AJOUTERJOUEUR_H
