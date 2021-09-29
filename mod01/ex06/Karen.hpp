/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:54 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/29 11:20:26 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <map>
# include <iostream>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Karen();
		~Karen();
		Karen(const Karen &copy);
		Karen& operator=(const Karen& copy);
		void	complain(std::string level);
};

#endif
