#ifndef C_HPP
# define C_HPP

# include <iostream>

class C
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

std::ostream&	operator<<(std::ostream &out, const C &ref);

#endif
