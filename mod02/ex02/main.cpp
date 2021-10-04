/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 01:38:00 by zenotan       #+#    #+#                 */
/*   Updated: 2021/10/04 19:51:26 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

void	incr_opss()
{
	std::cout << YELLOW << "a++ opp int" << RESET << std::endl;
	Fixed a(1);
	std::cout << "int(a++):" << a << ": ";
	std::cout << (a++) << std::endl;
	
	std::cout << YELLOW << "a++ float" << RESET << std::endl;
	Fixed a_float(1.05f);
	std::cout << "int(a++):" << a_float << ": ";
	std::cout << (a_float++) << std::endl;

	std::cout << YELLOW << "++a opp int" << RESET << std::endl;
	std::cout << "int(++a):" << a << ": ";
	std::cout << (++a) << std::endl;
	
	std::cout << YELLOW << "++a float" << RESET << std::endl;
	std::cout << "int(++a):" << a_float << ": ";
	std::cout << (++a_float) << std::endl;
}

void	div_times_opss()
{
	std::cout << YELLOW << "* opp int" << RESET << std::endl;
	Fixed a(1);
	Fixed b(2);
	std::cout << "int(a * b):" << a << " and " << b << ": ";
	std::cout << (a * b) << std::endl;
	
	std::cout << YELLOW << "* float" << RESET << std::endl;
	Fixed a_float(1.05f);
	Fixed b_float(2.09f);
	std::cout << "int(a * b):" << a_float << " and " << b_float << ": ";
	std::cout << (a_float * b_float) << std::endl;
	
	std::cout << YELLOW << " * opp mix" << RESET	<< std::endl;
	std::cout << "int(a * b):" << a << " and " << a_float << ": ";
	std::cout << (a * a_float) << std::endl;
	
	std::cout << YELLOW << " / opp int" << RESET	<< std::endl;
	std::cout << "int(a / b):" << a << " and " << b << ": ";
	std::cout << (a / b) << std::endl;
	
	std::cout << YELLOW << " / float" << RESET<< std::endl;
	std::cout << "int(a / b):" << a_float << " and " << b_float << ": ";
	std::cout << (a_float / b_float) << std::endl;
	
	std::cout << YELLOW << " / opp mix" << RESET	<< std::endl;
	std::cout << "int(a / b):" << a << " and " << a_float << ": ";
	std::cout << (a / a_float) << std::endl;
}

void	plus_minus_opss()
{
	std::cout << YELLOW << " + opp int" << RESET	<< std::endl;
	Fixed a(1);
	Fixed b(2);
	std::cout << "int(a + b):" << a << " and " << b << ": ";
	std::cout << (a + b) << std::endl;
	
	std::cout << YELLOW << " + float" << RESET	<< std::endl;
	Fixed a_float(1.05f);
	Fixed b_float(2.09f);
	std::cout << "int(a + b):" << a_float << " and " << b_float << ": ";
	std::cout << (a_float + b_float) << std::endl;
	
	std::cout << YELLOW << " + opp mix" << RESET	<< std::endl;
	std::cout << "int(a + b):" << a << " and " << a_float << ": ";
	std::cout << (a + a_float) << std::endl;
	
	std::cout << YELLOW << " - opp int" << RESET	<< std::endl;
	std::cout << "int(a - b):" << a << " and " << b << ": ";
	std::cout << (a - b) << std::endl;
	
	std::cout << YELLOW << " - float" << RESET	<< std::endl;
	std::cout << "int(a - b):" << a_float << " and " << b_float << ": ";
	std::cout << (a_float - b_float) << std::endl;
	
	std::cout << YELLOW << " - opp mix" << RESET	<< std::endl;
	std::cout << "int(a - b):" << a << " and " << a_float << ": ";
	std::cout << (a - a_float) << std::endl;
}

void	eq_opp()
{
	std::cout << YELLOW << " == opp int" << RESET	<< std::endl;
	Fixed a(1);
	Fixed b(2);
	std::cout << "int(a==b):" << a << " and " << b << ": ";
	std::cout << std::boolalpha << (a == b) << std::endl;
	std::cout << "int(a==a):" << a << " and " << a << ": ";
	std::cout << std::boolalpha << (a == a) << std::endl;
	
	std::cout << YELLOW << " == opp float" << RESET	<< std::endl;
	Fixed a_float(1.05f);
	Fixed b_float(2.09f);
	std::cout << "int(a==b):" << a_float << " and " << b_float << ": ";
	std::cout << std::boolalpha << (a_float == b_float) << std::endl;
	std::cout << "int(a==a):" << a_float << " and " << a_float << ": ";
	std::cout << std::boolalpha << (a_float == a_float) << std::endl;
	
	std::cout << YELLOW << " == opp mix" << RESET	<< std::endl;
	Fixed copy(1.00000f);
	std::cout << "int(a==b):" << a << " and " << a_float << ": ";
	std::cout << std::boolalpha << (a == b_float) << std::endl;
	std::cout << "int(a==tmp):" << a << " and " << copy << ": ";
	std::cout << std::boolalpha << (a == copy) << std::endl;

	std::cout << YELLOW << " != opp int" << RESET	<< std::endl;
	std::cout << "int(a!=b):" << a << " and " << b << ": ";
	std::cout << std::boolalpha << (a != b) << std::endl;
	std::cout << "int(a!=a):" << a << " and " << a << ": ";
	std::cout << std::boolalpha << (a != a) << std::endl;
	
	std::cout << YELLOW << " != opp float" << RESET	<< std::endl;
	std::cout << "int(a!=b):" << a_float << " and " << b_float << ": ";
	std::cout << std::boolalpha << (a_float != b_float) << std::endl;
	std::cout << "int(a!=a):" << a_float << " and " << a_float << ": ";
	std::cout << std::boolalpha << (a_float != a_float) << std::endl;
	
	std::cout << YELLOW << " != opp mix" << RESET	<< std::endl;
	std::cout << "int(a!=b):" << a << " and " << a_float << ": ";
	std::cout << std::boolalpha << (a != a_float) << std::endl;
	std::cout << "int(a!=tmp):" << a << " and " << copy << ": ";
	std::cout << std::boolalpha << (a != copy) << std::endl;
}

void	comp_equals_opps()
{
	std::cout << YELLOW << "compare eq opp int" << RESET	<< std::endl;
	Fixed a(1);
	Fixed b(2);
	Fixed copy(a);
	std::cout << "int(a>=b):" << a << " and " << b << ": ";
	std::cout << std::boolalpha << (a >= b) << std::endl;
	std::cout << "int(a<=b):" << a << " and " << b << ": ";
	std::cout << std::boolalpha << (a <= b) << std::endl;
	std::cout << "equal " << a << " <= " << copy << ":";
	std::cout << std::boolalpha << (a <= copy) << std::endl;
	
	std::cout << YELLOW << "compare eq opp float" << RESET	<< std::endl;
	Fixed a_float(1.05f);
	Fixed b_float(2.09f);
	Fixed copy1(a_float);
	std::cout << "int(a>=b):" << a_float << " and " << b_float << ": ";
	std::cout << std::boolalpha << (a_float >= b_float) << std::endl;
	std::cout << "int(a<=b):" << a_float << " and " << b_float << ": ";
	std::cout << std::boolalpha << (a_float <= b_float) << std::endl;
	std::cout << "equal " << a_float << " <= " << copy1 << ":";
	std::cout << std::boolalpha << (a_float <= copy1) << std::endl;
	
	std::cout << YELLOW << "compare eq opp mix" << RESET	<< std::endl;
	Fixed copy2(1.00000f);
	std::cout << "int(a>=b):" << a << " and " << a_float << ": ";
	std::cout << std::boolalpha << (a >= a_float) << std::endl;
	std::cout << "int(a<=b):" << a_float << " and " << b << ": ";
	std::cout << std::boolalpha << (a_float <= b) << std::endl;
	std::cout << "equal " << a << " <= " << copy2 << ":";
	std::cout << std::boolalpha << (a <= copy2) << std::endl;
}

void	compare_opss()
{
	std::cout << YELLOW << "compare opp int" << RESET	<< std::endl;
	Fixed a(1);
	Fixed b(2);
	std::cout << "int(a>b):" << a << " and " << b << ": ";
	std::cout << std::boolalpha << (a > b) << std::endl;
	std::cout << "int(a<b):" << a << " and " << b << ": ";
	std::cout << std::boolalpha << (a < b) << std::endl;
	
	std::cout << YELLOW << "compare opp float" << RESET	<< std::endl;
	Fixed a_float(1.05f);
	Fixed b_float(2.09f);
	std::cout << "int(a>b):" << a_float << " and " << b_float << ": ";
	std::cout << std::boolalpha << (a_float > b_float) << std::endl;
	std::cout << "int(a<b):" << a_float << " and " << b_float << ": ";
	std::cout << std::boolalpha << (a_float < b_float) << std::endl;
	
	std::cout << YELLOW << "compare opp mix" << RESET	<< std::endl;
	std::cout << "int(a>b):" << a << " and " << a_float << ": ";
	std::cout << std::boolalpha << (a > a_float) << std::endl;
	std::cout << "int(a<b):" << a_float << " and " << b << ": ";
	std::cout << std::boolalpha << (a_float < b) << std::endl;
}

void	normal_funcs()
{
	std::cout << YELLOW << "standard constructor" << RESET	<< std::endl;
	Fixed a;
	std::cout << "standard:" << a << std::endl;
	
	std::cout << YELLOW << "copy constructor" << RESET	<< std::endl;
	Fixed copy_int(Fixed(5));
	std::cout << "int: " << copy_int << std::endl;
	Fixed copy_float(Fixed(5.5f));
	std::cout << "float: " << copy_float << std::endl;
	Fixed copy_both(Fixed(5.5f) * Fixed(2));
	std::cout << "float and int: " << copy_both << std::endl; // wrm is dit 2816
	
	std::cout << YELLOW << "int constructor" << RESET	<< std::endl;
	Fixed b(10);
	std::cout << b << std::endl;
	
	std::cout << YELLOW << "float constructor" << RESET	<< std::endl;
	Fixed c(42.069f); // 42.0703??
	std::cout << c << std::endl;
	
	std::cout << YELLOW << "assign opp" << RESET	<< std::endl;
	Fixed assign;
	assign = c;
	std::cout << "Copy:" << assign << ", copied:" << c << std::endl;
}

int	main()
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << MAGENTA << "---------------- normal_funcs ----------------" << RESET << std::endl;
	normal_funcs();
	std::cout << MAGENTA << "---------------- compare_opss ----------------" << RESET << std::endl;
	compare_opss();
	std::cout << MAGENTA << "---------------- comp_equals_opps ----------------" << RESET << std::endl;
	comp_equals_opps();
	std::cout << MAGENTA << "---------------- eq_opp ----------------" << RESET << std::endl;
	eq_opp();
	std::cout << MAGENTA << "---------------- plus_minus_opss ----------------" << RESET << std::endl;
	plus_minus_opss();
	std::cout << MAGENTA << "---------------- div_times_opss ----------------" << RESET << std::endl;
	div_times_opss();
	std::cout << MAGENTA << "---------------- incr_opss ----------------" << RESET << std::endl;
	incr_opss();
	return 0;
}
