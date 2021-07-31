#pragma once
# ifndef __BRAIN_H__
# define __BRAIN_H__

#include <iostream>

class Brain {
	public:
		std::string		ideas[100];
		Brain( void );
		~Brain( void );
		Brain( const Brain & copy );
		Brain( Brain const * copy );
		Brain & operator=(const Brain & copy);
};

#endif
