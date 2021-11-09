#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_thonks;	
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
