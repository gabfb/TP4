/**
 * \file PersonneException.cpp
 * \brief
 * \author Gabriel Fortin Bélanger : gafob : 111 150 604
 * \date 2017-04-12
 */

#include "PersonneException.h"
#include <exception>
namespace util {
PersonneException::PersonneException(const std::string& raison) :
		std::runtime_error(raison) {
}

PersonneDejaPresenteException::PersonneDejaPresenteException(
		const std::string& raison) :
		PersonneException(raison) {
}

PersonneAbsenteException::PersonneAbsenteException(const std::string& raison) :
		PersonneException(raison) {
}

}

