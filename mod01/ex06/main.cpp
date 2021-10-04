/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:56 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/04 20:04:14 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	get_comp(std::string level)
{
	int amount;
	
	std::string list[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	amount = sizeof(list) / sizeof(*list);
	for (int i = 0; i < amount; i++)
		if (level == list[i])
			return i;
	return -1;
}

int	main(int argc, char **argv)
{
	Karen	k;
	
	if (argc != 2)
		return 0;
	switch(get_comp(argv[1]))
	{
		case 0:
			k.complain("DEBUG");
		case 1:
			k.complain("INFO");
		case 2:
			k.complain("WARNING");
		case 3:
			k.complain("ERROR");
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
