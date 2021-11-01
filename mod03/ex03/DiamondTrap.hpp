/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:56:30 by ztan          #+#    #+#                 */
/*   Updated: 2021/11/01 18:14:13 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_Name;

	public:
		DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap &ref);
		DiamondTrap(const DiamondTrap &ref);
		virtual	~DiamondTrap();

		DiamondTrap(const std::string _name);
		void	attack(std::string const &target);
		void	whoAmI();
};

#endif
