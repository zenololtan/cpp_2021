#include "Array.hpp"
#include "output.hpp"

void test_str() {
	print_divider(MAGENTA, "TEST STR");
	Array<std::string> poopie;
	Array<std::string> arr2(5);

	std::cout << "size: " << poopie.size() << std::endl;
	std::cout << "size: " << arr2.size() << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++) {
		std::cout << arr2[i] << ", ";
		arr2[i] = "yoooooo " + std::to_string(i);
	}
	std::cout << std::endl;
	Array<std::string> arr3(arr2);
	std::cout << "size: " << arr3.size() << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++) {
		std::cout << arr3[i] << ", ";
	}
	std::cout << std::endl;
	arr3 = poopie;
	std::cout << "size: " << arr3.size() << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++) {
		std::cout << arr3[i] << ", ";
	}
	std::cout << std::endl;
}

void test_int() {
	print_divider(MAGENTA, "TEST INT");
	Array<int> poopie;
	Array<int> arr2(5);

	std::cout << "size: " << poopie.size() << std::endl;
	std::cout << "size: " << arr2.size() << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++) {
		std::cout << arr2[i] << ", ";
		arr2[i] = i;
	}
	std::cout << std::endl;
	Array<int> arr3(arr2);
	std::cout << "size: " << arr3.size() << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++) {
		std::cout << arr3[i] << ", ";
	}
	std::cout << std::endl;
	arr3 = poopie;
	std::cout << "size: " << arr3.size() << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++) {
		std::cout << arr3[i] << ", ";
	}
	std::cout << std::endl;
}

void	emty_arr() {
	print_divider(MAGENTA, "TEST BASIC STUFF");
	Array<std::string> test;

	std::cout << "size: " << test.size() << std::endl;
	try {
		test[1] = "lol";
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

#define MAX_VAL 750

void def_test()
{
	print_divider(MAGENTA, "GIVEN TEST");
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << numbers[i] << ", ";
    }
	std::cout << std::endl;
    delete [] mirror;//
}

int main() {
	def_test();
	emty_arr();
	test_int();
	test_str();
	return (0);
}
