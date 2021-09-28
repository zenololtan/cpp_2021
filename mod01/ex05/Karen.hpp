/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:54 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/20 13:54:13 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream.h>

class karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		karen();
		~karen();
		karen(const Karen &copy);
		karen& operator=(const Karen& copy);
		void	complain(std::string level);
}

#endif
