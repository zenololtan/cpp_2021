#ifndef A_HPP
# define A_HPP

# include <iostream>

class A
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

std::ostream&	operator<<(std::ostream &out, const A &ref);

#endif
