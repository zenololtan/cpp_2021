#include "MateriaSource.hpp"

/*--------------------------------Coplien form--------------------------------*/
MateriaSource::MateriaSource() : _count(0)
{
	/*Constructor*/
	for (int i = 0; i <= SPELLBOOK_SIZE; ++i)
		this->_spellbook[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	/*Destructor*/
	for (int i = 0; i < this->_count; ++i)
		delete this->_spellbook[i];
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	/*Copy constructor*/
	for (int i = 0; i <= this->_count; ++i)
	{
		delete this->_spellbook[i];//
		this->_spellbook[i] = NULL;
	}
	this->_count = ref._count;
	for (int i = 0; i < this->_count; ++i)
		this->_spellbook[i] = this->_spellbook[i]->clone();
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		for (int i = 0; i < this->_count; ++i)
		{
			delete this->_spellbook[i];
			this->_spellbook[i] = NULL;
		}
		this->_count = ref._count;
		for (int i = 0; i < this->_count; ++i)
			this->_spellbook[i] = ref._spellbook[i]->clone();
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void			MateriaSource::learnMateria(AMateria *type)
{
	if (type == NULL || this->_count >= 4)
		return ;
	this->_spellbook[this->_count] = type;
	++this->_count;
	std::cout << type->getType() << " has successfully been added" << std::endl;
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < this->_count; ++i)
	{
		if (this->_spellbook[i]->getType() == type)
		{
			std::cout << type << " has successfully been learned" << std::endl;
			return this->_spellbook[i]->clone();
		}
	}
	return 0;
}
