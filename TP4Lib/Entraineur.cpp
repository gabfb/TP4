/**
 * \file Entraineur.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-27 
 */

#include "Entraineur.h"
#include "Personne.h"
#include "ContratException.h"
#include "validationFormat.h"
#include <string>
#include <sstream>

namespace tp {


/**
 * \brief Constructeur de la classe Entraineur
 * \param p_nom : string représentant le nom de famille
 * \param p_prenom : string représentant le prénom
 * \param p_dateNaissance : instance de la classe Date, doit correspondre à un âge > 18 ans
 * \param p_telephone : string représentant le numéro de tel
 * \param p_numRAMQ : string représentant un numéro de RAMQ
 * \return Instance de la classe Entraineur
 *
 */
Entraineur::Entraineur(const std::string& p_nom,
		const std::string& p_prenom, const util::Date& p_dateNaissance,
		const std::string& p_telephone, const std::string& p_numRAMQ,
		char p_sexe)

	: tp::Personne(p_nom,
				   p_prenom,
				   p_dateNaissance,
				   p_telephone),
	  m_numRAMQ(p_numRAMQ),
	  m_sexe(p_sexe)
	{
		util::Date ajd;
		PRECONDITION((ajd - p_dateNaissance)/(365.0) > 18);
		PRECONDITION(util::validerFormatNom(p_nom) == true);
		PRECONDITION(util::validerFormatNom(p_prenom) == true);
		PRECONDITION(util::validerTelephone(p_telephone) == true);
		PRECONDITION(util::validerNumRAMQ(p_numRAMQ,
										  p_nom,
										  p_prenom,
										  p_dateNaissance.reqJour(),
										  p_dateNaissance.reqMois(),
										  p_dateNaissance.reqAnnee(),
										  p_sexe));
		POSTCONDITION(m_nom == p_nom);
		POSTCONDITION(m_prenom == p_prenom);
		POSTCONDITION(m_dateNaissance == p_dateNaissance);
		POSTCONDITION(m_telephone == p_telephone);
		POSTCONDITION(m_numRAMQ == p_numRAMQ);
		INVARIANTS();
	}

/**
 * \brief accesseur de l'attribut m_numRAMQ
 * \return l'attribut m_numRAMQ
 *
 */
const std::string& Entraineur::reqNumRamq() const {
	return m_numRAMQ;
}

/**
 * \brief Méthode qui formate l'objet Entraineur pour l'affichage
 * \brief surcharge de la méthode virtuelle du même nom de la classe de base Personne
 * \return string formatée pour l'affichage de l'objet Entraineur
 *
 */
std::string Entraineur::reqPersonneFormate() const {
	std::ostringstream os;
		os << "Nom               : " << m_nom << "\n" <<
			  "Prenom            : " << m_prenom << "\n" <<
			  "Date de naissance : " << m_dateNaissance.reqDateFormatee() << "\n" <<
			  "Telephone         : " << m_telephone << "\n" <<
			  "Numero de RAMQ    : " << m_numRAMQ << "\n" <<
			  "------------------  ";
		return os.str();
}

/**
 * \brief méthode qui clone une instance de la classe Joueur
 * \return un pointeur de la classe de base personne
 *
 */
Personne* Entraineur::clone() const {
	return new Entraineur(*this);
}


/**
 * \brief méthode ou on définie les invariants de la classe
 * \brief ne retourne rien mais déclanche des exceptions
 * \brief permet de s'assurer qu'une instance est valide en tout temps
 *
 */
void Entraineur::verifieInvariant() const {
	INVARIANT(util::validerFormatNom(m_nom) == true);
	INVARIANT(util::validerFormatNom(m_prenom) == true);
	INVARIANT(util::validerTelephone(m_telephone) == true);
	INVARIANT(util::validerNumRAMQ(m_numRAMQ,
								m_nom,
								m_prenom,
								m_dateNaissance.reqJour(),
								m_dateNaissance.reqMois(),
								m_dateNaissance.reqAnnee(),
								m_sexe) == true);
}

} /* namespace tp */


