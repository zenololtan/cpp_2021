#include "Intern.hpp"
#include "output.hpp"

# define N_FORMS 3
/*--------------------------------Coplien form--------------------------------*/
Intern::Intern()
{
	/*Constructor*/
	std::cout << YELLOW << "Intern default constructor called" << RESET << std::endl;
}

Intern::~Intern()
{
	/*Destructor*/
	std::cout << YELLOW << "Intern destructor called" << RESET << std::endl;
}

Intern::Intern(const Intern &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "Intern copy constructor called" << RESET << std::endl;
	*this = ref;
}

Intern&	Intern::operator=(const Intern &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Intern assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

Form* Intern::makeForm(std::string form, std::string target)
{
	Form* (*makers[N_FORMS])(std::string target) =
		{makeShrubberyCreationForm, makeRobotomyRequestForm, makePresidentialPardonForm};
	const static std::string forms[N_FORMS] =
		{"shrubbery creation", "robotomy request", "presidential pardon"};

	for (size_t i = 0; i < N_FORMS; i++) {
		if (forms[i] == form) {
			std::cout << "Intern creates " << form << std::endl;
			return (makers[i])(target);
		}
	}
	std::cout << "Cannot make form: invalid name" << std::endl;
	return NULL;
}
