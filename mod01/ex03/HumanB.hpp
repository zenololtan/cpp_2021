/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:15 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/29 13:14:17 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_Name;
		Weapon*		_Weapon; // using a pointer because you cant have an empty ref

	public:
		HumanB(std::string name);
		HumanB&		operator=(const HumanB& copy);
		virtual	~HumanB(){};
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif
