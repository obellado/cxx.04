#pragma once
# ifndef __ANIMAL_H__
# define __ANIMAL_H__

#include "Brain.hpp"

class Animal {
	protected:
		std::string		type;
	public:
		std::string getType( void ) const ;
		Animal( void );
		virtual ~Animal( void );
		virtual void makeSound( void ) const ;
};

class Cat : public Animal {
	private:
		Brain*   brain;
	public:
		Cat( void );
		virtual ~Cat( void );
		virtual void makeSound( void ) const ;
};

class Dog : public Animal {
	private:
		Brain*   brain;
	public:
		Dog( void );
		virtual ~Dog( void );
		void makeSound( void ) const ;
};

#endif
