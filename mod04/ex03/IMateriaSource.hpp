#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		/*----------------------------Coplien form----------------------------*/
		virtual ~IMateriaSource() {};

		/*--------------------------Member functions--------------------------*/
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
