#include "MutantStack.hpp"
#include "output.hpp"
#include <sstream>

void	std_check()
{
	print_divider(MAGENTA, "Standard test");
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	basic_check()
{
	MutantStack<std::string> og_stack;
	std::stringstream ss;

	for (int i = 0; i < 5; i++)
	{
		ss << i + 1;
		og_stack.push("hi " + ss.str());
		ss.str("");
	}

	print_divider(MAGENTA, "Initializing a normal stack");
	std::cout << "og_stack" << std::endl;
	std::cout << "top: " << og_stack.top() << std::endl;
	std::cout << "size: " << og_stack.size() << std::endl;

	print_divider(MAGENTA, "Initializing a stack with equals opperator");
	MutantStack<std::string> cp_stack = og_stack;
	std::cout << "cp_stack" << std::endl;
	std::cout << "top: " << cp_stack.top() << std::endl;
	std::cout << "size: " << cp_stack.size() << std::endl;

	print_divider(MAGENTA, "Initializing a stack with copy constructor");
	MutantStack<std::string> cp_init_stack(cp_stack);
	std::cout << "cp_init_stack" << std::endl;
	std::cout << "top: " << cp_init_stack.top() << std::endl;
	std::cout << "size: " << cp_init_stack.size() << std::endl;
}

void itr_check()
{
	MutantStack<std::string> og_stack;
	std::stringstream ss;

	for (int i = 0; i < 5; i++)
	{
		ss << i + 1;
		og_stack.push("hi " + ss.str());
		ss.str("");
	}

	print_divider(MAGENTA, "iterator");
	std::cout << "{";
	for (MutantStack<std::string>::iterator it = og_stack.begin(); it != og_stack.end(); it++)
	{
		if (it != --og_stack.end())
			std::cout << *it << ", ";
		else
			std::cout << *it;
	}
	std::cout << "}" << std::endl;

	print_divider(MAGENTA, "reverse iterator");
	std::cout << "{";
	for (MutantStack<std::string>::reverse_iterator it = og_stack.rbegin(); it != og_stack.rend(); it++)
	{
		if (it != --og_stack.rend())
			std::cout << *it << ", ";
		else
			std::cout << *it;
	}
	std::cout << "}" << std::endl;
}

int main()
{
	std_check();
	basic_check();
	itr_check();
}
