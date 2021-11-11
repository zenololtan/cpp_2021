#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

void	print_divider(std::string message)
{
	std::cout << "--------------------------------------" <<
		std::endl << message << std::endl <<
		"--------------------------------------" << std::endl;
}

void	subject_test()
{
	print_divider("Subject test");

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter		*me = new Character("me");
	AMateria		*tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter		*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;

	delete src;

	print_divider("end");
}

void	extra_tests(void)
{
	print_divider("Extra tests");

	// Using string literals for testing purposes
	const char		*ice = "ice";
	const char		*cure = "cure";
	const char		*fire = "fire";

	MateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	MateriaSource	*copy = new MateriaSource();	// Concrete class to allow copying
	*copy = *src; 				// Testing assignation
	ICharacter		*hero = new Character("Billy Hatcher");
	ICharacter		*enemy = new Character("Some evil dragon, or something");
	
	AMateria*		tmp;

	// Equipping while checking to see if materia exists in src.
	AMateria *tmp1 = copy->createMateria(ice);
	if (tmp1 != 0)
		hero->equip(tmp1);
	tmp = copy->createMateria(cure);
	if (tmp != 0)
		hero->equip(tmp);
	// Erroneous materia
	tmp = copy->createMateria(fire);
	if (tmp != 0)
		hero->equip(tmp);

	hero->use(0, *enemy);		// Shoot ice bolt at NAME
	hero->use(1, *enemy);		// heals NAME's wounds

	hero->unequip(0);
	hero->use(0, *enemy);		// Nothing, 0 unequiped
	hero->use(1, *enemy);		// heals NAME's wounds

	hero->equip(tmp1);

	// Shouldn't be equipped, Character class rejects NULL pointer.
	hero->equip(copy->createMateria("fire"));

	hero->use(0, *enemy);		// Shoot ice bolt at NAME (ice re-equipped)

	hero->use(2, *enemy);		// Nothing, as no equipped item at 2.
	hero->use(-1, *enemy);		// Nothing, index out of range
	hero->use(10, *enemy);		// Nothing, index out of range

	delete hero;
	delete enemy;
	delete src;
	delete copy;

	delete tmp;
	print_divider("end");
}

int	main()
{
	subject_test();
	extra_tests();

	system("leaks Materia");
	return 0;
}
