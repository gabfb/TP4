/**
 * \file PersonneTesteur.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-27 
 */

#include "Personne.h"
#include "Date.h"
#include <gtest/gtest.h>
#include <string>

using namespace tp;
using namespace std;
using namespace util;

class PersonneImpl : public Personne {
public:

	PersonneImpl(const std::string& p_nom,
			 const std::string& p_prenom,
			 const util::Date& p_dateNaissance,
			 const std::string& p_telephone)

: Personne(p_nom,
		   p_prenom,
		   p_dateNaissance,
		   p_telephone){}

	virtual Personne* clone() const{
		return new PersonneImpl(*this);  // Appel du constructeur copie
	}

};

class PersonneTest: public ::testing::Test{

public:
	string nomPersonne;
	string prenomPersonne;
	string numPersonne;
	string ramqPersonne;
	int jourPersonne;
	int moisPersonne;
	int anneePersonne;
	char sexePersonne;

	PersonneImpl* dude;

	virtual void SetUp(){
		nomPersonne = "Levasseur";
		prenomPersonne = "Francois";
		numPersonne = "450 888-0319";
		jourPersonne = 28;
		moisPersonne = 2;
		anneePersonne = 1995;

		dude = new PersonneImpl(nomPersonne, prenomPersonne, Date(jourPersonne, moisPersonne, anneePersonne),
				numPersonne);
	}
	virtual void TearDown(){
			delete dude;
		}

};

/**
 * \brief Testeur du constructeur de Personne
 *
 */
TEST(Personne, constructeur){

	string nomPersonne = "Levasseur";
	string prenomPersonne = "Francois";
	string numPersonne = "450 888-0319";
	string num2Personne = "450 774-3238";
	int jourPersonne = 28;
	int moisPersonne = 2;
	int anneePersonne = 1995;

	PersonneImpl dude (nomPersonne, prenomPersonne, Date(jourPersonne, moisPersonne, anneePersonne),
				numPersonne);

	ASSERT_EQ(nomPersonne, dude.reqNom());
	ASSERT_EQ(prenomPersonne, dude.reqPrenom());
	ASSERT_EQ(numPersonne, dude.reqTelephone());
	ASSERT_EQ(Date(jourPersonne, moisPersonne, anneePersonne), dude.reqDateNaissance());

}

/**
 * \brief Testeur du constructeur avec des paramètres invalides pour vérifier les exceptions
 *
 */
TEST(Personne, constructeur_paramsInvalides){

	string nomPersonne = "Levasseur3";
	string prenomPersonne = "Fran cois";
	string numPersonne = "450 888 0319";

	ASSERT_THROW(PersonneImpl dude (nomPersonne, "Francois", Date(28, 2, 1995),
			"450 888-0319"), PreconditionException);

	ASSERT_THROW(PersonneImpl dude ("Levasseur", prenomPersonne, Date(28, 2, 1995),
				"450 888-0319"), PreconditionException);

	ASSERT_THROW(PersonneImpl dude ("Levasseur", "Francois", Date(28, 2, 1995),
				numPersonne), PreconditionException);
}

/**
 * \brief Testeur de l'accesseur reqNom
 *
 */
TEST_F(PersonneTest, reqNom){

	ASSERT_EQ(nomPersonne, dude -> reqNom());
}

/**
 * \brief Testeur de l'accesseur reqPrenom
 *
 */
TEST_F(PersonneTest, reqPrenom){

	ASSERT_EQ(prenomPersonne, dude -> reqPrenom());
}

/**
 * \brief Testeur de l'accesseur reqTelephone
 *
 */
TEST_F(PersonneTest, reqTelephone){

	ASSERT_EQ(numPersonne, dude -> reqTelephone());
}

/**
 * \brief Testeur de l'accesseur reqDateNaissance
 *
 */
TEST_F(PersonneTest, reqDateNaissance){

	ASSERT_EQ(Date(jourPersonne, moisPersonne, anneePersonne), dude -> reqDateNaissance());
}

/**
 * \brief Testeur du mutateur asgTelephone
 *
 */
TEST_F(PersonneTest, asgTelephone){

	string nouveauNum = "450 774-3238";
	dude -> asgTelephone(nouveauNum);
	ASSERT_EQ(nouveauNum, dude -> reqTelephone());
}

/**
 * \brief Testeur du mutateur asgTelephone avec des paramètres invalides pour vérifier les exceptions
 *
 */
TEST(Personne, asgTelephone_paramsInvalides){

	string numPersonne = "450 888 0319";

	PersonneImpl dude ("Levasseur", "Francois", Date(28, 2, 1995), "450 888-0319");

	ASSERT_THROW(dude.asgTelephone(numPersonne), PreconditionException);
}

/**
 * \brief Testeur de l'opérateur ==
 *
 */
TEST_F(PersonneTest, Equal){

	PersonneImpl* dude2 = new PersonneImpl(*dude); //on fait un clone

	ASSERT_EQ(*dude == *dude2, true);

	delete dude2;
}

/**
 * \brief Testeur de la méthode reqPersonneFormate
 *
 */
TEST_F(PersonneTest, Formate){

	std::ostringstream os;
	os << "Nom               : " << nomPersonne << "\n" <<
		  "Prenom            : " << prenomPersonne << "\n" <<
		  "Date de naissance : " << Date(jourPersonne, moisPersonne, anneePersonne).reqDateFormatee() << "\n" <<
		  "Telephone         : " << numPersonne;

	ASSERT_EQ(os.str(), dude -> reqPersonneFormate());

}
