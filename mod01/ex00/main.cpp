/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:24:41 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:16:28 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Zombie.hpp"

int	main()
{
	Zombie	*heapZom = newZombie("Zombie dude heap");

	heapZom->announce();
	randomChump("Zombie dude stack");
	delete heapZom;
	return 0;
}
