#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		/*--------------------------Member variables--------------------------*/
		const std::string	_Name;
		bool				_Signed;
		const int			_SignGrade;
		const int			_ExecGrade;

	public:
		/*----------------------------Coplien form----------------------------*/
		Form();
		Form(const Form &ref);
		Form& operator=(const Form &ref);
		virtual ~Form();

		/*--------------------------Member functions--------------------------*/
		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getSign() const;	
		
		Form(std::string name, const int &signgrade, const int &execgrade);
		void				beSigned(const Bureaucrat &ref);
		void				execute(Bureaucrat const &executor) const;
		virtual void		action(const Bureaucrat &ref) const = 0;

		/*--------------------------Exception Classes-------------------------*/
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error: Grade is too high";
			}
		} GradeTooHighException;

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error: Grade is too low";
			}
		} GradeTooLowException;

		class NotSigned : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error: Form is not signed";
			}
		} NotSigned;
};

std::ostream&	operator<<(std::ostream &out, const Form &ref);

#endif
