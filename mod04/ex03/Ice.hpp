#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		/*--------------------------Member variables--------------------------*/

	public:
		/*----------------------------Coplien form----------------------------*/
		Ice();
		Ice(const Ice &ref);
		Ice& operator=(const Ice &ref);
		~Ice();

		/*--------------------------Member functions--------------------------*/
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
