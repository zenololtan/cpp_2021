#include "Point.hpp"
//Why did they make the x and y in point const...

Fixed	cross_product(Fixed const Ax, Fixed const Ay, Fixed const Bx, Fixed const By)
{
	Fixed	mp1;
	Fixed	mp2;

	mp1 = Ax * By;
	mp2 = Ay * Bx;
	return (mp1 - mp2);
}

bool	same_side(Point const p1, Point const a, Point const b, Point const c)
{
	Fixed	dp;
	Fixed	cp1;
	Fixed	cp2;
	Fixed	cb1;
	Fixed	cb2;

	cb1 = c.getX() - b.getX();
	cb2 = c.getY() - b.getY();
	cp1 = cross_product(cb1, p1.getX() - b.getX(), cb2, p1.getY() - b.getY());
	cp2 = cross_product(cb1, a.getX() - b.getX(), cb2, a.getY() - b.getY());

	dp = cp1 * cp2;
	if (dp >= 0)
		return true;
	else
		return false;
}

bool    _same_side(Point const p1, Point const a, Point const b, Point const c)
{

        Fixed pp1;
        Fixed pp2;
        Fixed pp3;
        Fixed pp4;
        Fixed mp1;
        Fixed mp2;
        Fixed cp1;
        Fixed cp2;
        Fixed dp;

		std::cout << "----------check side----------" << std::endl;
		pp1 = c.getX() - b.getX(); // ax
		pp2 = p1.getX() - b.getX();
		pp3 = c.getY() - b.getY(); //ay
		pp4 = p1.getY() - b.getY();
		mp1 = pp1 * pp4;
		mp2 = pp3 * pp2;
		cp1 = mp1 - mp2;

		std::cout << "pp1: " << pp1 << " = " << c.getX() << " - " << b.getX() << std::endl;
		std::cout << "pp2: " << pp2 << " = " << p1.getX() << " - " << b.getX() << std::endl;
		std::cout << "pp3: " << pp3 << " = " << c.getY() << " - " << b.getY() << std::endl;
		std::cout << "pp4: " << pp4 << " = " << p1.getY() << " - " << b.getY() << std::endl;
		std::cout << "mp1: " << mp1 << " = " << pp1 << " * " << pp4 << std::endl;
		std::cout << "mp2: " << mp2 << " = " << pp3 << " * " << pp2 << std::endl;
		std::cout << "cp1: " << cp1 << " = " << mp1 << " - " << mp2 << std::endl;

		pp1 = c.getX() - b.getX();
		pp2 = a.getX() - b.getX();
		pp3 = c.getY() - b.getY();
		pp4 = a.getY() - b.getY();
		mp1 = pp1 * pp4;
		mp2 = pp3 * pp2;
		cp2 = mp1 - mp2;
		dp = cp1 * cp2;
		std::cout << "------------------------------" << std::endl;
		std::cout << "pp1: " << pp1 << " = " << c.getX() << " - " << b.getX() << std::endl;
		std::cout << "pp2: " << pp2 << " = " << p1.getX() << " - " << b.getX() << std::endl;
		std::cout << "pp3: " << pp3 << " = " << c.getY() << " - " << b.getY() << std::endl;
		std::cout << "pp4: " << pp4 << " = " << p1.getY() << " - " << b.getY() << std::endl;
		std::cout << "mp1: " << mp1 << " = " << pp1 << " * " << pp4 << std::endl;
		std::cout << "mp2: " << mp2 << " = " << pp3 << " * " << pp2 << std::endl;
		std::cout << "cp2: " << cp2 << " = " << mp1 << " - " << mp2 << std::endl;	
		std::cout << "------------------------------" << std::endl;
		std::cout << "dp: " << dp << std::endl;
        if (dp >= 0)
                return true;
        else
                return false;
} 


bool    bsp(Point const a, Point const b, Point const c, Point const pt)
{
	if (same_side(pt, a, b, c) && same_side(pt, b, a, c) && same_side(pt, c, a, b))
		return true;
	else
		return false;
}
