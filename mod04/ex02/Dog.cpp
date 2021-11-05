#include "Dog.hpp"
#include "Brain.hpp"

/*--------------------------------Coplien form--------------------------------*/
Dog::Dog()
{
	/*Constructor*/
	this->setType("Dog");
	this->_thonks = new Brain;
	std::cout << "Dog const called" << std::endl;
}

Dog::~Dog()
{
	/*Destructor*/
	std::cout << "Dog destrctr called" << std::endl;
	delete _thonks;
}

Dog::Dog(const Dog &ref) : _thonks(ref._thonks)
{
	/*Copy constructor*/
}

Dog&	Dog::operator=(const Dog &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		delete _thonks;
		/* assign member variables*/
		_thonks = new Brain(*ref._thonks);
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	Dog::makeSound() const
{
	std::cout << "WOOF WOOF I AM DOG WOOOF" << std::endl;
}
