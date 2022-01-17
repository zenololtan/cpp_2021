#include "Span.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
Span::Span(unsigned int num)
{
	/*Constructor*/
	n = num;
	std::cout << YELLOW << "Span default constructor called" << RESET << std::endl;
}

Span::~Span()
{
	/*Destructor*/
	std::cout << YELLOW << "Span destructor called" << RESET << std::endl;
}

Span::Span(const Span &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "Span copy constructor called" << RESET << std::endl;
	*this = ref;
}

Span&	Span::operator=(const Span &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Span assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

