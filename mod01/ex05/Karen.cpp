/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:34:51 by ztan          #+#    #+#                 */
/*   Updated: 2021/10/01 20:07:47 by ztan          ########   odam.nl         */
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

typedef	void(Karen::*func_t)(void);

struct	Complaint
{
	func_t		func;
	std::string	level;
};

void	Karen::complain(std::string level)
{
	int amount = 0;

	Complaint list[] = {
		{&Karen::debug, "DEBUG"},
		{&Karen::info, "INFO"},
		{&Karen::warning, "WARNING"},
		{&Karen::error, "ERROR"}
	};
	
	amount = sizeof(list) / sizeof(*list);
	for (int i = 0; i < amount; i++)
		if (level == list[i].level)
			(this->*list[i].func)();
}
