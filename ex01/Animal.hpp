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
		Animal( Animal const & copy );
		virtual Animal & operator=(const Animal & copy);
		virtual ~Animal( void );
		virtual void makeSound( void ) const ;
		virtual std::string getIdea( int i ) const ;
		virtual void setIdea( std::string idea ) const ;
		virtual void setIdea( std::string idea, int i ) const ;
};

class Cat : public Animal {
	private:
		Brain*   brain;
	public:
		Cat( void );
		Cat( Animal const & copy );
		Cat( Animal const * copy );
		Cat( Cat const & copy );
		Cat( Cat const * copy );
		virtual Cat & operator=(const Cat & copy);
		virtual std::string getIdea( int i ) const ;
		virtual void setIdea( std::string idea ) const ;
		virtual void setIdea( std::string idea, int i ) const ;
		virtual ~Cat( void );
		virtual void makeSound( void ) const ;
};

class Dog : public Animal {
	private:
		Brain*   brain;
	public:
		Dog( void );
		Dog( Animal const & copy );
		Dog( Animal const * copy );
		Dog( Dog const & copy );
		Dog( Dog const * copy );
		virtual Dog & operator=(const Dog & copy);
		virtual std::string getIdea( int i ) const ;
		virtual void setIdea( std::string idea ) const ;
		virtual void setIdea( std::string idea, int i ) const ;
		virtual ~Dog( void );
		void makeSound( void ) const ;
};



#endif
