#include "Bureaucrat.hpp"
#include "output.hpp"
#include <exception>
#include <ostream>

void	test_too_low()
{
	print_divider(MAGENTA, "Too low score test");
	try {
		Bureaucrat newB("BillyBoy2", 151);
		std::cout << newB << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_too_high()
{
	print_divider(MAGENTA, "Too high score test");
	try {
		Bureaucrat newB("BillyBoy3", 0);
		std::cout << newB << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_inc_too_high()
{
	print_divider(MAGENTA, "Too high inc test");
	try {
		Bureaucrat newB("BillyBoy4", 1);
		std::cout << newB << std::endl;
		newB.incGrade();
		std::cout << newB << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_dec_too_low()
{
	print_divider(MAGENTA, "Too low dec test");
	try {
		Bureaucrat newB("BillyBoy5", 150);
		std::cout << newB << std::endl;
		newB.decGrade(); // Everything untill error throwing function will be executed
		std::cout << newB << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_justenoughigh(void)
{

	print_divider(MAGENTA, "just enough inc test");
	try {
		Bureaucrat newB("BilbyBruhv", 2);
		std::cout << newB << std::endl;
		newB.incGrade(); // should work
		std::cout << newB << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void	test_justenouglow(void)
{

	print_divider(MAGENTA, "just enough dec test");
	try {
		Bureaucrat newB("BilbyBruhv2", 149);
		std::cout << newB << std::endl;
		newB.decGrade(); // should work
		std::cout << newB << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}
int	main()
{
	Bureaucrat new_bureaucrat("BillyBoy", 100);
	std::cout << new_bureaucrat << std::endl;
	
//	Bureaucrat toohigh("Bilby boy", 0);
//	std:: cout << toohigh << std::endl;

//	Bureaucrat toolow("Bilbruh boy", 151);
//	std:: cout << toolow << std::endl;

	test_too_low();
	test_too_high();
	test_inc_too_high();
	test_dec_too_low();
	test_justenoughigh();
	test_justenouglow();
	print_divider(MAGENTA, "End");

	return 0;
}
