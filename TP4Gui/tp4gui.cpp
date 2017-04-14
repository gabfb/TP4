#include "tp4gui.h"
#include "ajouterpersonne.h"
#include "ajouterentraineur.h"
#include "ajouterjoueur.h"
#include "supprimerpersonne.h"
#include "PersonneException.h"
#include <vector>
#include "Personne.h"
#include "QMessageBox"
#include "Joueur.h"
#include "Entraineur.h"
#include <iostream>

using namespace std;


TP4Gui::TP4Gui(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	m_annuaire.asgNomClub("Les Gagnants");
	ui.AnnuaireTexte->setText(m_annuaire.reqAnnuaireFormate().c_str());
	QObject::connect(ui.AjouterPersonne,SIGNAL(clicked()),this,SLOT(AjouterPersonnefct()));
	QObject::connect(ui.SupprimerPersonne,SIGNAL(clicked()),this,SLOT(SupprimerPersonnefct()));
}

TP4Gui::~TP4Gui()
{

}

void TP4Gui::AjouterPersonnefct()
{
  AjouterPersonne instanceFenetre(this);
  if(instanceFenetre.exec())
  {
	  if(instanceFenetre.reqType().toStdString() == "entraineur")
	  {
		  AjouterEntraineurfct();
	  }
	  else
	  {
		  AjouterJoueurfct();
	  }

  }

}

void TP4Gui::AjouterEntraineurfct()
{
	  AjouterEntraineur instanceFenetre(this);
	  if(instanceFenetre.exec())
	  {
		  string nom = instanceFenetre.reqNom().toStdString();
		  string prenom = instanceFenetre.reqPrenom().toStdString();
		  util::Date dateNaissance = instanceFenetre.reqDate();
		  string num = instanceFenetre.reqNum().toStdString();
		  string ramq = instanceFenetre.reqRAMQ().toStdString();
		  char sexe = QString(instanceFenetre.reqSexe()).at(0).toAscii();
		  try{
			  tp::Entraineur instanceEntraineur(nom, prenom, dateNaissance, num, ramq, sexe);
			  m_annuaire.ajouterPersonne(instanceEntraineur);
		  }
		  catch(PreconditionException e)
		  {
			  QString message("Un ou plusieurs paramètres sont invalides");
			  QMessageBox::information(this, "Erreur!", message);
		  }
		  catch(util::PersonneDejaPresenteException e)
		  {
			  QString message("La personne que vous souhaiter ajouter est déjà présente dans l'annuaire");
			  QMessageBox::information(this, "Erreur!", message);
		  }
	  ui.AnnuaireTexte->setText(m_annuaire.reqAnnuaireFormate().c_str());
	  }

}

void TP4Gui::AjouterJoueurfct()
{
	  AjouterJoueur instanceFenetre(this);
	  if(instanceFenetre.exec())
	  {
		  string nom = instanceFenetre.reqNom().toStdString();
		  string prenom = instanceFenetre.reqPrenom().toStdString();
		  util::Date dateNaissance = instanceFenetre.reqDate();
		  string num = instanceFenetre.reqNum().toStdString();
		  string position = instanceFenetre.reqPosition().toStdString();
		  if (position == "defensseur"){
			  position = "défensseur"; //sinon le paramètre est considéré comme invalide
		  }
		  try{
			  tp::Joueur instanceJoueur(nom, prenom, dateNaissance, num, position);
			  m_annuaire.ajouterPersonne(instanceJoueur);
		  }
		  catch(PreconditionException e)
		  {
			  QString message("Un ou plusieurs paramètres sont invalides");
			  QMessageBox::information(this, "Erreur!", message);
		  }
		  catch(util::PersonneDejaPresenteException e)
		  {
			  QString message("La personne que vous souhaiter ajouter est déjà présente dans l'annuaire");
			  QMessageBox::information(this, "Erreur!", message);
		  }
	  }
	  ui.AnnuaireTexte->setText(m_annuaire.reqAnnuaireFormate().c_str());

}

void TP4Gui::SupprimerPersonnefct()
{
	  SupprimerPersonne instanceFenetre(this);
	  if(instanceFenetre.exec())
	  {
		  string nom = instanceFenetre.reqNom().toStdString();
		  string prenom = instanceFenetre.reqPrenom().toStdString();
		  util::Date dateNaissance = instanceFenetre.reqDate();
		  try{
			  m_annuaire.supprimerPersonne(nom, prenom, dateNaissance);
		  }
		  catch(util::PersonneAbsenteException e)
		  {
			  QString message("La personne que vous souhaiter supprimer est absente de l'annuaire");
			  QMessageBox::information(this, "Erreur!", message);
		  }

	  }
	  ui.AnnuaireTexte->setText(m_annuaire.reqAnnuaireFormate().c_str());
}
