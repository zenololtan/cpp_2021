#include "Cat.hpp"
#include "Brain.hpp"

/*--------------------------------Coplien form--------------------------------*/
Cat::Cat()
{
	/*Constructor*/
	this->setType("Cat");
	this->_thonks = new Brain;
	std::cout << "Cat const called" << std::endl;
}

Cat::~Cat()
{
	/*Destructor*/
	std::cout << "Cat destrctr called" << std::endl;
	delete _thonks;
}

Cat::Cat(const Cat &ref) : _thonks(ref._thonks)
{
	/*Copy constructor*/
}

Cat&	Cat::operator=(const Cat &ref)
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
