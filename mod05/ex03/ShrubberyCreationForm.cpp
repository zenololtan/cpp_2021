#include "ShrubberyCreationForm.hpp"
#include "output.hpp"
#include <fstream>

/*--------------------------------Coplien form--------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form::Form("ShrubberyCreationForm", 145, 137), _Target(target)
{
	/*Constructor*/
	std::cout << YELLOW << "ShrubberyCreationForm default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	/*Destructor*/
	std::cout << YELLOW << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : Form::Form(ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
	*this = ref;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "ShrubberyCreationForm assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->Form::operator=(ref);
		this->_Target = ref._Target;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::cout << "action" << std::endl;
	Form::valid_ex(executor);
	std::ofstream myfile(_Target + "_shrubbery");

	myfile << "ASCII trees";
	myfile.close();
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return _Target;
}
