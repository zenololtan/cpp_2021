/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:56:32 by ztan          #+#    #+#                 */
/*   Updated: 2021/11/01 18:47:48 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_Name = "Default";
	ClapTrap::_Name = "Default_clap_name";
	_Hit_points = FragTrap::_Hit_points;
	_Energy_points = ScavTrap::_Energy_points;
	_Attack_damage = FragTrap::_Attack_damage;
	std::cout << RESET << "DiamondTrap constructor called: "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
	std::cout << "hp: " << _Hit_points << ", ep: " << _Energy_points << ", ad: " << _Attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : _Name(name)
{
	ClapTrap::_Name = name + "_clap_name";
	_Hit_points = FragTrap::_Hit_points;
	_Energy_points = ScavTrap::_Energy_points;
	_Attack_damage = FragTrap::_Attack_damage;
	std::cout << RESET << "DiamondTrap constructor called: "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RESET << "Destructor called: boop boop (another well chosen quote) "
		 << YELLOW << _Name << RESET << " has been destroyed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &ref)
{
	if (this != &ref)
	{
		_Name = ref._Name;
		ClapTrap::_Name = ref._Name + "_clap_name";
		_Hit_points = ref._Hit_points;
		_Energy_points = ref._Energy_points;
		_Attack_damage= ref._Attack_damage;
		
	}
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	*this = ref;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name: " << _Name << ", claptrap name:" << ClapTrap::_Name << std::endl;
}
