#include "Base.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
Base::Base()
{
	/*Constructor*/
	std::cout << YELLOW << "Base default constructor called" << RESET << std::endl;
}

Base::~Base()
{
	/*Destructor*/
	std::cout << YELLOW << "Base destructor called" << RESET << std::endl;
}

Base::Base(const Base &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "Base copy constructor called" << RESET << std::endl;
	*this = ref;
}

Base&	Base::operator=(const Base &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Base assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/
