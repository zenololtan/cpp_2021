/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:26:11 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:42:34 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	int n = 5;
	Zombie *zombies = zombieHorde(n, "zombies's");
	
	for(int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}
