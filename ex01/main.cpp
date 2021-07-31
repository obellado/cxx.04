#include <iostream>
#include "Animal.hpp"

int main( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	j->setIdea("i wanna kill this cat...");
	i->setIdea("HATE HATE HATE this people");
	std::cout << "First DOG think: " << j->getIdea( 13 ) << std::endl << std::endl;
	std::cout << "First CAT think: " << i->getIdea( 13 ) << std::endl << std::endl;

	Animal* k[] = { new Dog(j), new Dog(j), new Cat(i), new Cat(i) };

	k[0]->setIdea("Wanna eat", 13);
	k[1]->setIdea("Wanna sleep", 13);
	k[2]->setIdea("Wanna cuddle", 13);
	k[3]->setIdea("Wanna pee on the tree", 13);

	std::cout << std::endl;
	std::cout << "Other DOG think: " << k[0]->getIdea( 0 ) << std::endl << std::endl;
	std::cout << "Other DOG think: " << k[1]->getIdea( 0 ) << std::endl << std::endl;
	std::cout << "Other CAT think: " << k[2]->getIdea( 0 ) << std::endl << std::endl;
	std::cout << "Other CAT think: " << k[3]->getIdea( 0 ) << std::endl << std::endl;

	std::cout << "Other DOG think: " << k[0]->getIdea( 13 ) << std::endl << std::endl;
	std::cout << "Other DOG think: " << k[1]->getIdea( 13 ) << std::endl << std::endl;
	std::cout << "Other CAT think: " << k[2]->getIdea( 13 ) << std::endl << std::endl;
	std::cout << "Other CAT think: " << k[3]->getIdea( 13 ) << std::endl << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k[0];
	delete k[1];
	delete k[2];
	delete k[3];

	std::cout << std::endl << "Another array:" << std::endl << std::endl;

	const Dog* z = new Dog();
    const Cat* x = new Cat();

	z->setIdea("i wanna kill this cat...");
	x->setIdea("HATE HATE HATE this people");

	Animal *Array[20];
	for (int e = 0; e < 10; ++e){
		Array[e] = new Dog(z);
		Array[e + 10] = new Cat(x);
	}

	std::cout << std::endl << Array[8]->getType() << std::endl << std::endl;
	std::cout << std::endl << Array[8]->getIdea(1) << std::endl << std::endl;
	std::cout << std::endl << Array[15]->getType() << std::endl << std::endl;
	std::cout << std::endl << Array[15]->getIdea(1) << std::endl << std::endl;

	std::cout << std::endl << "Deleting another array:" << std::endl << std::endl;

	for (int e = 19; e >= 0; --e)
		delete Array[e];


	delete z;
	delete x;

	std::cout << std::endl << "Deep copy test:" << std::endl << std::endl;
	Dog basic;
	{
	Dog tmp = basic;
	}

std::cout << std::endl << "Deep copy test 2 :" << std::endl << std::endl;
	Dog * basic2 = new Dog();
	Dog *tmp2 = new Dog(basic2);
	delete tmp2;
	delete basic2;
	std::cout << std::endl << "THE END" << std::endl << std::endl;
	return (0);
}
