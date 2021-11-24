#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>

class RobotomyRequestForm : public Form
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string _Target;

		RobotomyRequestForm();
	public:
		/*----------------------------Coplien form----------------------------*/
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &ref);
		~RobotomyRequestForm();

		/*--------------------------Member functions--------------------------*/
		void	action(const Bureaucrat &ref) const;
};

#endif
