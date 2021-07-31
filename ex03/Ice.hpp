#pragma once
# ifndef __ICE_H__
# define __ICE_H__
# include "ICharacter.hpp"
# include "AMateria.hpp"


class Ice : public AMateria {

	public:
		Ice( void );
		virtual ~Ice( void );
		Ice( Ice const & copy );
		Ice & operator=(const Ice & copy);

		virtual AMateria* clone() const ;
		virtual void use(ICharacter & target);
};

#endif
