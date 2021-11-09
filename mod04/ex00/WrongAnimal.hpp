#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		/*--------------------------Member variables--------------------------*/
		std::string	_type;

	public:
		/*----------------------------Coplien form----------------------------*/
		WrongAnimal();
		WrongAnimal(const WrongAnimal &ref);
		WrongAnimal&			operator=(const WrongAnimal &ref);
		virtual ~WrongAnimal();

		/*--------------------------Member functions--------------------------*/
		std::string		getType() const;
		void			makeSound() const;
};

#endif
