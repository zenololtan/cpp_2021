#include "Dog.hpp"

/*--------------------------------Coplien form--------------------------------*/
Dog::Dog()
{
	/*Constructor*/
	this->setType("Dog");
	std::cout << "Dog const called" << std::endl;
}

Dog::~Dog()
{
	/*Destructor*/
	std::cout << "Dog destrctr called" << std::endl;
}
/*--------------------------------Coplien form--------------------------------*/

void	Dog::makeSound() const
{
	std::cout << "WOOF WOOF I AM DOG WOOOF" << std::endl;
}
