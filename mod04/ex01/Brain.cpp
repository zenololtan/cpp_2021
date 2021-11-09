#include "Brain.hpp"

/*--------------------------------Coplien form--------------------------------*/
Brain::Brain()
{
	/*Constructor*/
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	/*Destructor*/
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &ref)
{
	/*Copy constructor*/
	*this = ref;
}

Brain&	Brain::operator=(const Brain &ref)
{
	/*Assignation operator*/
	if (this != &ref)
	{
		/* assign member variables*/
		std::copy(ref.ideas, ref.ideas + 100, this->ideas);
	}
	return *this;
}
/*--------------------------------Coplien form--------------------------------*/

void	Brain::thinkStuff()
{
	for (int i = 0; i < 100; i++)
	{
		std::string a = "Im hungry ";
		ideas[i] = a.append(std::to_string(i));
	}
}

void	Brain::thinkAloud()
{
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}
