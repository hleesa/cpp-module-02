
#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(const Point& other) {
	this->operator=(other);
}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		*const_cast<Fixed*>(&x) = other.getX();
		*const_cast<Fixed*>(&y) = other.getY();
	}
	return *this;
}

Point::~Point() {
}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}
