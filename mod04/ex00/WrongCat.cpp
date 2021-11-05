#include "WrongCat.hpp"

/*--------------------------------Coplien form--------------------------------*/
WrongCat::WrongCat()
{
	/*Constructor*/
	this->setType("WrongCat");
	std::cout << "WrongCat const called" << std::endl;
}

WrongCat::~WrongCat()
{
	/*Destructor*/
	std::cout << "WrongCat destrctr called" << std::endl;
}
/*--------------------------------Coplien form--------------------------------*/

void	WrongCat::makeSound() const
{
	std::cout << "I am cat meow meow I hate everything" << std::endl;
}
