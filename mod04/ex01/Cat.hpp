#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		/*----------------------------Coplien form----------------------------*/
		Cat();
		~Cat();

		/*--------------------------Member functions--------------------------*/
		void	makeSound() const;
};

#endif
