#include "ajouterentraineur.h"
#include "Date.h"
#include "validationFormat.h"
#include "QMessageBox"
#include <string>

AjouterEntraineur::AjouterEntraineur(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.BoutonOk,SIGNAL(clicked()),this,SLOT(validerFormulaire()));
}

AjouterEntraineur::~AjouterEntraineur()
{

}

QString AjouterEntraineur::reqNom(){
	return ui.lineEdit_nom -> text();
}

QString AjouterEntraineur::reqPrenom(){
	return ui.lineEdit_prenom -> text();
}

util::Date AjouterEntraineur::reqDate(){
	int jour = ui.spinBox_jour -> value();
	int mois = ui.spinBox_mois -> value();
	int an = ui.spinBox_an -> value();
	return util::Date(jour, mois, an);
}

QString AjouterEntraineur::reqNum(){
	return ui.lineEdit_tel -> text();
}

QString AjouterEntraineur::reqRAMQ(){
	return ui.lineEdit_ramq -> text();
}

QString AjouterEntraineur::reqSexe(){

	return ui.comboBoxSex -> currentText();
}

void AjouterEntraineur::validerFormulaire(){
	char sexe = QString(reqSexe()).at(0).toAscii();
	util::Date ajd;
	float age = (ajd - reqDate())/(365.0);
	if (not util::validerFormatNom(reqNom().toStdString()) or
			not util::validerFormatNom(reqPrenom().toStdString()) or
					not util::validerTelephone(reqNum().toStdString()) or
					not (age >= 18) or
					not util::validerNumRAMQ(reqRAMQ().toStdString(),
							reqNom().toStdString(),
							reqPrenom().toStdString(),
							(int)reqDate().reqJour(),
							(int)reqDate().reqMois(),
							(int)reqDate().reqAnnee(),
							sexe))
	{
		QString message("Le nom, le prenom, l'age, le numéro de RAMQ"
				" ou le numéro de téléphone n'ont pas un format valide");
		QMessageBox::information(this, "Erreur!", message);

	}
	else
	{
		accept();
	}

}
