#include "supprimerpersonne.h"
#include "Date.h"
#include "validationFormat.h"
#include "QMessageBox"
#include "Annuaire.h"

SupprimerPersonne::SupprimerPersonne(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.BoutonOk,SIGNAL(clicked()),this,SLOT(validerFormulaire()));
}

SupprimerPersonne::~SupprimerPersonne()
{

}

QString SupprimerPersonne::reqNom(){
	m_nom = ui.lineEdit_nom -> text();
	return m_nom;
}

QString SupprimerPersonne::reqPrenom(){
	m_prenom = ui.lineEdit_prenom -> text();
	return m_prenom;
}

util::Date SupprimerPersonne::reqDate(){
	int jour = ui.spinBox_jour -> value();
	int mois = ui.spinBox_mois -> value();
	int an = ui.spinBox_an -> value();
	m_dateNaissance = util::Date(jour, mois, an);
	return m_dateNaissance;
}

void SupprimerPersonne::validerFormulaire(){
	if (not util::validerFormatNom(reqNom().toStdString()) or
			not util::validerFormatNom(reqPrenom().toStdString()))
	{
		QString message("Le nom ou le prenom n'ont pas un format valide");
		QMessageBox::information(this, "Erreur!", message);
	}
	else
	{
		accept();
	}

}
