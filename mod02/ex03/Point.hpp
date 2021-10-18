#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		Fixed _x;
		Fixed _y;

	public:
		Point();
		~Point();
		Point&	operator=(const Point &cpy);
		Point(const Point &cpy);
		Point(float x, float y);

		Fixed	getX() const;
		Fixed	getY() const;
};

std::ostream&   operator<<(std::ostream &out, const Point &cpy);
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
