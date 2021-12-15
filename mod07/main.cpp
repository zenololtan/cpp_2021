#include "Whatever.hpp"
#include "output.hpp"

void	test_char()
{
	char a = 'A';
	char b = 'B';
	char c = 'B';

	print_divider(MAGENTA, "TEST CHAR");
	print_divider(MAGENTA, "MIN");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "MAX");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "SWAP");
	std::cout << "a: " << a << ", b: " << b << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	print_line(MAGENTA);
}

void	test_str()
{
	std::string a = "eyoooooooooooo";
	std::string b = "yup";
	std::string c = "yup";

	print_divider(MAGENTA, "TEST STRING");
	print_divider(MAGENTA, "MIN");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "MAX");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "SWAP");
	std::cout << "a: " << a << ", b: " << b << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	print_line(MAGENTA);
	std::cout << std::endl << std::endl << std::endl;
}

void	test_float()
{
	float a = 4;
	float b = 20;
	float c = 20;

	print_divider(MAGENTA, "TEST FLOAT");
	print_divider(MAGENTA, "MIN");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "MAX");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "SWAP");
	std::cout << "a: " << a << ", b: " << b << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	print_line(MAGENTA);
	std::cout << std::endl << std::endl << std::endl;
}

void	test_int()
{
	int a = 6;
	int b = 9;
	int c = 9;

	print_divider(MAGENTA, "TEST INT");
	print_divider(MAGENTA, "MIN");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "MAX");
	std::cout << "a: " << a << ", b: " << b  << ", c: " << c << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "min(b, a): " << ::min(b, a) << std::endl;
	std::cout << "min(b[" << &b << "], c[" << &c << "]): " << &::min(b, c) << std::endl;
	print_divider(MAGENTA, "SWAP");
	std::cout << "a: " << a << ", b: " << b << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	print_line(MAGENTA);
	std::cout << std::endl << std::endl << std::endl;
}

void	basic_test()
{
	int a = 2;
	int b = 3;

	print_divider(MAGENTA, "BASIC TEST");
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	print_line(MAGENTA);
	std::cout << std::endl << std::endl << std::endl;
}

int main()
{
	basic_test();
	test_int();
	test_float();
	test_str();
	test_char();
	return (0);
}
