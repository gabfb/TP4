/**
 * \file Joueur.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-28 
 */

#include "Joueur.h"
#include "validationFormat.h"
#include <string>
#include <sstream>

namespace tp {

/**
 * \brief Constructeur de la classe Joueur
 * \param p_nom : string représentant le nom de famille
 * \param p_prenom : string représentant le prénom
 * \param p_dateNaissance : instance de la classe Date, doit correspondre à un âge entre 15 et 17 ans
 * \param p_telephone : string représentant le numéro de tel
 * \param p_position : string représentant la position, doit être soit gardien, défensseur, centre ou ailier
 * \return Instance de la classe Joueur
 *
 */
Joueur::Joueur(const std::string& p_nom, const std::string& p_prenom,
		const util::Date& p_dateNaissance, const std::string& p_telephone,
		const std::string& p_position)

	: tp::Personne(p_nom,
				   p_prenom,
				   p_dateNaissance,
				   p_telephone),
		  m_position(p_position)
{
			util::Date ajd;
			float age = (ajd - p_dateNaissance)/(365.0);
			PRECONDITION(age >= 15 and age <= 17);
			PRECONDITION(util::validerFormatNom(p_nom) == true);
			PRECONDITION(util::validerFormatNom(p_prenom) == true);
			PRECONDITION(util::validerTelephone(p_telephone) == true);
			PRECONDITION(m_position == "ailier"
						or m_position == "centre"
						or m_position == "défensseur"
						or m_position == "gardien");
			POSTCONDITION(m_nom == p_nom);
			POSTCONDITION(m_prenom == p_prenom);
			POSTCONDITION(m_dateNaissance == p_dateNaissance);
			POSTCONDITION(m_telephone == p_telephone);
			POSTCONDITION(m_position == p_position);
			INVARIANTS();
}

/**
 * \brief accesseur de l'attribut m_position
 * \return l'attribut m_position
 *
 */
const std::string& Joueur::reqPosition() const {
	return m_position;
}

/**
 * \brief Méthode qui formate l'objet Joueur pour l'affichage
 * \brief surcharge de la méthode virtuelle du même nom de la classe de base Personne
 * \return string formatée pour l'affichage de l'objet Joueur
 *
 */
std::string Joueur::reqPersonneFormate() const{
	std::ostringstream os;
			os << "Nom               : " << m_nom << "\n" <<
				  "Prenom            : " << m_prenom << "\n" <<
				  "Date de naissance : " << m_dateNaissance.reqDateFormatee() << "\n" <<
				  "Telephone         : " << m_telephone << "\n" <<
				  "Position          : " << m_position << "\n" <<
				  "------------------  ";
			return os.str();
}

/**
 * \brief méthode qui clone une instance de la classe Joueur
 * \return un pointeur de la classe de base personne
 *
 */
Personne* Joueur::clone() const {
	return new Joueur(*this);  // Appel du constructeur copie
}


/**
 * \brief méthode ou on définie les invariants de la classe
 * \brief ne retourne rien mais déclanche des exceptions
 * \brief permet de s'assurer qu'une instance est valide en tout temps
 *
 */
void Joueur::verifieInvariant() const {

	INVARIANT(util::validerFormatNom(m_nom) == true);
	INVARIANT(util::validerFormatNom(m_prenom) == true);
	INVARIANT(util::validerTelephone(m_telephone) == true);
	INVARIANT(m_position == "ailier"
							or m_position == "centre"
							or m_position == "défensseur"
							or m_position == "gardien");
	util::Date ajd;
	float age = (ajd - m_dateNaissance)/(365.0);
	INVARIANT(age >= 15 and age <= 17);
}

} /* namespace tp */


