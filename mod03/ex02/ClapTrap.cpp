/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:49:03 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 20:49:04 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("..."), _Hit_points(0), _Energy_points(0), _Attack_damage(0)
{
	std::cout << RESET << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << RESET << "ClapTrap constructor called: beep boop (well chosen quote) "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RESET << "ClapTrap destructor called" << std::endl;
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
