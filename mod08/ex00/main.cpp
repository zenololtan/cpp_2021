#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int main () {
	int val[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
	try {
		std::vector<int> vec;
		vec.assign(val, val + 10);
		std::cout << "vec finding 2: " << *easyfind(vec, 2) << std::endl;
		std::cout << "vec finding 69: " << *easyfind(vec, 69) << std::endl;
	} catch (std::exception & msg) {
		std::cerr << "array does not contain number" << std::endl;
	}

	try {
		std::list<int> lst;
		lst.assign(val, val + 10);
		std::cout << "lst finding 2: " << *easyfind(lst, 2) << std::endl;
		std::cout << "lst finding 11: " << *easyfind(lst, 11) << std::endl;
	} catch (std::exception & msg) {
		std::cerr << "array does not contain number" << std::endl;
	}
}
