#include "Point.hpp"

void	test(Point a, Point b, Point c, Point pt, bool correct)
{
	if (correct)
		std::cout << "--------correct test--------" << std::endl;
	else
		std::cout << "-------incorrect test--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

int	main()
{
	std::cout << "ints" << std::endl;
	test(Point(-1, 0), Point(1, 3), Point(3, 1), Point(3, 1), false);
	test(Point(0, 0), Point(1, 3), Point(3, 1), Point(5, 5), false);
	test(Point(-1, 1), Point(1, 3), Point(3, 1), Point(2, 1), true);
	test(Point(1, 1), Point(1, 3), Point(3, 1), Point(4, 1), false);
	std::cout << "floats" << std::endl;
	test(Point(-1.34512f, 0.34512f), Point(1.342312f, 3.341212f), Point(3.34512f, 1.34512f), Point(3.34512f, 1.34512f), false);
	test(Point(0.34512f, 0), Point(1, 3.34512f), Point(3.34512f, 1), Point(5.34512f, 5.34512f), false);
	test(Point(1.34512f, 1.34512f), Point(1.34512f, 3.34512f), Point(3.34512f, 1.34512f), Point(2.34512f, 1.34512f), true);
	test(Point(1.34512f, 1.34512f), Point(1.34512f, 3.34512f), Point(3.34512f, 1.34512f), Point(4.34512f, 1.34512f), false);
	std::cout << "mix" << std::endl;
	test(Point(-1.34512f, 0), Point(1.342312f, 3.341212f), Point(3, 1.34512f), Point(3, 1.34512f), false);
	test(Point(0.34512f, 0), Point(1, 3.34512f), Point(3, 1), Point(5.34512f, 5), false);
	test(Point(1, 1.34512f), Point(1.34512f, 3), Point(3.34512f, 1), Point(2.34512f, 1), true);
	test(Point(1.34512f, 1), Point(1, 3.34512f), Point(3, 1.34512f), Point(4, 1.34512f), false);
	test(Point(1, 1), Point(1, 8), Point(5, 5), Point(4, 2), true);
	return (0);
}
