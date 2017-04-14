#include "ajouterpersonne.h"
#include "QMessageBox"

AjouterPersonne::AjouterPersonne(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButtonAjouterEntraineur,SIGNAL(clicked()),this,SLOT(ajouterEntraineurfct()));
	QObject::connect(ui.pushButtonAjouterJoueur,SIGNAL(clicked()),this,SLOT(ajouterJoueurfct()));
}

AjouterPersonne::~AjouterPersonne()
{

}

QString AjouterPersonne::reqType() const
{
 return m_type;
}

void AjouterPersonne::ajouterJoueurfct(){
	m_type = "joueur";
	validerFormulaire();
}

void AjouterPersonne::ajouterEntraineurfct(){
	m_type = "entraineur";
	validerFormulaire();
}

void AjouterPersonne::validerFormulaire()
{
   accept();
}
