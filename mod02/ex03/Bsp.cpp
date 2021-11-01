#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point v1((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
	Point v2((c.getX() - b.getX()).toFloat(), (c.getY() - b.getY()).toFloat());
	Point v3((a.getX() - c.getX()).toFloat(), (a.getY() - c.getY()).toFloat());
	Fixed da, db, dc;

	da = (point.getX() - a.getX()) * v1.getY();
	db = (point.getX() - b.getX()) * v2.getY();
	dc = (point.getX() - c.getX()) * v3.getY();
	if (da >= 0 && db >= 0 && dc >= 0)
		return (true);
	else if (da <= 0 && db <= 0 && dc <= 0)
		return (true);
	return (false);
}
