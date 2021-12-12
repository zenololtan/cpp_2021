#ifndef B_HPP
# define B_HPP

# include "Base.hpp"
# include <iostream>

class B : public Base
{
	private:
		/*--------------------------Member variables--------------------------*/
	public:
		/*----------------------------Coplien form----------------------------*/
		B();
		B(const B &ref);
		B& operator=(const B &ref);
		~B();

		/*--------------------------Member functions--------------------------*/

};

#endif
