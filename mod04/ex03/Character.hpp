#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# define INVENTORY_SIZE 3

class Character : public ICharacter
{
	protected:
		/*--------------------------Member variables--------------------------*/
		std::string	_name;
		AMateria*	_inventory[INVENTORY_SIZE + 1];
		int			_equiped;
	public:
		/*----------------------------Coplien form----------------------------*/
		Character();
		Character(const Character &ref);
		Character& operator=(const Character &ref);
		~Character();

		/*--------------------------Member functions--------------------------*/
		Character(std::string name);
		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
