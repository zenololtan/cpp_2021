#include <cctype>
#include <iostream>
#include <string>
#include "Convert.hpp"

int	main(int argc, char **argv)
{
	int		integer = 0;
	char	character = 0;
	float	floating = 0;
	double	dub = 0;

	if (argc == 2)
	{
		const	std::string str(argv[1]);

		if (is_char(str, &character))
			print_char(character);
		else if (is_int(str, &integer))
			print_int(integer);
		else if (is_float(str, &floating))
			print_float(floating);
		else if (is_double(str, &dub))
			print_double(dub);
		else if (is_non(str))
			print_non(str);
		else
			std::cout << "Error: invalid input" << std::endl;
	}
	return 0;
}
