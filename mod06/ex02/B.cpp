#include "B.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
B::B()
{
	/*Constructor*/
	std::cout << YELLOW << "B default constructor called" << RESET << std::endl;
}

B::~B()
{
	/*Destructor*/
	std::cout << YELLOW << "B destructor called" << RESET << std::endl;
}

B::B(const B &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "B copy constructor called" << RESET << std::endl;
	*this = ref;
}

B&	B::operator=(const B &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "B assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

std::ostream&	operator<<(std::ostream &out, const B &ref)
{
	/*Output operator*/
	/*out << B;
	return out;*/
}
