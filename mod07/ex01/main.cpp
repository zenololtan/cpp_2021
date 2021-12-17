#include "Iter.hpp"
#include <iostream>
#include <string>

void	test_func(int &i)
{
	i += 1;
}

void	prINT(const int &i)
{
	std::cout << i << std::endl;
}

void	test_str_func(std::string &str)
{
	std::transform(str.begin(), str.end(),str.begin(), ::toupper);
}

void	print_str(std::string str)
{
	std::cout << str << std::endl;
}

int main()
{
	int test[10];
	std::string teststr[10];

	for (int i = 0; i < 10; i++)
	{
		test[i] = i;
		teststr[i] = "test " + std::to_string(i);
	}
		
	for (int i = 0; i < 10; i++)
		std::cout << test[i] << ", ";
	std::cout << std::endl;
	iter(test, 10, prINT);
	iter(test, 10, test_func);
	for (int i = 0; i < 10; i++)
		std::cout << test[i] << ", ";
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << teststr[i] << ", ";
	std::cout << std::endl;
	iter(teststr, 10, print_str);
	iter(teststr, 10, test_str_func);
	for (int i = 0; i < 10; i++)
		std::cout << teststr[i] << ", ";
	std::cout << std::endl;
	return (0);
}
