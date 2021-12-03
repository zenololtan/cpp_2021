#ifndef B_HPP
# define B_HPP

# include <iostream>

class B
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

std::ostream&	operator<<(std::ostream &out, const B &ref);

#endif
