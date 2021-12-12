#include "C.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
C::C()
{
	/*Constructor*/
	std::cout << YELLOW << "C default constructor called" << RESET << std::endl;
}

C::~C()
{
	/*Destructor*/
	std::cout << YELLOW << "C destructor called" << RESET << std::endl;
}

C::C(const C &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "C copy constructor called" << RESET << std::endl;
	*this = ref;
}

C&	C::operator=(const C &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "C assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/
