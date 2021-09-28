/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:06 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:56:36 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _Name(name), _Weapon(weapon) {}

void		HumanA::attack()
{
	std::cout << _Name << " attacks with his " << _Weapon.getType() << std::endl;
}
