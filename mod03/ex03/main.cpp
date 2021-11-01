/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:48:55 by ztan          #+#    #+#                 */
/*   Updated: 2021/11/01 18:33:28 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	DiamondTrap	ildusvgas_AFYGlfgadlsfdgsf("ildusvgas_AFYGlfgadlsfdgsf");

	ildusvgas_AFYGlfgadlsfdgsf.beRepaired(20);
	ildusvgas_AFYGlfgadlsfdgsf.takeDamage(15);	
	ildusvgas_AFYGlfgadlsfdgsf.highFivesGuys();
	ildusvgas_AFYGlfgadlsfdgsf.attack("some random dude");
	ildusvgas_AFYGlfgadlsfdgsf.whoAmI();

	std::cout << "-----------------------------------------" << std::endl;
	
	DiamondTrap test;

	test.whoAmI();
	test = ildusvgas_AFYGlfgadlsfdgsf;
	test.whoAmI();
	return 0;
}
