#include "Character.hpp"

/*--------------------------------Coplien form--------------------------------*/
Character::Character() : _name("Default"), _equiped(0)
{
	/*Constructor*/
	for (int i = 0; i <= INVENTORY_SIZE; ++i)
		this->_inventory[i] = NULL;
	std::cout << _name << " has spawned" << std::endl;
}

Character::~Character()
{
	/*Destructor*/
	for (int i = 0; i <= INVENTORY_SIZE; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout << _name << " has freaking DIED" << std::endl;
}

Character::Character(const Character &ref)
{
	/*Copy constructor*/
	*this = ref;
}

Character&	Character::operator=(const Character &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
		this->_name = ref._name;
		for (int i = 0; i <= INVENTORY_SIZE; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = ref._inventory[i]->clone();
		}
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

Character::Character(std::string name) : _name(name), _equiped(0)
{
	/*Constructor*/
	for (int i = 0; i <= INVENTORY_SIZE; ++i)
		this->_inventory[i] = NULL;
	std::cout << _name << " has spawned" << std::endl;
}

std::string const&	Character::getName() const
{
	return _name;
}

void				Character::equip(AMateria* m)
{
	bool equiped = false;
	int n;

	if (!m)
		return ;
	for (int i = 0; i <= INVENTORY_SIZE; ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			equiped = true;
			n = i;
			break ;
		}
	}
	if (equiped == true)
		std::cout << m->getType() << " has been equiped in slot " << n << ", " << 3 - n << "/4 slots left" << std::endl;
	else
		std::cout << "Could not equip " << m->getType() << std::endl;
}

void				Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= INVENTORY_SIZE) && this->_inventory[idx] != NULL)
	{
		std::cout << "Unequiped " << this->_inventory[idx]->getType() << " from slot " << idx << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "Invalid index or no item to unequip" << std::endl;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= INVENTORY_SIZE && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
