#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		Fixed const _x;
		Fixed const _y;
		Point&	operator=(const Point &cpy);

	public:
		Point();
		~Point();
		Point(const Point &cpy);
		Point(float x, float y);

		bool	operator==(const Point &pnt) const;
		Fixed	getX() const;
		Fixed	getY() const;
};

std::ostream&   operator<<(std::ostream &out, const Point &cpy);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
