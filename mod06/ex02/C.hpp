#ifndef C_HPP
# define C_HPP

# include "Base.hpp"
# include <iostream>

class C : public Base
{
	private:
		/*--------------------------Member variables--------------------------*/

	public:
		/*----------------------------Coplien form----------------------------*/
		C();
		C(const C &ref);
		C& operator=(const C &ref);
		~C();

		/*--------------------------Member functions--------------------------*/

};

#endif
