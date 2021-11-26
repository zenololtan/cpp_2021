#include <sstream>
#include <string>

bool	is_char(const std::string &s, char *d)
{
	if (s.length() == 1 && std::isalpha(s[0]))
	{
		*d = s[0];
		return true;
	}
	else
		return false;
}
#include <iostream>
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
		std::istringstream(s) >> *f;
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
