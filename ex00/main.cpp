#include <iostream>
#include "Animal.hpp"

int main( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* WrongI = new WrongCat();
	const WrongCat* WrongI2 = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << WrongI->getType() << " " << std::endl;
	std::cout << WrongI2->getType() << " " << std::endl;
	std::cout << "Test:" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "Wrong Test:" << std::endl;
	WrongMeta->makeSound();
	WrongI->makeSound();
	WrongI2->makeSound();
}
