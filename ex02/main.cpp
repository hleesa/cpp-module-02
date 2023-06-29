#include "Fixed.hpp"

int main(void) {

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	Fixed x = Fixed(5.05f);
	Fixed y = Fixed(2);

	std::cout << "==============The 6 comparison operators=================" << std::endl;

	std::cout << (x > y) << std::endl;
	std::cout << (x < y) << std::endl;
	std::cout << (x >= y) << std::endl;
	std::cout << (x <= y) << std::endl;
	std::cout << (x == y) << std::endl;
	std::cout << (x != y) << std::endl;

	std::cout << "============ The 4 arithmetic operators ===================" << std::endl;

	std::cout << x + y << std::endl;
	std::cout << x - y << std::endl;
	std::cout << x * y << std::endl;
	std::cout << x / y << std::endl;

	std::cout << "============ The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operator ===================" << std::endl;

	std::cout << "x:	" << x << std::endl;
	std::cout << "++x:	" << ++x << std::endl;
	std::cout << "x:	" << x << std::endl;
	std::cout << "x++:	" << x++ << std::endl;
	std::cout << "x:	" << x << std::endl;
	std::cout << "--x:	" << --x << std::endl;
	std::cout << "x:	" << x << std::endl;
	std::cout << "x--:	" << x-- << std::endl;
	std::cout << "x:	" << x << std::endl;

	return 0;
}
