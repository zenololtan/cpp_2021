#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <functional>
# include <vector>
# include <stdlib.h>

class Span
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::vector<int> vec;
		unsigned int index;
		unsigned int size;

		Span();
	public:
		/*----------------------------Coplien form----------------------------*/
		Span(unsigned int n);
		Span(const Span &ref);
		Span& operator=(const Span &ref);
		~Span();

		/*--------------------------Member functions--------------------------*/
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
		void	prnt();
};

#endif
