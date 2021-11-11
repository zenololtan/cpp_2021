#include "Cure.hpp"

/*--------------------------------Coplien form--------------------------------*/
Cure::Cure() : AMateria("cure")
{
	/*Constructor*/
}

Cure::~Cure()
{
	/*Destructor*/
}

Cure::Cure(const Cure &ref) : AMateria(ref._type)
{
	/*Copy constructor*/
	*this = ref;
}

Cure&	Cure::operator=(const Cure &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/
AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}
