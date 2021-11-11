#include "Cat.hpp"

/*--------------------------------Coplien form--------------------------------*/
Cat::Cat()
{
	/*Constructor*/
	_type = "Cat";
	_thonks = new Brain;
	std::cout << "Cat const called" << std::endl;

}

Cat::~Cat()
{
	/*Destructor*/
	std::cout << "Cat default destrctor called" << std::endl;
	if (_thonks)
		delete _thonks;
}

Cat::Cat(const Cat &ref) : _thonks(0)
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
		delete _thonks;
		_thonks = new Brain(*ref._thonks);
	}
	return *this;
}

/*--------------------------------Coplien form--------------------------------*/

void	Cat::makeSound() const
{
	std::cout << "I am cat meow meow I hate everything" << std::endl;
}

void	Cat::thinkin()
{
	_thonks->thinkStuff();
}

void	Cat::speaking()
{
	_thonks->thinkAloud();
}
