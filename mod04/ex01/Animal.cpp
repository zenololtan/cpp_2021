#include "Animal.hpp"

/*--------------------------------Coplien form--------------------------------*/
Animal::Animal() : type("")
{
	/*Constructor*/
	std::cout << "Animal const called" << std::endl;
}

Animal::~Animal()
{
	/*Destructor*/
	std::cout << "Animal destrct called" << std::endl;
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
		this->type = ref.type;
		/* assign member variables*/
	}
	return *this;
}

/*--------------------------------Coplien form--------------------------------*/
void		Animal::setType(std::string name)
{
	type = name;
}

std::string	Animal::getType() const
{
	return type;
}

void		Animal::makeSound() const
{ 
	std::cout << "???: ..." << std::endl;
}
