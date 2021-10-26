/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:28:40 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/26 17:40:15 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap&	operator=(const ScavTrap &ref);
		ScavTrap(const ScavTrap &ref);
		virtual ~ScavTrap();

		virtual void	attack(std::string const &target);
		void			guardGate();
};

#endif
