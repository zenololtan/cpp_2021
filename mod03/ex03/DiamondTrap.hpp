/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:56:30 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/26 17:24:23 by ztan          ########   odam.nl         */
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
		DiamondTrap(const std::string _name);
		DiamondTrap&	operator=(const DiamondTrap &ref);
		DiamondTrap(const DiamondTrap &ref);
		virtual	~DiamondTrap();

		void	attack(std::string const &target);
};

#endif
