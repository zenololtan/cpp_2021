#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(float x, float y) : _x(x), _y(y){}

Point::~Point(){}

Point&	Point::operator=(const Point &cpy)
{
	if (this != &cpy)
	{
	}
	return *this;
}

Point::Point(const Point &cpy) : _x(cpy._x), _y(cpy._y)
{
}

std::ostream&   operator<<(std::ostream &out, const Point &cpy)
{
        out << "(" << cpy.getX() << ", " << cpy.getY() << ")";
        return out;
}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}

