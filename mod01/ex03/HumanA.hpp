/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:09 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:55:42 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_Name;
	Weapon&		_Weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	void		attack();
};

#endif
