/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:49:13 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 20:49:14 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Scav("Phrag");

	Scav.beRepaired(20);
	Scav.takeDamage(15);	
	Scav.guardGate();
	Scav.attack("some random dude");

	ScavTrap	*Scav2 = new ScavTrap("yah boy");
	Scav2->takeDamage(200);
	delete Scav2;

	ScavTrap	scav("Bouncer");
	scav.guardGate();

	ScavTrap	*scav2 = new ScavTrap("ya other person");
	scav2->takeDamage(200);
	scav2->guardGate();
	delete scav2;

	return 0;
}
