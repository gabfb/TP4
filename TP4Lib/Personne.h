/**
 * \file Personne.h
 * \brief Déclaration de la classe personne
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-02-17 
 */


#ifndef PERSONNE_H_
#define PERSONNE_H_
#include <string>
#include "Date.h"
#include "ContratException.h"

namespace tp
{

/**
 * \class Personne
 * \brief Classe abstraite de laquelle on dérive pour créer des types de personnes
 */
class Personne {
public:

	Personne(const std::string& p_nom,
				 const std::string& p_prenom,
				 const util::Date& p_dateNaissance,
				 const std::string& p_telephone);
	virtual ~Personne();
	util::Date reqDateNaissance() const;
	const std::string& reqNom() const;
	const std::string& reqPrenom() const;
	const std::string& reqTelephone() const;
	void asgTelephone(const std::string& telephone);
	virtual std::string reqPersonneFormate() const;
	bool operator== (const Personne& unePersonne) const;
	virtual Personne* clone() const =0;

protected:

	std::string m_nom;
	std::string m_prenom;
	util::Date m_dateNaissance;
	std::string m_telephone;

private:

	virtual void verifieInvariant() const;

};
} //namespace tp
#endif /* PERSONNE_H_ */
