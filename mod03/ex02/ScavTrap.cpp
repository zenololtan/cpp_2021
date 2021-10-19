/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:28:37 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/19 21:13:22 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	_Name = name;
	_Hit_points = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	std::cout << RESET << "ScavTrap constructor called: beep boop \"I will keep gates or smthing idk\" "
		 << YELLOW << _Name << RESET << " has been made" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RESET << "ScavTrap destructor called.. "
		 << YELLOW << _Name << RESET << " has been destroyed" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout  << YELLOW << _Name << RESET << " Rolls its eyes at "
		 << YELLOW << target << RESET << " causing " << RED
		 << _Attack_damage << RESET << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << YELLOW << _Name << RESET <<
		 ": GATE KEEP MODE ACTIVATED... I shall gatekeep anime and religion boop boop." << std::endl;
}
