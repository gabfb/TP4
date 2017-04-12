/**
 * \file validationFormat.cpp
 * \brief Implantation des fonctions utilitaires de validation
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-02-17
 */

#include "validationFormat.h"
#include <iostream>
#include <sstream>
#include <cctype>
#include <locale>

using namespace std;

namespace util
{

/**
 * \fn validerTelephone
 * \brief Valide un numéro de tel au format canadien
 * \param string au format XXX XXX-XXXX
 * \return bool qui correspond à la validité
 *
 *  Vérifie que le numéro comporte 12 caractères, avec dans l'ordre:
 *  3 caractères d'indicatif régionnal
 *  1 espace
 *  3 chiffres
 *  1 tiret ou trait d'union
 *  4 chiffres
 *
 */
bool validerTelephone(const std::string p_telephone)
{
	bool valide;

	if(p_telephone.length() != 12)
	{
		valide = false;
		return valide;
	}

	istringstream streamnum(p_telephone);

	string code_regional;
	string local;

	streamnum >> code_regional >> local;

	if(local.length() != 8 or code_regional.length() != 3)
	{
		valide = false;
		return valide;
	}

	string local1 = local.substr(0,3);
	string local2 = local.substr(4,4);

	bool est_nombre = true;
	string tel = code_regional+local1+local2;

	for(unsigned int i = 0; i < tel.length(); i++)
	{
		if(isdigit(tel[i]) == false)
		{
			est_nombre = false;
			break;
		}
	}

	if (code_regional.length() != 3 or
			local.length() != 8 or
			local1.length() != 3 or
			local2.length() != 4 or
			local.find("-") != 3 or
			est_nombre == false)
	{
		valide = false;
	}
	else
	{
		valide = true;
	}

	return valide;
}

/**
 * \fn validerNumRAMQ
 * \brief valide un numero de RAMQ
 * \param string : le numéro de RAMQ au format NNNP AAMM JJXX
 * \param string : le nom
 * \param string : le prénom
 * \param int : l'année
 * \param int : le mois
 * \param int : le jour
 * \param char : le sexe
 * \return bool : la validité du numéro de RAMQ
 */
bool validerNumRAMQ(const std::string p_numero,
					const std::string p_nom,
					const std::string p_prenom,
					int p_jourNaissance,
					int p_moisNaissance,
					int p_anneeNaissance,
					char p_sex)
{

	if ( p_sex != 'F' and p_sex != 'M' )
		{
			cout << "Le paramètre p_sex doit être soit 'F' ou 'M'" << endl;
			return false;
		}

	if (p_numero.empty())
	{
		return false;
	}

	bool valide;

	string num_nom = p_numero.substr(0,3);
	string num_prenom = p_numero.substr(3,1);

	istringstream stream_annee(p_numero.substr(5,2));
	istringstream stream_mois(p_numero.substr(7,2));
	istringstream stream_jour(p_numero.substr(10,2));

	int num_annee;
	int num_mois;
	int num_jour;

	stream_annee >> num_annee;
	stream_mois >> num_mois;
	stream_jour >> num_jour;

	std::locale loc;
	string nom = "";
	string prenom = "";

	for (int i = 0; i < 3; i++)
	{
		nom += toupper(p_nom[i], loc);
	}

	prenom += toupper(p_prenom[0], loc);

	bool mois_valide;
	if (p_sex == 'F')
	{
		if ((num_mois - 50) != p_moisNaissance)
		{
			mois_valide = false;
		}
		else
		{
			mois_valide = true;
		}
	}
	else
	{
		if (num_mois != p_moisNaissance)
		{
			mois_valide = false;
		}
		else
		{
			mois_valide = true;
		}
	}

	if( nom != num_nom
			or prenom != num_prenom
			or (p_anneeNaissance - num_annee)%100 != 0
			or not mois_valide
			or num_jour != p_jourNaissance)
	{
		valide = false;
	}
	else
	{
		valide = true;
	}

	return valide;
}

/**
 * \fn validerFormatNom
 * \brief valide un nom
 * \param string : nom
 * \return bool : validité du nom
 *
 * Vérifie que le nom n'est pas vide et ne comporte que des lettres
 *
 */
bool validerFormatNom(const std::string& p_nom)
{
	bool estValide = true;

	if (p_nom.length() == 0){
		estValide = false;
		return estValide;
	}

	for(unsigned int i = 0; i < p_nom.length(); i++)
		{
			if(isalpha(p_nom[i]) == false)
			{
				estValide = false;
				return estValide;
			}
		}

	return estValide;
}

}

