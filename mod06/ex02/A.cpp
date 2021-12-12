#include "A.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
A::A()
{
	/*Constructor*/
	std::cout << YELLOW << "A default constructor called" << RESET << std::endl;
}

A::~A()
{
	/*Destructor*/
	std::cout << YELLOW << "A destructor called" << RESET << std::endl;
}

A::A(const A &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "A copy constructor called" << RESET << std::endl;
	*this = ref;
}

A&	A::operator=(const A &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "A assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/
