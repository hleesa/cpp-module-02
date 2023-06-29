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

	bool operator>(const Fixed& other) const;

	bool operator<(const Fixed& other) const;

	bool operator>=(const Fixed& other) const;

	bool operator<=(const Fixed& other) const;

	bool operator==(const Fixed& other) const;

	bool operator!=(const Fixed& other) const;

	Fixed operator+(const Fixed& other) const;

	Fixed operator-(const Fixed& other) const;

	Fixed operator*(const Fixed& other) const;

	Fixed operator/(const Fixed& other) const;

	Fixed& operator++();

	Fixed operator++(int);

	Fixed& operator--();

	Fixed operator--(int);

	static Fixed& min(Fixed& lhs, Fixed& rhs);

	static const Fixed& min(const Fixed& lhs, const Fixed& rhs);

	static Fixed& max(Fixed& lhs, Fixed& rhs);

	static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

	int getRawBits(void) const;

	void setRawBits(int const raw);

	int toInt(void) const;

	float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif //CPP_FIXED_HPP
