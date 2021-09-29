/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:51 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/29 22:13:16 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

Karen::Karen(const Karen &copy)
{
	*this = copy;
}

Karen&	Karen::operator=(const Karen& copy)
{
	if (this != &copy)
	{
		/*val = copy.val;*/
	}
	return *this;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don’t put enough! If you did I would not have ";
	std::cout << "to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been ";
	std::cout << "coming here for years and you just started working ";
	std::cout << "here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the ";
	std::cout << "manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	typedef		void(Karen::*f)(void);
	f			list[4];
	
	list[0] = &Karen::debug;
	list[1] = &Karen::info;
	list[2] = &Karen::warning;
	list[3] = &Karen::error;

	// if (level == "DEBUG")
	// 	(this->*list[0])();
	// if (level == "INFO")
	// 	(this->*list[1])();
	// if (level == "WARNING")
	// 	(this->*list[2])();
	// if (level == "ERROR")
	// 	(this->*list[3])();
	switch(atoi(level.c_str()))
	{
		case (const int)(atoi("DEBUG")):
			(this->*list[0])();

	}
}
