/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:49:00 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/19 21:56:34 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# define RESET	"\033[0m"
# define RED	"\033[1m\033[31m"
# define YELLOW	"\033[1m\033[33m"
# define GREEN	"\033[1m\033[32m"

class ClapTrap
{
	protected:
		std::string		_Name;
		unsigned int	_Hit_points;
		unsigned int	_Energy_points;
		unsigned int	_Attack_damage;

	public:
		ClapTrap();
		ClapTrap(const std::string name);
		~ClapTrap();
		ClapTrap&		operator=(const ClapTrap &ref);
		ClapTrap(const ClapTrap &ref);
		
		virtual void	attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
