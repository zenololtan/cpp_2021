#include "Cat.hpp"

/*--------------------------------Coplien form--------------------------------*/
Cat::Cat()
{
	/*Constructor*/
	this->setType("Cat");
	std::cout << "Cat const called" << std::endl;
}

Cat::~Cat()
{
	/*Destructor*/
	std::cout << "Cat destrctr called" << std::endl;
}
/*--------------------------------Coplien form--------------------------------*/

void	Cat::makeSound() const
{
	std::cout << "I am cat meow meow I hate everything" << std::endl;
}
