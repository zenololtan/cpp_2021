/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:48:45 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/26 17:36:06 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap&	operator=(const FragTrap &ref);
		FragTrap(const FragTrap &ref);
		~FragTrap();

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif
