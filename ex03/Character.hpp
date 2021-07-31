#pragma once
# ifndef __CHARACTER_H__
# define __CHARACTER_H__
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define INV_SIZE 4

class Character : public ICharacter {
	private:
		std::string		_name;
		AMateria *		_inventory[INV_SIZE];
		Character( void );
	public:
		Character( std::string name );
		virtual ~Character();
		Character( Character const & copy );
		Character & operator=(const Character & copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
