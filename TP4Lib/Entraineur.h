/**
 * \file Entraineur.h
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-27 
 */

#ifndef ENTRAINEUR_H_
#define ENTRAINEUR_H_

#include "Personne.h"
#include <string>

namespace tp {

/**
 * \class Entraineur
 * \brief Permet de manipuler des objets de type Entraineur
 * \brief Dérive de la classe abstraite personne
 */
class Entraineur: public Personne {
public:
	Entraineur(const std::string& p_nom,
			const std::string& p_prenom,
			const util::Date& p_dateNaissance,
			const std::string& p_telephone,
			const std::string& p_numRAMQ,
			char p_sexe);
	const std::string& reqNumRamq() const;
	virtual Personne* clone() const;
	virtual std::string reqPersonneFormate() const;

private:
	virtual void verifieInvariant() const;

	std::string m_numRAMQ;
	char m_sexe;
};

} /* namespace tp */

#endif /* ENTRAINEUR_H_ */
