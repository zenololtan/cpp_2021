#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		/*--------------------------Member variables--------------------------*/
		std::string	_type;

	public:
		/*----------------------------Coplien form----------------------------*/
		Animal();
		Animal(const Animal &ref);
		Animal&			operator=(const Animal &ref);
		virtual ~Animal();

		/*--------------------------Member functions--------------------------*/
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif
