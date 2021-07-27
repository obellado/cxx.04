#include <iostream>
#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain & copy) {
	std::cout << "Brain assignation constructor called" << std::endl;
	if (this != &copy) {

	}
	return (*this);
}

Brain::Brain( Brain const & copy ) {
	std::cout << "Brain copy constructor 3 called" << std::endl;
	int i = -1;
	while (++i < 100)
		this->ideas[i] = copy.ideas[i];
}
