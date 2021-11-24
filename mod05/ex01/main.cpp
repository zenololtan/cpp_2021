#include "Bureaucrat.hpp"
#include "output.hpp"
#include <exception>
#include <ostream>

void	test_too_low_const()
{	
	print_divider(MAGENTA, "Too low construct test");
	try {	
		Form	new_form2("Form two", 151, 1);
		std::cout << new_form2 << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Form	new_form3("Form three", 1, 151);
		std::cout << new_form3 << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_too_high_const()
{
	print_divider(MAGENTA, "Too high construct test");
	try {
		Form	new_form2("Form two", 0, 150);
		std::cout << new_form2 << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	
	try {
		Form	new_form3("Form three", 150, 0);
		std::cout << new_form3 << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_succesfull_sign()
{
	print_divider(MAGENTA, "succesfull sign test");
	Bureaucrat new_bureaucrat("xXxFormSigner69xXx", 100);
	std::cout << new_bureaucrat << std::endl;

	Form	new_form("Form", 100, 20);
	std::cout << new_form << std::endl;
	new_bureaucrat.signForm(new_form);
	std::cout << new_form << std::endl;
}

void	test_unsuccesfull_sign()
{
	print_divider(MAGENTA, "unsuccesfull sign test");
	Bureaucrat new_bureaucrat("Scrublord", 100);
	std::cout << new_bureaucrat << std::endl;

	Form	new_form("Form", 99, 20);
	std::cout << new_form << std::endl;
	new_bureaucrat.signForm(new_form);
	std::cout << new_form << std::endl;
}

int	main()
{

	test_too_high_const();
	test_too_low_const();
	test_succesfull_sign();
	test_unsuccesfull_sign();
	print_divider(MAGENTA, "End");

	return 0;
}
