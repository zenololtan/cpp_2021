#include "Span.hpp"
#include "output.hpp"

/*--------------------------------Coplien form--------------------------------*/
Span::Span(unsigned int num) : index(0), size(num)
{
	/*Constructor*/
	// vec = std::vector<int>;
	std::cout << YELLOW << "Span default constructor called" << RESET << std::endl;
}

Span::~Span()
{
	/*Destructor*/
	std::cout << YELLOW << "Span destructor called" << RESET << std::endl;
}

Span::Span(const Span &ref)
{
	/*Copy constructor*/
	std::cout << BOLD << "Span copy constructor called" << RESET << std::endl;
	*this = ref;
}

Span&	Span::operator=(const Span &ref)
{
	/*Assignation operator*/
	std::cout << BOLD << "Span assignation overload called" << RESET << std::endl;
	if (this != &ref)
	{
		/* assign member variables*/
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	Span::addNumber(int num)
{
	if (index >= size)
		throw std::exception();
	vec.push_back(num);
	index++;
}

int		Span::shortestSpan()
{
	std::vector<int> cp(vec);
	int diff = INT_MAX;

	if (cp.size() <= 1)
		throw std::exception();
	std::sort(cp.begin(), cp.end(), std::less<int>());
	for (unsigned int i = 0; i < cp.size() - 1; i++)
	{
		if (diff > abs(cp[i] - cp[i + 1]))
			diff = abs(cp[i] - cp[i + 1]);
	}
	return (diff);
}

int		Span::longestSpan()
{
	std::vector<int> cp(vec);

	std::sort(cp.begin(), cp.end(), std::less<int>());
	return (abs(cp.back() - cp.front()));
}

void	Span::prnt()
{
	std::cout << "vec: {";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << ", ";
	std::cout << "}" << std::endl;
}
