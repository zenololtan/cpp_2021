#include "Animal.hpp"

Animal::~Animal()
{
	/*Destructor*/
	std::cout << "Animal default destrctor called" << std::endl;
}

std::string	Animal::getType() const
{
	return _type;
}
