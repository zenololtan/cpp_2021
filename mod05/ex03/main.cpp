#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "output.hpp"
#include <exception>
#include <ostream>


int	main()
{
	Bureaucrat Bilby("broman", 1);
	Intern intern;
	std::string forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		"invalid form" };

	for (size_t i = 0; i < 4; i++) {
		Form* form = intern.makeForm(forms[i], "test target");
		if (form) {
			try {
				form->beSigned(Bilby);
				form->execute(Bilby);
			} catch (const std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
			delete form;
		} else {
			std::cout << "Form not found" << std::endl;
		}
	}
	print_divider(MAGENTA, "End");

	return 0;
}
