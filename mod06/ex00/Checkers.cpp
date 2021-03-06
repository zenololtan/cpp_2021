#include <sstream>
#include <string>
#include <iostream>

bool	is_char(const std::string &s, char *d)
{
	if (s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]))
	{
		*d = s[0];
		return true;
	}
	else
		return false;
}

bool	is_int(const std::string &s, int *i)
{
	std::string::const_iterator it = s.begin();

	while (it != s.end() && std::isdigit(*it))
		++it;
	if (!s.empty() && it == s.end())
	{
		try {
			std::istringstream(s) >> *i;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		return true;
	}
	else
		return false;
}
bool	is_float(const std::string &s, float *f)
{
	std::string::const_iterator it = s.begin();

	if (*it == '-')
		++it;
	if (s.find_first_of(".") != s.find_last_of("."))
		return false;
	while (it != s.end() && (std::isdigit(*it) || *it == '.'))
		++it;
	if (!s.empty() && *it == 'f' && ++it == s.end() && s.find(".f") == std::string::npos)
	{
		*f = std::atof(s.c_str());
		return true;
	}
	else
		return false;
}

bool	is_double(const std::string &s, double *d)
{
	std::string::const_iterator it = s.begin();

	if (*it == '-')
		++it;
	if (s.find_first_of(".") != s.find_last_of("."))
		return false;
	while (it != s.end() && (std::isdigit(*it) || *it == '.'))
		++it;
	if (!s.empty() && it == s.end() && s.back() != '.')
	{
		std::istringstream(s) >> *d;
		return true;
	}
	else
		return false;
}

bool	is_non(const std::string &s)
{
	return (s == "nan" || s == "-inf" || s == "+inf" || s == "nanf" || s == "-inff" || s == "+inff");
}
