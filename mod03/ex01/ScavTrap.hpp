/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:28:40 by zenotan       #+#    #+#                 */
/*   Updated: 2021/11/01 17:58:05 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap&	operator=(const ScavTrap &ref);
		ScavTrap(const ScavTrap &ref);
		~ScavTrap();

		ScavTrap(const std::string name);
		void	attack(std::string const &target);
		void	guardGate();
};

#endif
