/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:25:06 by zenotan       #+#    #+#                 */
/*   Updated: 2021/09/13 11:35:45 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
/* FOREGROUND */
# define RST	"\x1B[0m"
# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define BLU	"\x1B[34m"
# define MAG	"\x1B[35m"
# define CYN	"\x1B[36m"
# define WHT	"\x1B[37m"

# define BOLD(x) "\x1B[1m" x RST
# define UNDL(x) "\x1B[4m" x RST

class Zombie
{
	private:
		std::string z_type;
		std::string z_name;
	public:
		Zombie() {}
		Zombie(const Zombie& copy);
		Zombie&		operator=(const Zombie& copy);
		~Zombie();

		void		announce();
		void		setZombie(std::string name, std::string type);
		std::string	getZombieName();
		std::string	getZombieType();
};

#endif
