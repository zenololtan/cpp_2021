#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{
	private:
		/*--------------------------Member variables--------------------------*/
		int *arr;
		unsigned int n;

		Span();
	public:
		/*----------------------------Coplien form----------------------------*/
		Span(unsigned int n);
		Span(const Span &ref);
		Span& operator=(const Span &ref);
		~Span();

		/*--------------------------Member functions--------------------------*/

};

#endif
