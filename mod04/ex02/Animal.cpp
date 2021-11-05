#include "Animal.hpp"

Animal::~Animal()
{
	/*Destructor*/
	std::cout << "Animal default destrctor called" << std::endl;
}

void		Animal::setType(std::string name)
{
	_type = name;
}

std::string	Animal::getType() const
{
	return _type;
}
