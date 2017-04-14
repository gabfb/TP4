#ifndef AJOUTERJOUEUR_H
#define AJOUTERJOUEUR_H

#include <QtGui/QDialog>
#include "ui_ajouterjoueur.h"
#include "Date.h"

class AjouterJoueur : public QDialog
{
    Q_OBJECT

public:
    AjouterJoueur(QWidget *parent = 0);
    ~AjouterJoueur();

    QString reqNom();
    QString reqPrenom();
    util::Date reqDate();
    QString reqNum();
    QString reqPosition();

private slots:
	void validerFormulaire();

private:
    Ui::AjouterJoueurClass ui;
};

#endif // AJOUTERJOUEUR_H
