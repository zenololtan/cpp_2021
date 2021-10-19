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

bool    bsp(Point const a, Point const b, Point const c, Point const pt)
{
	std::cout << "b after passing it as arg: " << b << std::endl;
	if (same_side(pt, a, b, c) && same_side(pt, b, a, c) && same_side(pt, c, a, b))
		return true;
	else
		return false;
}
