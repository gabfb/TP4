/**
 * \file Joueur.h
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-28 
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

#include "Personne.h"
#include <string>

namespace tp {

/**
 * \class Joueur
 * \brief Permet de manipuler des objets de type Joueur
 * \brief Dérive de la classe abstraite personne
 */
class Joueur: public Personne {

public:
	Joueur(const std::string& p_nom,
			const std::string& p_prenom,
			const util::Date& p_dateNaissance,
			const std::string& p_telephone,
			const std::string& p_position);

	const std::string& reqPosition() const;
	virtual std::string reqPersonneFormate() const;
	virtual Personne* clone() const;

private:

	virtual void verifieInvariant() const;

	std::string m_position;
};

} /* namespace tp */

#endif /* JOUEUR_H_ */
