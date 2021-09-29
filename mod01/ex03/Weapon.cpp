/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:23 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/29 13:12:11 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _Type(type) {}

Weapon&		Weapon::operator=(const Weapon& copy)
{
	if (this != &copy)
	{
		this->_Type = copy._Type;
	}
	return *this;
}

const std::string&	Weapon::getType()
{
	return _Type;
}

void			Weapon::setType(std::string type)
{
	_Type = type;
}
