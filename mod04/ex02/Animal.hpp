#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		/*--------------------------Member variables--------------------------*/
		std::string	_type;

	public:
		/*--------------------------Member functions--------------------------*/
		virtual ~Animal();

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif
