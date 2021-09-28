/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:28:43 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:48:57 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address: " << &str << std::endl;
	std::cout << "address: " << stringPTR << std::endl;
	std::cout << "address: " << &stringREF << std::endl;

	std::cout << "String: "<< str << std::endl;
	std::cout << "Pointer: " << *stringPTR << std::endl;
	std::cout << "Ref: " << stringREF << std::endl;
	
	return 0;
}
