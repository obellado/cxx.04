#pragma once
# ifndef __CURE_H__
# define __CURE_H__
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure( void );
		virtual ~Cure( void );
		Cure( Cure const & copy );
		Cure & operator=(const Cure & copy);

		virtual AMateria* clone() const ;
		virtual void use(ICharacter & target);
};

#endif
