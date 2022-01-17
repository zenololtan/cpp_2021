#include "Span.hpp"

void	failCheck()
{
	try {
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(69);
	} catch (std::exception & msg) {
		std::cerr << "Error: adding number out of bounds" << std::endl;
	}
	try {
		Span sp = Span(5);

		sp.shortestSpan();
	} catch (std::exception & msg) {
		std::cerr << "Error: no elements or only one element in object" << std::endl;
	}
}

void	shortCheck()
{
	try {
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "smallest span: " << sp.shortestSpan() << std::endl;
	} catch (std::exception & msg) {
		std::cerr << "Error: adding number out of bounds" << std::endl;
	}
}

void	longCheck()
{
	try {
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	} catch (std::exception & msg) {
		std::cerr << "Error: adding number out of bounds" << std::endl;
	}
}

void	edgecaseCheck()
{
	Span sp = Span(5);

	sp.addNumber(INT_MIN);
	sp.addNumber(INT_MAX);
	// sp.addNumber(2);
	// sp.addNumber(-1);
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << "smallest span: " << sp.shortestSpan() << std::endl;
}

int main()
{
	failCheck();
	shortCheck();
	longCheck();
	edgecaseCheck();
}
