#include "Dog.hpp"

/*--------------------------------Coplien form--------------------------------*/
Dog::Dog()
{
	/*Constructor*/
	_type = "Dog";
	std::cout << "Dog const called" << std::endl;
}

Dog::~Dog()
{
	/*Destructor*/
	std::cout << "Dog default destrctor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	/*Copy constructor*/
	*this = ref;
}

Dog&	Dog::operator=(const Dog &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	Dog::makeSound() const
{
	std::cout << "WOOF WOOF I AM DOG WOOOF" << std::endl;
}
