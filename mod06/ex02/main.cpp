#include "Identify.hpp"

int main()
{
	for (int i = 0; i < 100; i++)
	{
		Base *Baze = generate();
		identify(Baze);
		identify(*Baze);
		delete Baze;
	}
    return 0;
}
