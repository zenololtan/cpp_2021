#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
	private:
		/*--------------------------Member variables--------------------------*/
		Base& operator=(const Base &ref);
	public:
		/*----------------------------Coplien form----------------------------*/
		Base();
		Base(const Base &ref);
		virtual ~Base();

		/*--------------------------Member functions--------------------------*/

};

#endif
