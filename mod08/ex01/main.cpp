#include "Span.hpp"
#include "output.hpp"
#include <cstdlib>
#include <limits>

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
		std::cerr << msg.what() << std::endl;
	}
	try {
		Span sp = Span(5);

		sp.shortestSpan();
	} catch (std::exception & msg) {
		std::cerr << msg.what() << std::endl;
	}
	try {
		Span sp = Span(5);

		sp.longestSpan();
	} catch (std::exception & msg) {
		std::cerr << msg.what() << std::endl;
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

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	} catch (std::exception & msg) {
		std::cerr << msg.what() << std::endl;
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
		std::cerr << msg.what() << std::endl;
	}
}

void	edgecaseCheck()
{
	try{
		Span sp = Span(5);

		sp.addNumber(std::numeric_limits<int>::min());
		sp.addNumber(std::numeric_limits<int>::max());
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	} catch (std::exception & msg) {
		std::cerr << msg.what() << std::endl;
	}
	try {
		Span sp = Span(10010);
		std::vector<int> vec(10010);

		std::generate(vec.begin(), vec.end(), arc4random);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	} catch (std::exception & msg) {
		std::cerr << msg.what() << std::endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	print_divider(MAGENTA, "FAIL TEST");
	failCheck();
	print_divider(MAGENTA, "SHORT TEST");
	shortCheck();
	print_divider(MAGENTA, "LONG TEST");
	longCheck();
	print_divider(MAGENTA, "EDGECASE TEST");
	edgecaseCheck();
}
