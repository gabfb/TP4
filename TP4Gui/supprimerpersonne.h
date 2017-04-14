#ifndef SUPPRIMERPERSONNE_H
#define SUPPRIMERPERSONNE_H

#include <QtGui/QDialog>
#include "ui_supprimerpersonne.h"
#include "Date.h"
#include "Annuaire.h"

class SupprimerPersonne : public QDialog
{
    Q_OBJECT

public:
    SupprimerPersonne(QWidget *parent = 0);
    ~SupprimerPersonne();

    QString reqNom();
    QString reqPrenom();
    util::Date reqDate();
private slots:
	void validerFormulaire();

private:
    Ui::SupprimerPersonneClass ui;

    QString m_nom;
    QString m_prenom;
    util::Date m_dateNaissance;
};

#endif // SUPPRIMERPERSONNE_H
