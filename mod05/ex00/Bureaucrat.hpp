#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
# include <iostream>

class Bureaucrat
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string _Name;
		int			_Grade;

		Bureaucrat();
	public:
		/*----------------------------Coplien form----------------------------*/
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &ref);
		Bureaucrat& operator=(const Bureaucrat &ref);
		~Bureaucrat();

		/*--------------------------Member functions--------------------------*/
		std::string getName() const;
		int			getGrade() const;
		void		incGrade();
		void		decGrade();
		
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
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &ref);

#endif
