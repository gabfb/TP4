/**
 * \file Personne.cpp
 * \brief Implantation de la classe personne
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-02-17 
 */

#include "Personne.h"
#include "Date.h"
#include "ContratException.h"
#include "validationFormat.h"
#include <string>
#include <sstream>

using namespace std;
using namespace util;

namespace tp
{

/**
 * \brief Constructeur de la classe personne
 * \param p_nom : string représentant le nom de famille
 * \param p_prenom : string représentant le prénom
 * \param p_dateNaissance : instance de la classe Date
 * \param p_telephone : string représentant le numéro de tel
 * \return Instance de la classe Personne
 *
 */
Personne::Personne(const std::string& p_nom,
		const std::string& p_prenom,
		const util::Date& p_dateNaissance,
		const std::string& p_telephone)

: m_nom(p_nom),
  m_prenom(p_prenom),
  m_dateNaissance(p_dateNaissance),
  m_telephone(p_telephone)
{
	PRECONDITION(util::validerFormatNom(p_nom) == true);
	PRECONDITION(util::validerFormatNom(p_prenom) == true);
	PRECONDITION(util::validerTelephone(p_telephone) == true);
	POSTCONDITION(m_nom == p_nom);
	POSTCONDITION(m_prenom == p_prenom);
	POSTCONDITION(m_dateNaissance == p_dateNaissance);
	POSTCONDITION(m_telephone == p_telephone);
	INVARIANTS();
}

/**
 * \brief Destructeur de la classe personne
 *
 */
Personne::~Personne()
{}

/**
 * \brief accesseur de l'attribut m_dateNaissance
 * \return l'attribut m_dateNaissance
 *
 */
util::Date Personne::reqDateNaissance() const {
	return m_dateNaissance;
}

/**
 * \brief mutateur de l'attribut m_nom
 * \return l'attribut m_nom
 *
 */
const std::string& Personne::reqNom() const {
	return m_nom;
}

/**
 * \brief accesseur de l'attribut m_prenom
 * \return l'attribut m_prenom
 *
 */
const std::string& Personne::reqPrenom() const {
	return m_prenom;
}

/**
 * \brief accesseur de l'attribut m_telephone
 * \return l'attribut m_telephone
 *
 */
const std::string& Personne::reqTelephone() const {
	return m_telephone;
}

/**
 * \brief mutateur de l'attribut m_telephone
 * \return l'attribut m_telephone
 *
 */
void Personne::asgTelephone(const std::string& telephone) {
	PRECONDITION(util::validerTelephone(telephone) == true);
	m_telephone = telephone;
	INVARIANTS();
}

/**
 * \brief Méthode qui formate l'objet Personne pour l'affichage
 * \return string formatée pour l'affichage de l'objet Personne
 *
 */
string Personne::reqPersonneFormate() const {
	ostringstream os;
	os << "Nom               : " << m_nom << "\n" <<
		  "Prenom            : " << m_prenom << "\n" <<
		  "Date de naissance : " << m_dateNaissance.reqDateFormatee() << "\n" <<
		  "Telephone         : " << m_telephone;
	return os.str();
}

/**
 * \brief Opérateur == qui vérifie si deux perosnnes sont la même
 * \param unePersonne: instance de la classe personne
 * \return valide: bool qui indique si les deux personnes sont la même
 *
 */
bool Personne::operator ==(const Personne& unePersonne) const{

	bool valide;

	if(m_nom == unePersonne.reqNom() and
	   m_prenom == unePersonne.reqPrenom() and
	   m_dateNaissance == unePersonne.reqDateNaissance())
	{
		valide = true;
	}
	else
	{
		valide = false;
	}

	return valide;
}

/**
 * \brief méthode ou on définie les invariants de la classe
 * \brief ne retourne rien mais déclanche des exceptions
 * \brief permet de s'assurer qu'une instance est valide en tout temps
 *
 */
void Personne::verifieInvariant() const {
	INVARIANT(util::validerFormatNom(m_nom) == true);
	INVARIANT(util::validerFormatNom(m_prenom) == true);
	INVARIANT(util::validerTelephone(m_telephone) == true);
}

} //namespace tp


