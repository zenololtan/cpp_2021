#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	_Target;
		
		ShrubberyCreationForm();
	public:
		/*----------------------------Coplien form----------------------------*/
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &ref);
		~ShrubberyCreationForm();

		/*--------------------------Member functions--------------------------*/
		std::string	getTarget() const;
		void		action(const Bureaucrat &ref) const;
};

#endif
