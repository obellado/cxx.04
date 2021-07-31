#include <iostream>
#include <string>

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::~Cure( void ) {}

Cure::Cure( Cure const & copy ) : AMateria(copy) {}

Cure & Cure::operator=(const Cure & copy) {
	AMateria::operator=(copy);

	return (*this);
}

void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	
	return (new Cure(*this));
}
