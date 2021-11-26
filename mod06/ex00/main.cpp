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
		Convert	val;

		if (is_char(str, &character))
			val = Convert(character);
		else if (is_int(str, &integer))
			val = Convert(integer);
		else if (is_float(str, &floating))
			val = Convert(floating);
		else if (is_double(str, &dub))
			val = Convert(dub);
		else
			std::cout << "Error: invalid input" << std::endl;
		std::cout << val << std::endl;
	}
	return 0;
}
