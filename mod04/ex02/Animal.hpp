#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	_type;

	public:
		/*--------------------------Member functions--------------------------*/
		void	setType(std::string name);
		std::string		getType() const;
		virtual void	makeSound() const = 0;
				virtual ~Animal();
};

#endif
