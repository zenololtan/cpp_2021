#include "Dog.hpp"
#include "Cat.hpp"

void	copy_test()
{
	Cat *cat = new Cat();

	cat->thinkin();
	Cat *cpy(cat);
	cpy->speaking();
	delete cpy;
}

int main()
{
	Animal *array[100];

	for (int i = 0; i < 50; i++)
		array[i] = new Cat();
	for (int i = 50; i < 100; i++)
		array[i] = new Dog();
	for (int i = 0; i < 100; i++)
		delete array[i];
	
	std::cout << "Copy test---------------------" << std::endl;
	copy_test();
	// while(1) {}
	return (0);
}
