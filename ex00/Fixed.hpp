#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {

private:
	int value;
	static const int fractionalBit;

public:
	Fixed();

	Fixed(const Fixed& other);

	Fixed& operator=(const Fixed& other);

	~Fixed();

	int getRawBits(void) const;

	void setRawBits(int const raw);
};

#endif //CPP_FIXED_HPP
