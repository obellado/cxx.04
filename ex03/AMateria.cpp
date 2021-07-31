#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria( void ){ _type = ""; }

AMateria::~AMateria( void ){}

AMateria::AMateria( AMateria const & copy ) : _type(copy._type) {}

AMateria & AMateria::operator=(const AMateria & copy) {
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter & target) {
	std::cout << "Materia use " << target.getName() << std::endl;

}
