/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:48:45 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 21:56:23 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(){};
		FragTrap(const std::string name);
		virtual ~FragTrap();

		virtual void	attack(std::string const &target);
		void			highFivesGuys(void);
};

#endif
