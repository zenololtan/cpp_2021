#include "Convert.hpp"
#include <iomanip>
#include <math.h>

void	print_char(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
}

void	print_int(int i)
{
	if (!std::isprint(i))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(i) << std::endl;
}

void	print_float(float f)
{
	float rest;
	rest = modf(f, &rest);

	if (!std::isprint(f))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (rest <= 0)
		std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if (rest <= 0)
		std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(f) << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	print_double(double d)
{
	double rest;
	rest = modf(d, &rest);

	if (!std::isprint(d))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
	{
		if (rest <= 0)
			std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	}	
	if (rest <= 0)
		std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	print_non(const std::string &str)
{
	std::string s = str;

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (s == "nanf" || s == "-inff" || s == "+inff")
	{
		std::cout << "float: " << s << std::endl;
		std::cout << "double: " << s.erase(s.size() - 1) << std::endl;
	}
	else
	{
		std::cout << "float: " << s << "f" << std::endl;
		std::cout << "double: " << s << std::endl;
	}
}
