#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		/*--------------------------Member variables--------------------------*/

	public:
		/*----------------------------Coplien form----------------------------*/
		Cure();
		Cure(const Cure &ref);
		Cure& operator=(const Cure &ref);
		~Cure();

		/*--------------------------Member functions--------------------------*/
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
