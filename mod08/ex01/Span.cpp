#include "Span.hpp"
#include "output.hpp"
#include <stdexcept>
#include <limits>
#include <algorithm>
#include <cstdlib>

/*--------------------------------Coplien form--------------------------------*/
Span::Span(unsigned int size)
{
	/*Constructor*/
	this->reserve(size);
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
		std::vector<int>::operator=(ref);
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	Span::addNumber(int num)
{
	if (this->size() == this->capacity())
		throw std::runtime_error("Error: adding number out of bounds");
	this->push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	while (first != last)
		addNumber(*first++);
}

unsigned int	Span::shortestSpan() const
{
	std::vector<int>	cp(*this);
	unsigned int		shortestSpan = std::numeric_limits<unsigned int>::max();

	if (this->empty() || this->size() == 1)
		throw std::runtime_error("Error: not enough numbers to get a span");
	std::sort(cp.begin(), cp.end(), std::less<int>());
	for (unsigned int i = cp.size() - 1; i != 0; i--){
		shortestSpan = std::min(shortestSpan, (unsigned int)(cp[i] - cp[i - 1]));
	}
	return (shortestSpan);
}

unsigned int	Span::longestSpan() const
{
	if (this->empty() || this->size() == 1)
		throw std::runtime_error("Error: not enough numbers to get a span");
	return *(std::max_element(this->begin(), this->end())) - *(std::min_element(this->begin(), this->end()));
}

std::ostream&	operator<<(std::ostream& os, const Span& vec)
{
	os << "{";
    for (std::vector<const int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		if (*it != *(--vec.end()))
			os << *it << ", ";
		else
			os << *it;
	}
	os << "}";
    return os;
}
