/**
 * \file main.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-04-12 
 */

#include "Annuaire.h"
#include "Joueur.h"
#include "Entraineur.h"
#include "iostream"
#include <string>
#include <vector>
#include "PersonneException.h"

using namespace std;
using namespace util;
using namespace tp;

int main(){
	Annuaire yolo;
	yolo.asgNomClub("tabarnak");

	string nomJoueur = "Levasseur";
	string prenomJoueur = "Francois";
	string numJoueur = "450 888-0319";
	string posJoueur = "gardien";
	int jourJoueur = 28;
	int moisJoueur = 2;
	int anneeJoueur = 2001;

	Joueur instanceJoueur (nomJoueur, prenomJoueur, Date(jourJoueur, moisJoueur, anneeJoueur),
				numJoueur, posJoueur);

	string nomCoach = "Levosseur";
	string prenomCoach = "Francois";
	string numCoach = "450 888-0319";
	string ramqCoach = "LEVF 9502 2812";
	int jourCoach = 28;
	int moisCoach = 2;
	int anneeCoach = 1995;
	char sexeCoach = 'M';

	Entraineur coach (nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach),
				numCoach, ramqCoach, sexeCoach);

	yolo.ajouterPersonne(instanceJoueur);
	yolo.ajouterPersonne(coach);

	vector<Personne*> vecteurAsti = yolo.reqVecteur() ;

	for (size_t i = 0; i < vecteurAsti.size() ; i++){
		cout << vecteurAsti[i] -> reqPersonneFormate() << endl;
	}

	try{
		yolo.ajouterPersonne(coach);
	}
	catch (util::PersonneDejaPresenteException &e){
		cout << e.what() << endl << endl;
	}

	try{
	yolo.supprimerPersonne(nomJoueur, prenomCoach, Date(jourCoach, moisCoach, anneeCoach));
	}
	catch (util::PersonneAbsenteException &e)
	{
		cout << e.what() << endl << endl;
	}

	yolo.supprimerPersonne(nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach));

	vecteurAsti = yolo.reqVecteur() ;

	for (size_t i = 0; i < vecteurAsti.size() ; i++){
			cout << vecteurAsti[i] -> reqPersonneFormate() << endl;
		}

	return 0;
}


