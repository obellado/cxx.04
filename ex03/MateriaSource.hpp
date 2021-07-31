#pragma once
# ifndef __MATERIASOURCE_H__
# define __MATERIASOURCE_H__
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *		_inventory[INV_SIZE];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource( MateriaSource const & copy );
		MateriaSource & operator=(const MateriaSource & copy);
		virtual AMateria * createMateria( std::string const & type );
		virtual void learnMateria( AMateria * thing );
};

#endif
