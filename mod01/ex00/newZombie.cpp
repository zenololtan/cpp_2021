/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:09 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:28:28 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *zombie = new (std::nothrow) Zombie;
	if (!zombie)
		return (NULL);
	zombie->setName(name);
	return zombie;
} //Allocating newzombie on the heap because it will extend the lifetime of the zombie beyond this function.
