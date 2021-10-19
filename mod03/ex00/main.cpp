/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:49:34 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 20:49:35 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Clap("Phrag");
	ClapTrap	*Clap2 = new ClapTrap("B r u h");

	Clap.beRepaired(20);
	Clap.takeDamage(15);
	Clap.attack("some random dude");
	Clap.beRepaired(30);
	Clap2->takeDamage(200);
	delete Clap2;
	Clap.takeDamage(95);
	Clap.takeDamage(95);
	return 0;
}
