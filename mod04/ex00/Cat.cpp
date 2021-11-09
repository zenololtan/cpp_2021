#include "Cat.hpp"

/*--------------------------------Coplien form--------------------------------*/
Cat::Cat()
{
	/*Constructor*/
	_type = "Cat";
	std::cout << "Cat const called" << std::endl;
}

Cat::~Cat()
{
	/*Destructor*/
	std::cout << "Cat default destrctor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	/*Copy constructor*/
	*this = ref;
}

Cat&	Cat::operator=(const Cat &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}

/*--------------------------------Coplien form--------------------------------*/

void	Cat::makeSound() const
{
	std::cout << "I am cat meow meow I hate everything" << std::endl;
}
