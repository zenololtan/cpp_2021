#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		/*----------------------------Coplien form----------------------------*/
		Dog();
		~Dog();

		/*--------------------------Member functions--------------------------*/
		void	makeSound() const;
};

#endif
