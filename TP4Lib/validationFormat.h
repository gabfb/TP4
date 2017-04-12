/**
 * \file validationFormat.h
 * \brief Déclarations des fonctions utilitaires de validation
 * \author François Levasseur : frlev144 : 111 098 378
 * \date 2017-02-17
 */

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_
#include <string>
#include "Date.h"


namespace util
{
bool validerTelephone(const std::string p_telephone);
bool validerNumRAMQ(const std::string p_numero,
					const std::string p_nom,
					const std::string p_prenom,
					int p_jourNaissance,
					int p_moisNaissance,
					int p_anneeNaissance,
					char p_sex);
bool validerFormatNom(const std::string& p_nom);
}

#endif /* VALIDATIONFORMAT_H_ */
