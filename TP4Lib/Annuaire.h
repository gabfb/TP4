/**
 * \file Annuaire.h
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-28 
 */

#ifndef ANNUAIRE_H_
#define ANNUAIRE_H_
#include "Personne.h"
#include <vector>
#include <string>

namespace tp {

/**
 * \class Annuaire
 * \brief Permet de manipuler des objets de types annuaire
 * \brief Classe composé de références à la classe Personne
 *
 */
class Annuaire {

public:
	Annuaire(); //constructeur par défaut
	Annuaire(const std::string& p_nomClub);
	const std::string& reqNomClub() const;
	void asgNomClub(const std::string& p_nomClub);
	std::string reqAnnuaireFormate() const;

	virtual ~Annuaire();

	std::vector<Personne*> reqVecteur() const;

	void ajouterPersonne (const Personne& p_personne);
	void supprimerPersonne (const std::string& p_nom,
			const std::string& p_prenom,
			const util::Date& p_dateNaissance);

private:

	Annuaire(const Annuaire&); // Méthode non-implémentée
	Annuaire operator=(const Annuaire&); // Méthode non-implémentée
	bool PersonneEstDejaPresente(const Personne& p_personne) const;
	void verifieInvariant() const;

	std::string m_nomClub;

	std::vector<Personne*> m_vMembres;

};

} /* namespace tp */

#endif /* ANNUAIRE_H_ */
