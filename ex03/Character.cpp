#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( std::string name ) : _name(name) {
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character( void ) {
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		AMateria * A = _inventory[i];
		if (A)
			delete A;
	}
}

Character::Character( Character const & copy ) : _name(copy._name) {
	*this = copy;
}

Character & Character::operator=(const Character & copy){
	if (this != &copy) {
		this->_name = copy._name;
		for (int i = 0; i < INV_SIZE; ++i) {
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = NULL;
			if (copy._inventory[i])
				_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < INV_SIZE; ++i) {
		if (!_inventory[i]){
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= INV_SIZE) {
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= INV_SIZE) {
		if (_inventory[idx])
			_inventory[idx]->use(target);
	}
}
