#include "Animal.hpp"

/*--------------------------------Coplien form--------------------------------*/
Animal::Animal() : _type("")
{
	/*Constructor*/
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	/*Destructor*/
	std::cout << "Animal default destrctor called" << std::endl;
}

Animal::Animal(const Animal &ref)
{
	/*Copy constructor*/
	*this = ref;
}

Animal&	Animal::operator=(const Animal &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
		this->_type = ref._type;
	}
	return *this;
}

/*--------------------------------Coplien form--------------------------------*/
std::string	Animal::getType() const
{
	return _type;
}

void		Animal::makeSound() const
{ 
	std::cout << "???: ..." << std::endl;
}
