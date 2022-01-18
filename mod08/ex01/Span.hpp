#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span : public std::vector<int>
{
	public:
		/*----------------------------Coplien form----------------------------*/
		Span(unsigned int size);
		Span(const Span &ref);
		Span& operator=(const Span &ref);
		virtual ~Span();

		/*--------------------------Member functions--------------------------*/
		void			addNumber(int num);
		void			addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

};

std::ostream&	operator<<(std::ostream& os, const Span& spn);

#endif
