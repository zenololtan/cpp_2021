#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		/*----------------------------Coplien form----------------------------*/
		Cat();
		Cat(const Cat &ref);
		Cat&			operator=(const Cat &ref);
		virtual	~Cat();

		/*--------------------------Member functions--------------------------*/
		void	makeSound() const;
};

#endif
