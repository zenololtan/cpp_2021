/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:25 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/29 13:13:08 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string	_Type;

	public:
		Weapon(std::string type);
		Weapon&				operator=(const Weapon& copy);
		virtual				~Weapon(){};
		const std::string&	getType();
		void				setType(std::string type);
};

#endif
