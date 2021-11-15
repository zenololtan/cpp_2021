#include "Bureaucrat.hpp"
#include "output.hpp"
#include <ostream>

/*--------------------------------Coplien form--------------------------------*/
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _Name(name)
{
	/*Constructor*/
	std::cout << YELLOW << "Bureaucrat constructor called: " << _Name << RESET << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException;
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException;
	this->_Grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	/*Destructor*/
	std::cout << YELLOW << "Bureaucrat destructor called: " << _Name << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "Copy constructor called" << RESET << std::endl;
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->_Name = ref._Name;
		this->_Grade = ref._Grade;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/


std::string Bureaucrat::getName() const
{
	return _Name;
}

int			Bureaucrat::getGrade() const
{
	return _Grade;
}

void		Bureaucrat::incGrade()
{
	std::cout << "Incrementing grade" << std::endl;
	if (_Grade - 1 >  1)
		_Grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException;
}

void		Bureaucrat::decGrade()
{
	std::cout << "Decrementing grade" << std::endl;
	if (_Grade + 1 <  150)
		_Grade += 1;
	else
		throw Bureaucrat::GradeTooLowException;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &ref)
{
	/*Output operator*/
	out << "Name: " << ref.getName() << ", Grade: " << ref.getGrade();
	return out;
}
