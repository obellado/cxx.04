#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal( void ) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Cat::Cat( void ) : Animal() {
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

Dog::Dog( void ) : Animal() {
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

void Animal::makeSound( void ) const {
	std::cout << "..." << std::endl;
}

void Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << "Wuf" << std::endl;
}

std::string Animal::getType( void ) const {
	return (this->type);
}
