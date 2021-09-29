/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:56 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/29 12:52:08 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	hashFunc(std::string level)
{
	if (level == "DEBUG")
		return 1;
	if (level == "INFO")
		return 2;
	if (level == "WARNING")
		return 3;
	if (level == "ERROR")
		return 4;
	return 0;
}

int	main(int argc, char **argv)
{
	Karen	k;
	
	if (argc != 2)
		return 0;
	switch(hashFunc(argv[1]))
	{
		case 0:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case 1:
			k.complain("DEBUG");
		case 2:
			k.complain("INFO");
		case 3:
			k.complain("WARNING");
		case 4:
			k.complain("ERROR");
	}
	return 0;
}
