#include "Dog.hpp"

/*--------------------------------Coplien form--------------------------------*/
Dog::Dog()
{
	/*Constructor*/
	_type = "Dog";
	_thonks = new Brain;
	std::cout << "Dog const called" << std::endl;
}

Dog::~Dog()
{
	/*Destructor*/
	std::cout << "Dog default destrctor called" << std::endl;
	if (_thonks)
		delete _thonks;
}

Dog::Dog(const Dog &ref) : _thonks(0)
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
		delete _thonks;
		_thonks = new Brain(*ref._thonks);
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	Dog::makeSound() const
{
	std::cout << "WOOF WOOF I AM DOG WOOOF" << std::endl;
}
