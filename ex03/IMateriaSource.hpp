#pragma once
# ifndef __IMATERIASOURCE_H__
# define __IMATERIASOURCE_H__

# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual AMateria * createMateria( std::string const & type ) = 0;
		virtual void learnMateria( AMateria * thing ) = 0;
};

#endif
