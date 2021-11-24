#include "Form.hpp"
#include "Intern.hpp"
#include "output.hpp"
#include <exception>
#include <ostream>

int main()
{
	Bureaucrat	bilbo("bilbo", 1);
	Intern	intern;
	std::string forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		"invalid form",
	};

	for (size_t i = 0; i < 4; i++) {
		Form* form = intern.makeForm(forms[i], "test target");
		if (form) {
			try {
				std::cout << "wtf" << std::endl;
				form->beSigned(bilbo);
				form->action(bilbo);
			} catch (const std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
			delete form;
		} else {
			std::cout << "Form not found" << std::endl;
		}
	}

	return 0;
}
