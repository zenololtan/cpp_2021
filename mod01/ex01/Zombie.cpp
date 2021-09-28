/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:04 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:41:49 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie()
{
	std::cout << YEL << "[" << _z_name << "] has been destructed" << WHT << std::endl;
}

Zombie::Zombie(const Zombie& copy)
{
	*this = copy;
}

Zombie&		Zombie::operator=(const Zombie& copy)
{
	if (this != &copy)
	{
		this->_z_name = copy._z_name;
	}
	return *this;
}

void		Zombie::setName(std::string name)
{
	_z_name = name;
}

void		Zombie::announce(void)
{
	std::cout << "[" << _z_name << "]: ";
	std::cout << "yuuuuuuuuuuuuuuh" << std::endl;
}
