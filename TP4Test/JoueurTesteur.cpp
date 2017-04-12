/**
 * \file JoueurTesteur.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-31 
 */

#include "Joueur.h"
#include "Date.h"
#include <sstream>
#include <gtest/gtest.h>
#include <string>

using namespace tp;
using namespace std;
using namespace util;

class JoueurTest: public ::testing::Test{

public:
	string nomJoueur;
	string prenomJoueur;
	string numJoueur;
	string posJoueur;
	int jourJoueur;
	int moisJoueur;
	int anneeJoueur;

	Joueur* instanceJoueur;

	virtual void SetUp(){
		nomJoueur = "Levasseur";
		prenomJoueur = "Francois";
		numJoueur = "450 888-0319";
		posJoueur = "gardien";
		jourJoueur = 28;
		moisJoueur = 2;
		anneeJoueur = 2001;

		instanceJoueur = new Joueur(nomJoueur, prenomJoueur, Date(jourJoueur, moisJoueur, anneeJoueur),
					numJoueur, posJoueur);
	}
	virtual void TearDown(){
			delete instanceJoueur;
		}

};

/**
 * \brief Testeur du constructeur de Joueur
 *
 */
TEST(Joueur, constructeur){
	string nomJoueur = "Levasseur";
	string prenomJoueur = "Francois";
	string numJoueur = "450 888-0319";
	string posJoueur = "gardien";
	int jourJoueur = 28;
	int moisJoueur = 2;
	int anneeJoueur = 2001;

	Joueur instanceJoueur (nomJoueur, prenomJoueur, Date(jourJoueur, moisJoueur, anneeJoueur),
				numJoueur, posJoueur);

	ASSERT_EQ(nomJoueur, instanceJoueur.reqNom());
	ASSERT_EQ(prenomJoueur, instanceJoueur.reqPrenom());
	ASSERT_EQ(numJoueur, instanceJoueur.reqTelephone());
	ASSERT_EQ(posJoueur, instanceJoueur.reqPosition());
	ASSERT_EQ(Date(jourJoueur, moisJoueur, anneeJoueur), instanceJoueur.reqDateNaissance());
}

/**
 * \brief Testeur du constructeur avec des paramètres invalides pour vérifier les exceptions
 *
 */
TEST(Joueur, constructeur_paramsInvalides){

	string posJoueur = "keeper"; // param invalide non testé dans la classe personne

	ASSERT_THROW(Joueur instanceJoueur("Levasseur", "Francois", Date(28,2,1995),
			"450 888-0319", posJoueur), PreconditionException);

}

/**
 * \brief Testeur de l'accesseur reqPosition
 *
 */
TEST_F(JoueurTest, position){

	ASSERT_EQ(posJoueur, instanceJoueur -> reqPosition());
}

/**
 * \brief Testeur de la méthode clone
 *
 */
TEST_F(JoueurTest, clone){

	Personne* clone = instanceJoueur -> clone();
	ASSERT_EQ(*clone == *instanceJoueur, true);

	delete clone;
}

/**
 * \brief Testeur de la méthode reqPersonneFormate
 *
 */
TEST_F(JoueurTest, Formate){

	std::ostringstream os;
	os << "Nom               : " << nomJoueur << "\n" <<
		  "Prenom            : " << prenomJoueur << "\n" <<
		  "Date de naissance : " << Date(jourJoueur, moisJoueur, anneeJoueur).reqDateFormatee() << "\n" <<
		  "Telephone         : " << numJoueur << "\n" <<
		  "Position          : " << posJoueur << "\n" <<
		  "------------------  ";

	ASSERT_EQ(os.str(), instanceJoueur -> reqPersonneFormate());
}
