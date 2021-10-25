#include "Dog.hpp"
#include "Cat.hpp"

void	test(const Animal *cpy)
{
	cpy->makeSound();
}

void	test2(Dog cpy)
{
	cpy.makeSound();
}

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog X;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	test(j);
	test2(X);
	delete j;
	delete i;
	delete meta;
}
