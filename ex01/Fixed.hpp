#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int value;
	static const int fractionalBit;

public:
	Fixed();

	Fixed(const int value);

	Fixed(const float value);

	Fixed(const Fixed& other);

	Fixed& operator=(const Fixed& other);

	~Fixed();

	int getRawBits(void) const;

	void setRawBits(int const raw);

	float toFloat(void) const;

	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif //CPP_FIXED_HPP
