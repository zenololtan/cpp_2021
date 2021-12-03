#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
	private:
		/*--------------------------Member variables--------------------------*/

	public:
		/*----------------------------Coplien form----------------------------*/
		Base();
		Base(const Base &ref);
		Base& operator=(const Base &ref);
		~Base();

		/*--------------------------Member functions--------------------------*/

};

std::ostream&	operator<<(std::ostream &out, const Base &ref);

#endif
