#include "Point.hpp"

Fixed	dot_product(Fixed const Ax, Fixed const Ay, Fixed const Bx, Fixed const By)
{
	Fixed	mp1;
	Fixed	mp2;

	mp1 = Ax * By;
	mp2 = Ay * Bx;
	return (mp1 - mp2);
}

bool	same_side(Point const p1, Point const a, Point const b, Point const c)
{
	Fixed	mp;
	Fixed	dp1;
	Fixed	dp2;
	Fixed	db1;
	Fixed	db2;

	db1 = c.getX() - b.getX();
	db2 = c.getY() - b.getY();
	dp1 = dot_product(db1, p1.getX() - b.getX(), db2, p1.getY() - b.getY());
	dp2 = dot_product(db1, a.getX() - b.getX(), db2, a.getY() - b.getY());

	mp = dp1 * dp2;
	if (mp > 0)
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
