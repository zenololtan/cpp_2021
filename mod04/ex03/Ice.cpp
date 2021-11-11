#include "Ice.hpp"

/*--------------------------------Coplien form--------------------------------*/
Ice::Ice() : AMateria("ice")
{
	/*Constructor*/
}

Ice::~Ice()
{
	/*Destructor*/
}

Ice::Ice(const Ice &ref) : AMateria(ref._type)
{
	/*Copy constructor*/
	*this = ref;
}

Ice&	Ice::operator=(const Ice &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
