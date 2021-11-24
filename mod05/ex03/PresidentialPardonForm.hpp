#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	_Target;

		PresidentialPardonForm();
	public:
		/*----------------------------Coplien form----------------------------*/
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &ref);
		~PresidentialPardonForm();

		/*--------------------------Member functions--------------------------*/
		void		execute(Bureaucrat const &executor) const;
};

#endif
