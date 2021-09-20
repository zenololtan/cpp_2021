/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   getters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:40:23 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/20 18:26:22 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string phonebook::get_name(void)
{
	return name;
}

std::string phonebook::get_surname(void)
{
	return surname;
}

std::string phonebook::get_nickname(void)
{
	return nickname;
}

std::string phonebook::get_number(void)
{
	return number;
}

std::string phonebook::get_bankpass(void)
{
	return bankpass;
}

std::string phonebook::get_darkestSecret(void)
{
	return darkestSecret;
}
