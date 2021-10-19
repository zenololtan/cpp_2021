/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:49:28 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 20:49:30 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << RESET << "Constructor called: beep boop (well chosen quote) "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RESET << "Destructor called: boop boop (another well chosen quote) "
		 << YELLOW << _Name << RESET << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	*this = old;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &old)
{
	if (this != &old)
	{
		_Name = old._Name;
		_Hit_points = old._Hit_points;
		_Energy_points = old._Energy_points;
		_Attack_damage= old._Attack_damage;
	}
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout  << YELLOW << _Name << RESET << " melee attacks "
		 << YELLOW << target << RESET << " causing " << RED
		 << _Attack_damage << RESET << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_Hit_points -= amount;
	std::cout  << YELLOW << _Name << RESET << " gets attacked for "
		 << RED << amount << RESET << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_Hit_points += amount;
	std::cout << YELLOW << _Name << RESET << " is being repaired for "
		 << GREEN << amount << RESET << " points" << std::endl;
}
