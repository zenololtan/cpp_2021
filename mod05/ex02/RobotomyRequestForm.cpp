#include "RobotomyRequestForm.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form::Form("RobotomyRequestForm", 72, 45), _Target(target)
{
	/*Constructor*/
	std::cout << YELLOW << "RobotomyRequestForm default constructor called" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	/*Destructor*/
	std::cout << YELLOW << "RobotomyRequestForm destructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : Form::Form(ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "RobotomyRequestForm copy constructor called" << RESET << std::endl;
	*this = ref;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "RobotomyRequestForm assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->_Target = ref._Target;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	RobotomyRequestForm::action(const Bureaucrat &ref) const
{
	static int i = 0;

	Form::execute(ref);
	if (i == 2)
		i = 0;
	std::cout << "Drill drill drill... ";
	if (i % 2)
		std::cout << _Target << " has been robotomized successfully" << std::endl;
	else
		std::cout << " robotomization has failed :'(" << std::endl;
	i++;
}
