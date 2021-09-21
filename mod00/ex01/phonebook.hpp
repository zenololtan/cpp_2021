/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:39:32 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/21 15:24:55 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HP_DATA_HPP_
# define HP_DATA_HPP_

# include <iostream>
# include <stdio.h>
# include <cstring>
# include <string>
# include <iomanip>

class phonebook
{
	private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string bankpass;
	std::string darkestSecret;

    public:
	std::string get_name(void);
	void		set_name(std::string input);
	std::string get_surname(void);
	void		set_surname(std::string input);
	std::string get_nickname(void);
	void		set_nickname(std::string input);
	std::string get_number(void);
	void		set_number(std::string input);
	std::string get_bankpass(void);
	void		set_bankpass(std::string input);
	std::string get_darkestSecret(void);
	void		set_darkestSecret(std::string input);
	void		setter(std::string str, void (phonebook::*f)(std::string));

};

#endif
