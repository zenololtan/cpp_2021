#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class Intern
{
	private:
		/*--------------------------Member variables--------------------------*/
		static Form* makeShrubberyCreationForm(std::string target) { return new ShrubberyCreationForm(target); }
		static Form* makeRobotomyRequestForm(std::string target) { return new RobotomyRequestForm(target); }
		static Form* makePresidentialPardonForm(std::string target) { return new PresidentialPardonForm(target); }

	public:
		/*----------------------------Coplien form----------------------------*/
		Intern();
		Intern(const Intern &ref);
		Intern& operator=(const Intern &ref);
		~Intern();

		/*--------------------------Member functions--------------------------*/
		Form* makeForm(std::string form, std::string target);
};

#endif
