/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:56:32 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 22:06:05 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), _Name(name)
{
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 30;
	std::cout << RESET << "DiamondTrap constructor called: "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RESET << "Destructor called: boop boop (another well chosen quote) "
		 << YELLOW << _Name << RESET << " has been destroyed" << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
