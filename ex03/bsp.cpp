#include "Point.hpp"

Fixed cross(Point a, Point b, Point c) {
	return (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
	Fixed cp1 = cross(a, b, p);
	Fixed cp2 = cross(b, c, p);
	Fixed cp3 = cross(c, a, p);
	return (cp1 > 0 && cp2 > 0 && cp3 > 0) || (cp1 < 0 && cp2 < 0 && cp3 < 0);
}
