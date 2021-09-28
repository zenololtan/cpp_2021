/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:06 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/28 14:29:05 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <ctime>
/* FOREGROUND */
# define YEL	"\x1B[33m"
# define WHT	"\x1B[37m"

class Zombie
{
	private:
		std::string	_z_name;

	public:
		Zombie(){};
		Zombie(const Zombie& copy);
		Zombie&		operator=(const Zombie& copy);
		~Zombie();

		void		setName(std::string name);
		void		announce();
};

void		randomChump(std::string name);
Zombie*		newZombie(std::string name);

#endif
