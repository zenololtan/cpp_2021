#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_thonks;	
	public:
		/*----------------------------Coplien form----------------------------*/
		Cat();
		Cat(const Cat &ref);
		Cat&			operator=(const Cat &ref);
		virtual ~Cat();

		/*--------------------------Member functions--------------------------*/
		void	makeSound() const;
		void	thinkin();
		void	speaking();
};

#endif
