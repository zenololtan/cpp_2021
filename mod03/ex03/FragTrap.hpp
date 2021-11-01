/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:48:45 by ztan          #+#    #+#                 */
/*   Updated: 2021/11/01 18:01:53 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap&	operator=(const FragTrap &ref);
		FragTrap(const FragTrap &ref);
		virtual ~FragTrap();

		FragTrap(const std::string name);
		virtual void	attack(std::string const &target);
		void			highFivesGuys(void);
};

#endif
