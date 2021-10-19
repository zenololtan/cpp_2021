/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:48:43 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 21:14:28 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string name)
{
	_Name = name;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	std::cout << RESET << "FragTrap constructor called: High five.. "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RESET << "FragTrap destructor called: xd im dead "
		 << YELLOW << _Name << RESET << " has been destroyed" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout  << YELLOW << _Name << RESET << " high Foives "
		 << YELLOW << target << RESET << " causing " << RED
		 << _Attack_damage << RESET << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << _Name << RESET << ": High five yall" << std::endl;
}
