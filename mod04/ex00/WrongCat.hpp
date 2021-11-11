#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/*----------------------------Coplien form----------------------------*/
		WrongCat();
		WrongCat(const WrongCat &ref);
		WrongCat&			operator=(const WrongCat &ref);
		virtual ~WrongCat();
		
		/*--------------------------Member functions--------------------------*/
};

#endif
