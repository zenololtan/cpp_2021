#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# define SPELLBOOK_SIZE 3

class MateriaSource : public IMateriaSource
{
	private:
		/*--------------------------Member variables--------------------------*/
		int			_count;
		AMateria	*_spellbook[SPELLBOOK_SIZE + 1];

	public:
		/*----------------------------Coplien form----------------------------*/
		MateriaSource();
		MateriaSource(const MateriaSource &ref);
		MateriaSource& operator=(const MateriaSource &ref);
		~MateriaSource();

		/*--------------------------Member functions--------------------------*/
		void			learnMateria(AMateria* type);
		AMateria*		createMateria(std::string const & type);
};

#endif
