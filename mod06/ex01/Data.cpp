#include "Data.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
Data::Data() : _Int(69), _Char('n'), _Message("Default message"), _Str_c(_Message.c_str())
{
	/*Constructor*/
	std::cout << YELLOW << "Data default constructor called" << RESET << std::endl;
}

Data::~Data()
{
	/*Destructor*/
	std::cout << YELLOW << "Data destructor called" << RESET << std::endl;
}

Data::Data(const Data &ref) : _Str_c(ref._Str_c)
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
		this->_Int = ref._Int;
		this->_Char = ref._Char;
		this->_Message = ref._Message;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

std::ostream&	operator<<(std::ostream &out, const Data &ref)
{
	/*Output operator*/
	out << "i: " << ref.getI() << ", c: " <<ref.getC() << ", message: " << ref.getMessage() << ", c_str: " << ref.getStr();
	return out;
}

uintptr_t 	serialize(Data* ptr)
{
	uintptr_t test;
	test = reinterpret_cast<uintptr_t>(ptr);
	return test;
}

Data*		deserialize(uintptr_t raw)
{
	Data *ret = new Data(*reinterpret_cast<Data*>(raw));
	return ret;
}
