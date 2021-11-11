#include "WrongCat.hpp"

/*--------------------------------Coplien form--------------------------------*/
WrongCat::WrongCat()
{
	/*Constructor*/
	_type = "WrongCat";
	std::cout << "WrongCat const called" << std::endl;
}

WrongCat::~WrongCat()
{
	/*Destructor*/
	std::cout << "WrongCat destrctr called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
	/*Copy constructor*/
	*this = ref;
}

WrongCat&	WrongCat::operator=(const WrongCat &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
		this->_type = ref._type;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

