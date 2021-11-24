#include "PresidentialPardonForm.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form::Form("PresidentialPardonForm", 25, 5), _Target(target)
{
	/*Constructor*/
	std::cout << YELLOW << "PresidentialPardonForm default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	/*Destructor*/
	std::cout << YELLOW << "PresidentialPardonForm destructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : Form::Form(ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
	*this = ref;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "PresidentialPardonForm assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->_Target = ref._Target;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	PresidentialPardonForm::action(const Bureaucrat &ref) const
{
	Form::execute(ref);
	std::cout << _Target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
