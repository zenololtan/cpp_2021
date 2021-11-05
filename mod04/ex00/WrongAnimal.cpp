#include "WrongAnimal.hpp"

/*--------------------------------Coplien form--------------------------------*/
WrongAnimal::WrongAnimal() : _type("")
{
	/*Constructor*/
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	/*Destructor*/
	std::cout << "WrongAnimal default destrctor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	/*Copy constructor*/
	*this = ref;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &ref)
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
void		WrongAnimal::setType(std::string name)
{
	_type = name;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}

void		WrongAnimal::makeSound() const
{ 
	std::cout << "Wrong???: ..." << std::endl;
}
