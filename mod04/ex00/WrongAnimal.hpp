#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	_type;

	public:
		/*----------------------------Coplien form----------------------------*/
		WrongAnimal();
		WrongAnimal(const WrongAnimal &ref);
		WrongAnimal&			operator=(const WrongAnimal &ref);
		virtual ~WrongAnimal();

		/*--------------------------Member functions--------------------------*/
		void			setType(std::string name);
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif
