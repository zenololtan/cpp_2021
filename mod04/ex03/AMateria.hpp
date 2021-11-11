#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		/*----------------------------Coplien form----------------------------*/
		AMateria();
		AMateria(const AMateria &ref);
		AMateria& operator=(const AMateria &ref);
		virtual ~AMateria() {}

		/*--------------------------Member functions--------------------------*/
		AMateria(std::string const & type);
		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
