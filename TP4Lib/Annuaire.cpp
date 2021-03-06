/**
 * \file Annuaire.cpp
 * \brief 
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-03-28 
 */

#include "Annuaire.h"
#include "ContratException.h"
#include "validationFormat.h"
#include "Personne.h"
#include <string>
#include <sstream>
#include <vector>
#include "PersonneException.h"

namespace tp {

/**
 * \brief Constructeur par défaut de la classe Annuaire
 * \return Instance de la classe Annuaire avec un nom vide
 *
 */
Annuaire::Annuaire() : m_nomClub(""){}

/**
 * \brief Constructeur de la classe Annuaire
 * \param p_nomClub : string représentant le nom de l'équipe de hockey
 * \return Instance de la classe Annuaire
 *
 */
Annuaire::Annuaire(const std::string& p_nomClub)
	: m_nomClub (p_nomClub)
{
	PRECONDITION(p_nomClub.empty() == false);
	POSTCONDITION(m_nomClub == p_nomClub);
	INVARIANTS();
}

/**
 * \brief Mutateur de l'attribut m_nomCLub
 * \param p_nomClub : string représentant le nom de l'équipe de hockey
 *
 */
void Annuaire::asgNomClub(const std::string& p_nomClub) {
	PRECONDITION(p_nomClub.empty() == false);
	m_nomClub = p_nomClub;
	POSTCONDITION(m_nomClub == p_nomClub);
	INVARIANTS();
}

/**
 * \brief Destructeur de la classe annuaire. Fait un delete sur tout les membres de l'annuaire
 *
 */
Annuaire::~Annuaire() {
	for(std::vector<Personne*>::iterator it = m_vMembres.begin();
			it != m_vMembres.end() ; it++)
	{
		delete *it;
	}
	m_vMembres.clear();
}

/**
 * \brief accesseur de l'attribut m_nomClub
 * \return l'attribut m_nomClub
 *
 */
const std::string& Annuaire::reqNomClub() const {
	return m_nomClub;
}

/**
 * \brief méthode qui ajoute un pointeur de la classe Personne dans le vecteur m_vMembres
 *
 */
void Annuaire::ajouterPersonne(const Personne& p_personne) {

	size_t grandeur = m_vMembres.size();

	if (PersonneEstDejaPresente(p_personne))
	{
		throw util::PersonneDejaPresenteException("La personne est déjà présente");
		POSTCONDITION(grandeur == m_vMembres.size());
	}
	else
	{
		m_vMembres.push_back(p_personne.clone());
		POSTCONDITION(grandeur + 1 == m_vMembres.size());
	}


	INVARIANTS();
}

/**
 * \brief méthode qui efface un pointeur de la classe Personne dans le vecteur m_vMembres
 * \param Les strings p_nom et p_prenom et l'instance de Date p_dateNaissance
 */
void Annuaire::supprimerPersonne(const std::string& p_nom,
		const std::string& p_prenom, const util::Date& p_dateNaissance) {

	PRECONDITION(util::validerFormatNom(p_nom) == true);
	PRECONDITION(util::validerFormatNom(p_prenom) == true);

	bool estPresent = false;
	size_t grandeur = m_vMembres.size();

	for(std::vector<Personne*>::iterator it = m_vMembres.begin();
				it != m_vMembres.end() ; it++)
		{
		if ((*it) -> reqNom() == p_nom &&
				(*it) -> reqPrenom() == p_prenom &&
				(*it) -> reqDateNaissance() == p_dateNaissance){
			m_vMembres.erase(it);
			delete *it;
			estPresent = true;
			break;
		}
		}

	if(not estPresent){
		throw util::PersonneAbsenteException("La personne est absente");
	}

	POSTCONDITION(grandeur - 1 == m_vMembres.size());
	INVARIANTS();
}

/**
 * \brief Méthode qui formate l'objet Annuaire pour l'affichage
 * \brief Permet l'affichage de toutes les références à Personne contenues dans le vecteur m_vMembres
 * \return string formatée pour l'affichage de l'objet Annuaire
 *
 */
std::string Annuaire::reqAnnuaireFormate() const{

	std::ostringstream os;

	os << "Club : " << m_nomClub << "\n------------------\n";

	for(std::size_t i = 0; i < m_vMembres.size() ; i++)
	{
		os << m_vMembres[i] -> reqPersonneFormate() << "\n";
	}

	return os.str();

}

/**
 * \brief vérifie si une personne est déjà présente dans l'annuaire
 * \param p_personne : référence de la classe personne (instance de Joueur ou Entraineur)
 * \return bool indiquant si oui ou non la personne est déjà là
 *
 */
bool Annuaire::PersonneEstDejaPresente(const Personne& p_personne) const {

	bool estPresent = false;

	for(std::vector<Personne*>::const_iterator it = m_vMembres.begin();
				it != m_vMembres.end() ; it++)
		{
		if (p_personne == (*(*it))){
			estPresent = true;
			break;
		}
		}

	return estPresent;
}

std::vector<Personne*> Annuaire::reqVecteur() const{
std::vector<Personne*> nouveauVecteur;

	for(std::vector<Personne*>::const_iterator it = m_vMembres.begin();
				it != m_vMembres.end() ; it++)
		{
			nouveauVecteur.push_back(*it);
		}

	return nouveauVecteur;
	POSTCONDITION(nouveauVecteur.size() == m_vMembres.size());
	INVARIANTS();
}

/**
 * \brief méthode ou on définie les invariants de la classe
 * \brief ne retourne rien mais déclanche des exceptions
 * \brief permet de s'assurer qu'une instance est valide en tout temps
 * \brief pour l'instant vide
 */
void Annuaire::verifieInvariant() const {
}

} /* namespace tp */


