#include "tp4gui.h"
#include "ajouterpersonne.h"
#include "supprimerpersonne.h"


TP4Gui::TP4Gui(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	m_annuaire.asgNomClub("Les Gagnants");
	QObject::connect(ui.AjouterPersonne,SIGNAL(clicked()),this,SLOT(AjouterPersonne()));
	QObject::connect(ui.SupprimerPersonne,SIGNAL(clicked()),this,SLOT(SupprimerPersonne()));
}

TP4Gui::~TP4Gui()
{

}

void TP4Gui::AjouterPersonne()
{
    AjouterPersonne()
	AjouterPersonne instanceFenetre(this);
    if(instanceFenetre.exec())
    {

    }

}

void TP4Gui::SupprimerPersonne()
{

}
