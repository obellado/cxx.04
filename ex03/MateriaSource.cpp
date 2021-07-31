#include <iostream>
#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < INV_SIZE; ++i)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < INV_SIZE; ++i) {
		if (_inventory[i])
			delete _inventory[i];
	}
}

MateriaSource::MateriaSource( MateriaSource const & copy ) {
	*this = copy;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & copy) {
	if (this != &copy) {
		for (int i = 0; i < INV_SIZE; ++i) {
			if (_inventory[i])
				delete (_inventory[i]);
			_inventory[i] = NULL;
			if (copy._inventory[i])
				_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

AMateria * MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < INV_SIZE; ++i) {
		if (_inventory[i]->getType() == type){
			
			return(_inventory[i]->clone());}
	}

	return (NULL);
}

void MateriaSource::learnMateria( AMateria * thing ) {
	for (int i = 0; i < INV_SIZE; i++) {
		if (!_inventory[i]) {
			_inventory[i] = thing;
			break;
		}
	}
}

