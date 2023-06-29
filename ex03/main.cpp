
#include "Point.hpp"

int main(void) {

	Point a = Point(0, 2);
	Point b = Point(0, 0);
	Point c = Point(2, 0);

	for (float y = 2.5; y > 0; y -= 0.1) {
		for (float x = 0.0; x < 2.5; x += 0.1) {
			Point p = Point(x, y);
			if (bsp(a, b, c, p)) {
				std::cout << "*";
			}
			else {
				std::cout << "#";
			}
		}
		std::cout << std::endl;
	}

	Point p1 = Point(0.1, 1.8);
	Point p2 = Point(0, 0);
	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;

	Point p3 = Point(0.1, 0.1);
	Point p4 = Point(2, 2);
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;

	return 0;
}
