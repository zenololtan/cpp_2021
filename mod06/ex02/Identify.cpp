#include "Identify.hpp"
#include <random>

Base * generate(void)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(0,200);
    int fate = dist6(rng) % 3;
    if (fate == 0)
		return dynamic_cast<Base*>(new A());
    if (fate == 1)
		return dynamic_cast<Base*>(new B());
	return dynamic_cast<Base*>(new C());
}

void identify(Base* p)
{
    std::cout << typeid(*p).name()[1] << std::endl;
}

void identify(Base& p)
{
    std::cout << typeid(p).name()[1] << std::endl;
}
