#include "Form.hpp"
#include "output.hpp"
#include <ios>

/*--------------------------------Coplien form--------------------------------*/
Form::Form() : _Name(""), _Signed(false), _SignGrade(1), _ExecGrade(1)
{
	std::cout << YELLOW << "Form default constructor called" << RESET << std::endl; 	
}

Form::Form(std::string name, const int &signgrade, const int &execgrade) : _Name(name),
	 _Signed(false), _SignGrade(signgrade), _ExecGrade(execgrade)
{
	/*Constructor*/
	std::cout << YELLOW << "Form constructor called" << RESET << std::endl; 
	std::cout << "Assigned SignGrade" << std::endl;
	if (_SignGrade > 150)
		throw Form::GradeTooLowException;
	else if (_SignGrade < 1)
		throw Form::GradeTooHighException;
	std::cout << "Assigned ExecGrade" << std::endl;
	if (_ExecGrade > 150)
		throw Form::GradeTooLowException;
	else if (_ExecGrade < 1)
		throw Form::GradeTooHighException;
}

Form::~Form()
{
	/*Destructor*/
	std::cout << YELLOW << "Form destructor called" << RESET << std::endl;
}

Form::Form(const Form &ref) : _Name(ref._Name), _Signed(ref._Signed),
	 _SignGrade(ref._SignGrade) , _ExecGrade(ref._ExecGrade)
{
	/*Copy constructor*/
	std::cout << BOLD << "Form copy constructor called" << RESET << std::endl;
	*this = ref;
}

Form&	Form::operator=(const Form &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Form assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
		this->_Signed = ref._Signed;
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

const	std::string Form::getName() const
{
	return _Name;
}

int		Form::getSignGrade() const
{
	return _SignGrade; 
}

int		Form::getExecGrade() const
{
	return _ExecGrade;
}

bool	Form::getSign() const
{
	return _Signed;
}

void	Form::beSigned(const Bureaucrat &ref)
{
	if (ref.getGrade() <= _SignGrade)
		_Signed = true;
	else
		throw Form::GradeTooLowException;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (_Signed)
	{
		if (executor.getGrade() > _ExecGrade)
			throw Form::GradeTooLowException;
	}
	else
		throw Form::NotSigned;
	
}

std::ostream&	operator<<(std::ostream &out, const Form &ref)
{
	/*Output operator*/
	out << "form_name: " << ref.getName() << ", is signed: " << std::boolalpha << ref.getSign()
		 << ", sign grade: " << ref.getSignGrade() << ", execution grade: " << ref.getExecGrade();
	return out;
}
