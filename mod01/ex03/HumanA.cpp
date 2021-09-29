/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:06 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/29 13:10:04 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _Name(name), _Weapon(weapon) {}

HumanA&		HumanA::operator=(const HumanA& copy)
{
	if (this != &copy)
	{
		this->_Name = copy._Name;
		this->_Weapon = copy._Weapon;
	}
	return *this;
}

void		HumanA::attack()
{
	std::cout << _Name << " attacks with his " << _Weapon.getType() << std::endl;
}
