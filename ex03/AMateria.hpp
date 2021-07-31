#pragma once
# ifndef __AMATERIA_H__
# define __AMATERIA_H__
class AMateria;
# include "ICharacter.hpp"

class AMateria {
	private:
		AMateria( void );
	protected:
		std::string		_type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria( void );
		AMateria( AMateria const & copy );
		AMateria & operator=(const AMateria & copy);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

#endif
