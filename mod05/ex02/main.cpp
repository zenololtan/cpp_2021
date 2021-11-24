#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "output.hpp"
#include <exception>
#include <ostream>

void	test_robo()
{
	print_divider(MAGENTA, "RobotomyRequestForm");
	try
	{
		Bureaucrat billy("billy", 45);
		RobotomyRequestForm new_form("something");
		std::cout << new_form << std::endl;
		std::cout << billy << std::endl;

		billy.signForm(new_form);
		new_form.execute(billy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	test_pres()
{
	print_divider(MAGENTA, "PresidentialPardonForm");
	try
	{
		Bureaucrat billy("billy", 5);
		PresidentialPardonForm new_form("something");
		std::cout << new_form << std::endl;
		std::cout << billy << std::endl;

		billy.signForm(new_form);
		new_form.execute(billy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	test_shrub()
{
	print_divider(MAGENTA, "ShrubberyCreationForm");
	try
	{
		Bureaucrat billy("billy", 137);
		ShrubberyCreationForm new_form("something");
		std::cout << new_form << std::endl;
		std::cout << billy << std::endl;

		billy.signForm(new_form);
		new_form.execute(billy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	basic_copy_test()
{
	print_divider(MAGENTA, "basic assign test");
	ShrubberyCreationForm	test("Test");// should only copy the _Issigned since rest is const
	Bureaucrat billy("billy", 137);
	billy.signForm(test);
	std::cout << test << std::endl;
	ShrubberyCreationForm	test2(test);
	std::cout << test2 << std::endl;
}

void	basic_assign_test()
{
	print_divider(MAGENTA, "basic assign test");
	ShrubberyCreationForm	test("Test");
	ShrubberyCreationForm	test2("Test2");
	Bureaucrat billy("billy", 137);
	billy.signForm(test);
	std::cout << test << std::endl;
	test2 = test;
	std::cout << test2 << std::endl;
}

int	main()
{
	basic_assign_test();
	basic_copy_test();
	test_shrub();
	test_pres();
	test_robo();
	print_divider(MAGENTA, "End");

	return 0;
}
