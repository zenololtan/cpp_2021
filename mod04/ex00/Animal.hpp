#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	type;

	public:
		/*----------------------------Coplien form----------------------------*/
		Animal();
		Animal(const Animal &ref);
		Animal&		operator=(const Animal &ref);
		virtual ~Animal();

		/*--------------------------Member functions--------------------------*/
		void		setType(std::string name);
		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif
