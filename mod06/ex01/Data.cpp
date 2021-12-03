#include "Data.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
Data::Data() : _Message("Default message")
{
	/*Constructor*/
	std::cout << YELLOW << "Data default constructor called" << RESET << std::endl;
}

Data::Data(std::string str) : _Message(str)
{
	/*Constructor*/
	std::cout << YELLOW << "Data default constructor called" << RESET << std::endl;
}

Data::~Data()
{
	/*Destructor*/
	std::cout << YELLOW << "Data destructor called" << RESET << std::endl;
}

Data::Data(const Data &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "Data copy constructor called" << RESET << std::endl;
	*this = ref;
}

Data&	Data::operator=(const Data &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Data assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->_Message = ref._Message;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

std::ostream&	operator<<(std::ostream &out, const Data &ref)
{
	/*Output operator*/
	out << "message: " << ref.getMessage();
	return out;
}
