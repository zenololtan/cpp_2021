/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:40:26 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/21 15:20:27 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_add(class phonebook *pb, int i)
{
	std::string	input;

	pb[i].setter("What is your name?: ", &phonebook::set_name);
	pb[i].setter("What is your surname?: ", &phonebook::set_surname);
	pb[i].setter("what is your nickname?: ", &phonebook::set_nickname);
	pb[i].setter("what is your phonenumber?: ", &phonebook::set_number);
	pb[i].setter("what are the 4 whacky numbers on the back of your bankpass?: ", &phonebook::set_bankpass);
	pb[i].setter("what is your darkest secret?: ", &phonebook::set_darkestSecret);
}

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
	width -= 1;
    if (str.length() > width)
	{
		if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
	}
    return str;
}

void	ft_makeinfo(class phonebook pb, int i)
{
	std::cout << std::setfill(' ') << std::setw(10) << std::right << i << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 truncate(pb.phonebook::get_name(), 10, true) << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 truncate(pb.phonebook::get_surname(), 10, true) << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 truncate(pb.phonebook::get_nickname(), 10, true) << std::endl;
}

void	ft_makeseperator(void)
{
	std::cout << std::setfill('-') << std::setw(10) << "-" << "|";
	std::cout << std::setfill('-') << std::setw(10) << "-" << "|";
	std::cout << std::setfill('-') << std::setw(10) << "-" << "|";
	std::cout << std::setfill('-') << std::setw(10) << "-" << std::endl;
}

void	ft_makeheader(void)
{
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "index" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "first name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "last name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "nickname" << std::endl;
	ft_makeseperator();
}

void	ft_giveinfo(class phonebook *pb, int i)
{
	std::cout << "Name: " << pb[i].phonebook::get_name() << std::endl;
	std::cout << "Surname: " << pb[i].phonebook::get_surname() << std::endl;
	std::cout << "Nickname: " << pb[i].phonebook::get_nickname() << std::endl;
	std::cout << "Number: " << pb[i].phonebook::get_number() << std::endl;
	std::cout << "Those whacky funny goofy numbers on the back of ur bankpass: " << pb[i].phonebook::get_bankpass() << std::endl;
	std::cout << "Darkest secret: " << pb[i].phonebook::get_darkestSecret() << std::endl;
}

void	ft_select(class phonebook *pb, int index)
{
	std::string	command;
	int	num;

	std::cout << "Would you like to know more??" << std::endl;
	std::getline(std::cin, command);
	if (std::cin.eof())
		exit(1);
	if (std::strlen(command) > 1 || !std::isdigit(*command.c_string()))
		return ;
	else
		num = std::atoi(*command);
	if (command.compare("NO") == 0)
		return (void)(std::cout << "aight." << std::endl);
	if (num > 0 && num <= index)
		ft_giveinfo(pb, 0);
	else if (command.compare("2") == 0)
		ft_giveinfo(pb, 1);
	else if (command.compare("3") == 0)
		ft_giveinfo(pb, 2);
	else if (command.compare("4") == 0)
		ft_giveinfo(pb, 3);
	else if (command.compare("5") == 0)
		ft_giveinfo(pb, 4);
	else if (command.compare("6") == 0)
		ft_giveinfo(pb, 5);
	else if (command.compare("7") == 0)
		ft_giveinfo(pb, 6);
	else if (command.compare("8") == 0)
		ft_giveinfo(pb, 7);
}

void	ft_search(class phonebook *pb, int amount)
{
	int i;

	i = 0;
	ft_makeheader();
	while (i < amount)
	{
		ft_makeinfo(pb[i], i + 1);
		if (i + 1 < amount)
			ft_makeseperator();
		i++;
	}
	ft_select(pb, i);
}

int main(void)
{
	phonebook	pb[8];
    std::string	command;
	static int	i;
	static int	current;

	i = 0;
	current = 0;
    while (1)
	{
		std::cout << "what u want m8..." << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(1);
		std::cout << "ur command is: " << command << std::endl;
		if (command.compare("EXIT") == 0)
		{
			std::cout << "exitting" << std::endl;
			return (0);
		}	
		if (command.compare("ADD") == 0)
		{
			ft_add(pb, current);
			current++;
			if (i < 8)
				i++;
			if (current >= 8)
				current = 0;
		}
		if (command.compare("SEARCH") == 0)
			ft_search(pb, i);
	}
    return 0;
}
