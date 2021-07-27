#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const & copy ) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.getType();
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}

Cat::Cat( void ) : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

Cat::Cat( Animal const & copy ) : Animal() {
	std::cout << "Cat copy constructor 1 called" << std::endl;
	this->brain = new Brain();
	int i = -1;
	while (++i < 100)
		this->setIdea(copy.getIdea(i), i);
	this->type = copy.getType();
}

Cat::Cat( Animal const * copy ) : Animal() {
	std::cout << "Cat copy constructor 2 called" << std::endl;
	this->brain = new Brain();
	this->type = copy->getType();
}

Cat::Cat( Cat const & copy ) : Animal() {
	std::cout << "Cat copy constructor 3 called" << std::endl;
	this->brain = new Brain();
	int i = -1;
	while (++i < 100)
		this->setIdea(copy.getIdea(i), i);
	this->type = copy.getType();
}

Cat::Cat( Cat const * copy ) : Animal() {
	std::cout << "Cat copy constructor 4 called" << std::endl;
	this->brain = new Brain();
	int i = -1;
	while (++i < 100)
		this->setIdea(copy->getIdea(i), i);
	this->type = copy->getType();
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Dog::Dog( void ) : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog( Animal const & copy ) : Animal() {
	std::cout << "Dog copy constructor 1 called" << std::endl;
	this->brain = new Brain();
	int i = -1;
	while (++i < 100)
		this->setIdea(copy.getIdea(i), i);
	this->type = copy.getType();
}

Dog::Dog( Animal const * copy ) {
	std::cout << "Dog copy constructor 2 called" << std::endl;
	brain = new Brain();
	type = copy->getType();
}

Dog::Dog( Dog const & copy ) : Animal() {
	std::cout << "Dog copy constructor 3 called" << std::endl;
	this->brain = new Brain(copy.brain);
	this->type = copy.getType();
}

Dog::Dog( Dog const * copy ) : Animal() {
	std::cout << "Dog copy constructor 4 called" << std::endl;
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
	int i = -1;
	while (++i < 100)
		this->setIdea(copy->getIdea(i), i);
	this->type = copy->getType();
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
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
	return (type);
}

void Cat::setIdea( std::string idea ) const {
	int i = 0;
	while (i < 100)
		brain->ideas[i++] = idea;
}

void Dog::setIdea( std::string idea ) const {
	int i = 0;
	while (i < 100)
		brain->ideas[i++] = idea;
}

void Cat::setIdea( std::string idea, int i ) const {
	brain->ideas[i] = idea;
}

void Dog::setIdea( std::string idea, int i  ) const {
	brain->ideas[i] = idea;
}

std::string Cat::getIdea( int i ) const {
	return (this->brain->ideas[i]);
}

std::string Dog::getIdea( int i ) const {
	return (this->brain->ideas[i]);
}

void Animal::setIdea( std::string idea ) const {
	return ;
}

std::string Animal::getIdea( int i ) const {
	return ("");
}

void Animal::setIdea( std::string idea, int i  ) const {
	return ;
}

Dog & Dog::operator=(const Dog & copy) {
	std::cout << "Dog assignation constructor called" << std::endl;
	if (this != &copy) {
		this->type = copy.getType();
		int i = -1;
		while (++i < 100)
			this->setIdea(copy.getIdea(i), i);
	}
	return (*this);
}

Cat & Cat::operator=(const Cat & copy) {
	std::cout << "Cat assignation constructor called" << std::endl;
	if (this != &copy) {
		this->type = copy.getType();
		int i = -1;
		while (++i < 100)
			this->setIdea(copy.getIdea(i), i);
	}
	return (*this);
}

Animal & Animal::operator=(const Animal & copy) {
	std::cout << "Animal assignation constructor called" << std::endl;
	if (this != &copy) {
		this->type = copy.getType();
	}
	return (*this);
}
