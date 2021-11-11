#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/*----------------------------Coplien form----------------------------*/
		WrongCat();
		virtual ~WrongCat();

		WrongCat(const WrongCat &ref);
		WrongCat&			operator=(const WrongCat &ref);
		/*--------------------------Member functions--------------------------*/
};

#endif
