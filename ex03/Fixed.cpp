#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const int value) {
	setRawBits(value << fractionalBit);
}

Fixed::Fixed(const float value) {
	setRawBits(roundf(value * (1 << fractionalBit)));
}

Fixed::Fixed(const Fixed& other) {
	this->operator=(other);
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->value = other.value;
	return *this;
}

Fixed::~Fixed() {
}

bool Fixed::operator>(const Fixed& other) const {
	return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
	return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
	return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed fixed;
	fixed.value = value + other.value;
	return fixed;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed fixed;
	fixed.value = value - other.value;
	return fixed;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed fixed;
	fixed.value = (long long) value * other.value >> fractionalBit;
	return fixed;
}

Fixed Fixed::operator/(const Fixed& other) const {
	if (other.value == 0) {
		std::cout << "floating point exception" << std::endl;
		exit(EXIT_FAILURE);
	}
	Fixed fixed;
	fixed.value = ((long long) value << fractionalBit) / other.value;
	return fixed;
}

Fixed& Fixed::operator++() {
	++value;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed fixed;
	fixed.value = value;
	++value;
	return fixed;
}

Fixed& Fixed::operator--() {
	--value;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed fixed;
	fixed.value = value;
	--value;
	return fixed;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs < rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	if (lhs > rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs > rhs)
		return lhs;
	return rhs;
}

int Fixed::getRawBits(void) const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
	return;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(value) / (1 << fractionalBit);
}

int Fixed::toInt(void) const {
	return value >> fractionalBit;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
