/**
 * \file EntraineurTesteur.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-31 
 */

#include "Entraineur.h"
#include "Date.h"
#include <gtest/gtest.h>
#include <string>

using namespace tp;
using namespace std;
using namespace util;

class EntraineurTest: public ::testing::Test{

public:
	string nomCoach;
	string prenomCoach;
	string numCoach;
	string ramqCoach;
	int jourCoach;
	int moisCoach;
	int anneeCoach;
	char sexeCoach;

	Entraineur* coach;

	virtual void SetUp(){
		nomCoach = "Levasseur";
		prenomCoach = "Francois";
		numCoach = "450 888-0319";
		ramqCoach = "LEVF 9502 2812";
		jourCoach = 28;
		moisCoach = 2;
		anneeCoach = 1995;
		sexeCoach = 'M';

		coach = new Entraineur( nomCoach, prenomCoach, Date(jourCoach, moisCoach, anneeCoach),
				numCoach, ramqCoach, sexeCoach );
	}

	virtual void TearDown(){
			delete coach;
		}

};

/**
 * \brief Testeur du constructeur de Entraineur
 *
 */
TEST(Entraineur, constructeur){
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

	ASSERT_EQ(nomCoach, coach.reqNom());
	ASSERT_EQ(prenomCoach, coach.reqPrenom());
	ASSERT_EQ(numCoach, coach.reqTelephone());
	ASSERT_EQ(ramqCoach, coach.reqNumRamq());
	ASSERT_EQ(Date(jourCoach, moisCoach, anneeCoach), coach.reqDateNaissance());
}

/**
 * \brief Testeur du constructeur avec des paramètres invalides pour vérifier les exceptions
 *
 */
TEST(Entraineur, constructeur_paramsInvalides){

	string ramqCoach = "LEVF 9603 2812";
	char sexeCoach = 'F';


	ASSERT_THROW(Entraineur coach("Levasseur", "Francois", Date(28,2,1995),
			"450 888-0319", ramqCoach, sexeCoach), PreconditionException);

}

/**
 * \brief Testeur de l'accesseur reqNumRamq
 *
 */
TEST_F(EntraineurTest, ramq){

	ASSERT_EQ(ramqCoach, coach -> reqNumRamq());
}

/**
 * \brief Testeur de la méthode clone
 *
 */
TEST_F(EntraineurTest, clone){

	Personne* clone = coach -> clone();

	ASSERT_EQ(*clone == *coach, true);

	delete clone;
}

/**
 * \brief Testeur de la méthode reqPersonneFormate
 *
 */
TEST_F(EntraineurTest, Formate){

	std::ostringstream os;
	os << "Nom               : " << nomCoach << "\n" <<
		  "Prenom            : " << prenomCoach << "\n" <<
		  "Date de naissance : " << Date(jourCoach, moisCoach, anneeCoach).reqDateFormatee() << "\n" <<
		  "Telephone         : " << numCoach << "\n" <<
		  "Numero de RAMQ    : " << ramqCoach << "\n" <<
		  "------------------  ";

	ASSERT_EQ(os.str(), coach -> reqPersonneFormate());
}

