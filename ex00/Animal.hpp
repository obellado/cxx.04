#pragma once
# ifndef __ANIMAL_H__
# define __ANIMAL_H__

class Animal {
	protected:
		std::string		type;
	public:
		std::string getType( void ) const ;
		Animal( void );
		~Animal( void );
		virtual void makeSound( void ) const ;
};

class Cat : public Animal {
	public:
		Cat( void );
		~Cat( void );
		virtual void makeSound( void ) const ;
};

class Dog : public Animal {
	public:
		Dog( void );
		~Dog( void );
		void makeSound( void ) const ;
};

class WrongAnimal {
	protected:
		std::string		type;
	public:
		std::string getType( void ) const ;
		WrongAnimal( void );
		~WrongAnimal( void );
		void makeSound( void ) const ;
};

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		~WrongCat( void );
		void makeSound( void ) const ;
};

#endif
