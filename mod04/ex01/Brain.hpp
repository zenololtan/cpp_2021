#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	ideas[100];
	public:
		/*----------------------------Coplien form----------------------------*/
		Brain();
		Brain(const Brain &ref);
		Brain&	operator=(const Brain &ref);
		virtual ~Brain();

		/*--------------------------Member functions--------------------------*/
		void	thinkStuff();
		void	thinkAloud();
		
};

#endif
