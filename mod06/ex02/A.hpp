#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
# include <iostream>

class A : public Base
{
	private:
		/*--------------------------Member variables--------------------------*/

	public:
		/*----------------------------Coplien form----------------------------*/
		A();
		A(const A &ref);
		A& operator=(const A &ref);
		~A();

		/*--------------------------Member functions--------------------------*/

};

#endif
