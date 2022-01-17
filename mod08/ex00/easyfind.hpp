#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <exception>

template<typename T>
typename T::iterator easyfind(T arr, int val) {
	typename T::iterator itr = std::find(arr.begin(), arr.end(), val);
	if (itr == arr.end())
		throw std::exception();
	return itr;
}

#endif
