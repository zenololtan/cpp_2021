#include "Convert.hpp"
#include <cctype>

/*--------------------------------Coplien form--------------------------------*/
Convert::~Convert()
{
	/*Destructor*/
	std::cout << "Convert destructor called" << std::endl;
}

Convert::Convert(const Convert &ref)
{
	/*Copy constructor*/
	std::cout << "Convert copy constructor called" << std::endl;
	*this = ref;
}

Convert&	Convert::operator=(const Convert &ref)
{
	/*Assignation operator*/
	std::cout << "Convert assignation overload called" << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->_Char = ref._Char;
		this->_Double = ref._Double;
		this->_Float = ref._Float;
		this->_Int = ref._Int;
		this->_Type = ref._Type;
		this->_None = ref._None;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

Convert::Convert(int integer) : _Int(integer), _Type(INT)
{
	_Char = static_cast<char>(integer);
	_Float = static_cast<float>(integer);
	_Double = static_cast<double>(integer);
	_None = "";
}

Convert::Convert(char character) : _Char(character), _Type(CHAR)
{
	_Int = static_cast<int>(character);
	_Float = static_cast<float>(character);
	_Double = static_cast<double>(character);
	_None = "";
}

Convert::Convert(float floating_p) : _Float(floating_p), _Type(FLOAT)
{
	_Int = static_cast<int>(floating_p);
	_Char = static_cast<char>(floating_p);
	_Double = static_cast<double>(floating_p);
	_None = "";
}

Convert::Convert(double double_n) : _Double(double_n), _Type(DOUBLE)
{
	_Int = static_cast<int>(double_n);
	_Char = static_cast<char>(double_n);
	_Float = static_cast<float>(double_n);
	_None = "";
}

Convert::Convert(std::string none) : _Int(0), _Char(0), _Float(0), _Double(0), _None(none), _Type(NONE){}

std::ostream&	operator<<(std::ostream &out, const Convert &ref)
{
	/*Output operator*/
	out << "Type: " << ref.getType() << std::endl;
	if (std::isprint(ref.getChar()))
		out << "char: " << ref.getChar() << std::endl;
	else
		out << "char: None displayable" << std::endl;
	out << "int: " << ref.getInt() << std::endl;
	out << "float: " << ref.getFloat() << "f" << std::endl;
	out << "double: " << ref.getDouble();
	return out;
}
