/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:56 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/29 11:52:25 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	k;
	// check invalid values
	std::cout << "---Invalid values---" << std::endl;
	k.complain("niks");
	k.complain("");
	std::cout << "---Valid values---" << std::endl;
	// check valid values
	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");
	std::cout << "---End---" << std::endl;
	return 0;
}
