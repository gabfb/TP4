/**
 * \file AnnuaireTesteur.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-31 
 */

#include "Annuaire.h"
#include "Joueur.h"
#include "Entraineur.h"
#include "Date.h"
#include <sstream>
#include <gtest/gtest.h>
#include <string>
#include "PersonneException.h"

using namespace tp;
using namespace std;
using namespace util;

class AnnuaireTest: public ::testing::Test{

public:
	string nomClub;

	Annuaire* carnet;

	virtual void SetUp(){

		nomClub = "Les ptits maudits";

		carnet = new Annuaire( nomClub );
	}

	virtual void TearDown(){
			delete carnet;
		}
};

/**
 * \brief Testeur du constructeur par défaut
 *
 */
TEST(Annuaire, constructeurParDefaut){

	Annuaire carnet;

	ASSERT_EQ("", carnet.reqNomClub());
}

/**
 * \brief Testeur du constructeur avec param
 *
 */
TEST(Annuaire, constructeur){
	string nomClub = "Les ptits maudits";

	Annuaire carnet(nomClub);

	ASSERT_EQ(nomClub, carnet.reqNomClub());
}

/**
 * \brief Testeur du constructeur avec des paramètres invalides pour vérifier les exceptions
 *
 */
TEST(Annuaire, constructeur_paramsInvalides){
	string nomClub = "";

	ASSERT_THROW(Annuaire carnet(nomClub), PreconditionException);
}

/**
 * \brief Testeur de la méthode asgNomClub
 *
 */
TEST_F(AnnuaireTest, asgNomClub){
	nomClub = "Les ptits vlimeux";
	carnet -> asgNomClub(nomClub);
	ASSERT_EQ(nomClub, carnet -> reqNomClub());
}

/**
 * \brief Testeur de la méthode asgNomClub avec param invalides
 *
 */
TEST_F(AnnuaireTest, asgNomClub_paramsInvalides){
	ASSERT_THROW(carnet -> asgNomClub(""), PreconditionException);
}

/**
 * \brief Testeur de la méthode AjouterPersonne lorsque la personne est absente et présente
 *
 */
TEST_F(AnnuaireTest, Ajouter){
	string nomCoach = "Levasseur";
	string prenomCoach = "Francois";
	string numCoach = "450 888-0319";
	string ramqCoach = "LEVF 9502 2812";
	int jourCoach = 28;
	int moisCoach = 2;
	int anneeCoach = 1995;
	char sexeCoach = 'M';

	Entraineur coach (nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach),
				numCoach, ramqCoach, sexeCoach);

	vector<Personne*> membres1 = carnet -> reqVecteur();

	carnet -> ajouterPersonne(coach);

	vector<Personne*> membres2 = carnet -> reqVecteur();

	ASSERT_EQ(membres1.size() + 1, membres2.size());
	ASSERT_THROW(carnet -> ajouterPersonne(coach), util::PersonneDejaPresenteException);
}

/**
 * \brief Testeur de la méthode AjouterPersonne lorsque la personne est absente et présente
 *
 */
TEST_F(AnnuaireTest, Supprimer){
	string nomCoach = "Levasseur";
	string prenomCoach = "Francois";
	string numCoach = "450 888-0319";
	string ramqCoach = "LEVF 9502 2812";
	int jourCoach = 28;
	int moisCoach = 2;
	int anneeCoach = 1995;
	char sexeCoach = 'M';

	Entraineur coach (nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach),
				numCoach, ramqCoach, sexeCoach);

	carnet -> ajouterPersonne(coach);

	vector<Personne*> membres1 = carnet -> reqVecteur();

	carnet -> supprimerPersonne(nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach));

	vector<Personne*> membres2 = carnet -> reqVecteur();

	ASSERT_EQ(membres1.size() - 1, membres2.size());
	ASSERT_THROW(carnet -> supprimerPersonne("BOB",
			prenomCoach,
			Date(jourCoach, moisCoach, anneeCoach)), util::PersonneAbsenteException);
}


/**
 * \brief Testeur de la méthode reqAnnuaireeFormate()
 *
 */
TEST_F(AnnuaireTest, Formate){
	string nomCoach = "Levasseur";
	string prenomCoach = "Francois";
	string numCoach = "450 888-0319";
	string ramqCoach = "LEVF 9502 2812";
	int jourCoach = 28;
	int moisCoach = 2;
	int anneeCoach = 1995;
	char sexeCoach = 'M';

	Entraineur coach (nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach),
				numCoach, ramqCoach, sexeCoach);

	string nomJoueur = "Levasseur";
	string prenomJoueur = "Francois";
	string numJoueur = "450 888-0319";
	string posJoueur = "gardien";
	int jourJoueur = 28;
	int moisJoueur = 2;
	int anneeJoueur = 2001;

	Joueur instanceJoueur (nomJoueur, prenomJoueur, Date(jourJoueur, moisJoueur, anneeJoueur),
				numJoueur, posJoueur);

	carnet -> ajouterPersonne(instanceJoueur);
	carnet -> ajouterPersonne(coach);

	std::ostringstream os;

	os << "Club : " << nomClub << "\n------------------\n";

	os << instanceJoueur.reqPersonneFormate() << "\n";
	os << coach.reqPersonneFormate() << "\n";

	ASSERT_EQ(os.str(), carnet -> reqAnnuaireFormate());
}


