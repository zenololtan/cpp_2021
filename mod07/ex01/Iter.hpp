#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<class T, typename F>
void	iter(T &a, int len, F func)
{
	for (int i = 0; i < len; i++)
		func(a[i]);
}

#endif
