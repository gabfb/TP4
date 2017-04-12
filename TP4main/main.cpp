/**
 * \file main.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-27 
 */

#include <iostream>
#include <string>
#include "Date.h"
#include "Entraineur.h"
#include "Joueur.h"
#include "validationFormat.h"
#include "Annuaire.h"

using namespace std;
using namespace util;
using namespace tp;

int main()
{

// variables:

	string nomClub;

	string nomCoach;
	string prenomCoach;
	string numCoach;
	string ramqCoach;
	int jourCoach;
	int moisCoach;
	int anneeCoach;
	char sexeCoach;

	string nomJoueur;
	string prenomJoueur;
	string numJoueur;
	int jourJoueur;
	int moisJoueur;
	int anneeJoueur;
	string posJoueur;

// Création de l'annuaire

	char input[100];

	cout << "Bonjour, commençons par créer l'annuaire" << endl;
	cout << "Veuillez d'abord entrer le nom de l'équipe" << endl;
	cin.getline(input,100);
	cin.clear();
	nomClub = input;
	while ( nomClub.empty() )
	{
		cout << "vous devez entrer un nom non nul" << endl;
		cin.getline(input,sizeof(input));
		cin.clear();
		nomClub = input;
	}

	Annuaire Carnet(nomClub);

	cout << "L'annuaire a été créé avec succès" << endl;

	cout << "Ajoutons maintenant le coach à l'annuaire \n" << endl;

// Création du coach

	cout << "Veuillez maintenant entrer le nom de famille de l'entraineur" << endl;
	cin >> nomCoach;
	while (not validerFormatNom(nomCoach) )
	{
		cout << "vous devez entrer un nom valide" << endl;
		cin >> nomCoach;
	}

	cout << "Veuillez maintenant entrer le prénom de l'entraineur" << endl;
	cin >> prenomCoach;
	while (not validerFormatNom(prenomCoach)  )
	{
		cout << "vous devez entrer un prenom valide" << endl;
		cin >> prenomCoach;
	}

	cout << "Veuillez maintenant entrer le numéro de téléphone de l'entraineur" << endl;
	cin.ignore(100, '\n');
	cin.getline(input,sizeof(input));
	cin.clear();
	numCoach = input;
	while (not validerTelephone(numCoach)  )
	{
		cout << "vous devez entrer un numéro valide" << endl;
		cin.getline(input,sizeof(input));
		cin.clear();
		numCoach = input;
	}

	cout << "Veuillez maintenant entrer un à la suite de l'autre le jour,"
			" le mois et l'année de naissance de l'entraineur" << endl;
	cin >> jourCoach;
	cin >> moisCoach;
	cin >> anneeCoach;

	Date ajd;

	bool dateValide = Date::validerDate(jourCoach, moisCoach, anneeCoach);
	bool ageValide = false;

	if (dateValide)
	{
		Date dateCoach(jourCoach, moisCoach, anneeCoach);
		float ageCoach = (ajd - dateCoach)/(365.0);
		if (ageCoach >= 18)
		{
			ageValide = true;
		}
	}

	while(dateValide == false or ageValide == false)
	{
		cout << "vous devez entrer une date valide correspondant à un age "
				"suppérieur à 18 ans" << endl;
		cout << "Entrez de nouveau un à la suite de l'autre la date,"
					" le mois et l'année de naissance de l'entraineur" << endl;
		cin >> jourCoach;
		cin >> moisCoach;
		cin >> anneeCoach;
		dateValide = Date::validerDate(jourCoach, moisCoach, anneeCoach);
		ageValide = false;
		if (dateValide)
				{
					Date dateCoach(jourCoach, moisCoach, anneeCoach);
					float ageCoach = (ajd - dateCoach)/(365.0);
					if (ageCoach >= 18)
					{
						ageValide = true;
					}
				}
	}

	cout << "Veuillez maintenant entrer le sexe du coach soit f ou m" << endl;
	cin >> sexeCoach;
	sexeCoach = toupper(sexeCoach);
	while (sexeCoach != 'F' and sexeCoach != 'M')
	{
		cout << "Veuillez entrer un sexe valide soit f ou m" << endl;
		cin >> sexeCoach;
		sexeCoach = toupper(sexeCoach);
	}

	cout << "Veuillez maintenant entrer le numéro de RAMQ de l'entraineur" << endl;
	cin.ignore(100, '\n');
	cin.getline(input,sizeof(input));
	cin.clear();
	ramqCoach = input;
	while (not validerNumRAMQ(ramqCoach, nomCoach, prenomCoach, jourCoach, moisCoach, anneeCoach - 1900, sexeCoach) )
	{
		cout << "vous devez entrer un numéro de RAMQ valide" << endl;
		cin.getline(input,sizeof(input));
		cin.clear();
		ramqCoach = input;
	}

	Entraineur coach (nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach),
			numCoach, ramqCoach, sexeCoach);

	Carnet.ajouterPersonne(coach);

	cout << "L'entraineur a été ajouté à l'annuaire avec succès, continuons avec le joueur \n" << endl;


// Création du Joueur

	cout << "Veuillez maintenant entrer le nom de famille du joueur" << endl;
		cin >> nomJoueur;
		while (not validerFormatNom(nomJoueur) )
		{
			cout << "vous devez entrer un nom valide" << endl;
			cin >> nomJoueur;
		}

		cout << "Veuillez maintenant entrer le prénom du joueur" << endl;
		cin >> prenomJoueur;
		while (not validerFormatNom(prenomJoueur)  )
		{
			cout << "vous devez entrer un prenom valide" << endl;
			cin >> prenomJoueur;
		}

		cout << "Veuillez maintenant entrer le numéro de téléphone du joueur" << endl;
		cin.ignore(100, '\n');
		cin.getline(input,sizeof(input));
		cin.clear();
		numJoueur = input;
		while (not validerTelephone(numJoueur)  )
		{
			cout << "vous devez entrer un numéro valide" << endl;
			cin.getline(input,sizeof(input));
			cin.clear();
			numJoueur = input;
		}

		cout << "Veuillez maintenant entrer un à la suite de l'autre la date,"
				" le mois et l'année de naissance du joueur" << endl;
		cin >> jourJoueur;
		cin >> moisJoueur;
		cin >> anneeJoueur;
		dateValide = Date::validerDate(jourJoueur, moisJoueur, anneeJoueur);
		ageValide = false;

		if (dateValide)
		{
			Date dateJoueur(jourJoueur, moisJoueur, anneeJoueur);
			float ageJoueur = (ajd - dateJoueur)/(365.0);
			if (ageJoueur >= 15 and ageJoueur <= 17)
			{
				ageValide = true;
			}
		}

		while(dateValide == false or ageValide == false)
		{
			cout << "vous devez entrer une date valide correspondant à un age "
					"entre 15 et 17 ans" << endl;
			cout << "Entrez de nouveau un à la suite de l'autre la date,"
						" le mois et l'année de naissance du joueur" << endl;
			cin >> jourJoueur;
			cin >> moisJoueur;
			cin >> anneeJoueur;
			dateValide = Date::validerDate(jourJoueur, moisJoueur, anneeJoueur);
			ageValide = false;
			if (dateValide)
					{
						Date dateJoueur(jourJoueur, moisJoueur, anneeJoueur);
						float ageJoueur = (ajd - dateJoueur)/(365.0);
						if (ageJoueur >= 15 and ageJoueur <= 17)
						{
							ageValide = true;
						}
					}
		}


		cout << "Veuillez maintenant entrer la position du joueur soit"
				" gardien,"
				" ailier,"
				" centre ou"
				" défensseur" << endl;
			cin >> posJoueur;
			while (posJoueur != "ailier"
					and posJoueur != "centre"
					and posJoueur != "défensseur"
					and posJoueur != "gardien")
			{
				cout << "Veuillez entrer une position valide soit gardien, ailier, centre ou défensseur" << endl;
				cin >> posJoueur;
			}

	Joueur joueur (nomJoueur, prenomJoueur, Date(jourJoueur, moisJoueur, anneeJoueur),
			numJoueur, posJoueur);

	Carnet.ajouterPersonne(joueur);

	cout << "Le joueur a été ajouté à l'annuaire avec succès" << endl;

	cout << "L'annuaire est le suivant: \n" << endl;

	cout << Carnet.reqAnnuaireFormate() << endl;

	cout << "Voilà, c'est la fin." << endl;

	return 0;

}








