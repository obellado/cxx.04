#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice( void ) : AMateria("ice") {
}

Ice::~Ice( void ) {}

Ice::Ice( Ice const & copy ) : AMateria(copy) {

}

Ice & Ice::operator=(const Ice & copy) {
	AMateria::operator=(copy);
	return (*this);
}

void Ice::use(ICharacter & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}
