/**
 * \file PersonneException.h
 * \brief
 * \author Gabriel Fortin Bélanger : gafob : 111 150 604
 * \date 2017-04-12
 */

#ifndef PERSONNEEXCEPTION_H_
#define PERSONNEEXCEPTION_H_

#include <string>
#include <stdexcept>
#include <exception>

namespace util {

class PersonneException: public std::runtime_error {
public:
	PersonneException(const std::string& raison);

};

class PersonneDejaPresenteException: public PersonneException {
public:
	PersonneDejaPresenteException(const std::string& raison);
};

class PersonneAbsenteException: public PersonneException {
public:
	PersonneAbsenteException(const std::string& raison);

};

}

#endif
