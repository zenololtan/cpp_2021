/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:13 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/29 13:14:03 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _Name(name), _Weapon(NULL) {}

HumanB&		HumanB::operator=(const HumanB& copy)
{
	if (this != &copy)
	{
		this->_Name = copy._Name;
	}
	return *this;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_Weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _Name << " attacks with his " << _Weapon->getType() << std::endl;
}
