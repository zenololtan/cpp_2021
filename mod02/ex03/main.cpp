#include "Point.hpp"

void	correct_test_last()
{
	Point a(0.5f, 0.5f);
	Point b(1.1f, 3.1f);
	Point c(3.6f, 1.8f);
	Point pt(3.5f, 1.8f);

	std::cout << "--------correct test last--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

void	incorrect_testmix()
{
	Point a(0.5f, 0.5f);
	Point b(1.1f, 3.1f);
	Point c(3.6f, 1.8f);
	Point pt(3.7f, 1.8f);

	std::cout << "--------incorrect test--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

void	correct_testmix()
{
	Point a(0.312423535241f, 0.231f);
	Point b(1.1235f, 3.2f);
	Point c(3, 1);
	Point pt(1.1235f, 3.2f);
	std::cout << "--------correct test--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

void	incorrect_test1()
{
	Point a(0, 0);
	Point b(1, 3);
	Point c(3, 1);
	Point pt(2, 3);

	std::cout << "--------incorrect test1--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

void	correct_test1()
{
	Point a(1, 1);
	Point b(1, 3);
	Point c(3, 1);
	Point pt(2, 1);
	std::cout << "--------correct test1--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

void	incorrect_test()
{
	Point a(0, 0);
	Point b(1, 3);
	Point c(3, 1);
	Point pt(5, 5);

	std::cout << "--------incorrect test--------" << std::endl; 
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "pt:" << pt << std::endl;
	if (bsp(a, b, c, pt))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}

void	correct_test()
{
	Point a(0, 0);
	Point b(1, 3);
	Point c(3, 1);
	Point pt(3, 1);

	std::cout << "--------correct test--------" << std::endl; 
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
	correct_test();
	incorrect_test();
	correct_test1();
	incorrect_test1();
	correct_testmix();
	incorrect_testmix();
	correct_test_last();
	return (0);
}
