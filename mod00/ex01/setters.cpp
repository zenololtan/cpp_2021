/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   setters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:40:21 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/20 18:22:20 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phonebook::set_name(std::string input)
{
	name = input;
}

void	phonebook::set_surname(std::string input)
{
	surname = input;
}

void	phonebook::set_nickname(std::string input)
{
	nickname = input;
}

void	phonebook::set_number(std::string input)
{
	number = input;
}

void	phonebook::set_bankpass(std::string input)
{
	bankpass = input;
}

void	phonebook::set_darkestSecret(std::string input)
{
	darkestSecret = input;
}

void	phonebook::setter(std::string str, void (phonebook::*f)(std::string))
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	(this->*f)(input);
}
