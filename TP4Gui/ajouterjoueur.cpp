#include "ajouterjoueur.h"
#include "Date.h"
#include "validationFormat.h"
#include "QMessageBox"

AjouterJoueur::AjouterJoueur(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.BoutonOk,SIGNAL(clicked()),this,SLOT(validerFormulaire()));
}

AjouterJoueur::~AjouterJoueur()
{

}

QString AjouterJoueur::reqNom(){
	return ui.lineEdit_nom -> text();
}

QString AjouterJoueur::reqPrenom(){
	return ui.lineEdit_prenom -> text();
}

util::Date AjouterJoueur::reqDate(){
	int jour = ui.spinBox_jour -> value();
	int mois = ui.spinBox_mois -> value();
	int an = ui.spinBox_an -> value();
	return util::Date(jour, mois, an);
}

QString AjouterJoueur::reqNum(){
	return ui.lineEdit_tel -> text();
}

QString AjouterJoueur::reqPosition(){
	return ui.comboBoxPosition -> currentText();
}

void AjouterJoueur::validerFormulaire(){
	util::Date ajd;
	float age = (ajd - reqDate())/(365.0);
	if (not util::validerFormatNom(reqNom().toStdString()) or
			not util::validerFormatNom(reqPrenom().toStdString()) or
					not util::validerTelephone(reqNum().toStdString()) or
					not (age >= 15 and age <= 17))
	{
		QString message("Le nom, le prenom, l'age"
				" ou le numéro de téléphone n'ont pas un format valide");
		QMessageBox::information(this, "Erreur!", message);
	}
	else
	{
		accept();
	}

}
