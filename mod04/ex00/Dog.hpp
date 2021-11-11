#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		/*----------------------------Coplien form----------------------------*/
		Dog();
		Dog(const Dog &ref);
		Dog&			operator=(const Dog &ref);
		virtual ~Dog();

		/*--------------------------Member functions--------------------------*/
		void	makeSound() const;
};

#endif
