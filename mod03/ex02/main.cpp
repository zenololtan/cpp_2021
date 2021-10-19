/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:48:55 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 20:54:24 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Frag("Phrag");

	Frag.beRepaired(20);
	Frag.takeDamage(15);	
	Frag.highFivesGuys();
	Frag.attack("some random dude");

	return 0;
}
