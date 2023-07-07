#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

void printString(std::string content) {
	std::cout << content << std::endl;
}

Fixed::Fixed() : value(0) {
	printString("Default constructor called");
}

Fixed::Fixed(const int value) {
	printString("Int constructor called");
	setRawBits(value << fractionalBit);
}

Fixed::Fixed(const float value) {
	printString("Float constructor called");
	setRawBits(roundf(value * (1 << fractionalBit)));
}

Fixed::Fixed(const Fixed& other) {
	printString("Copy constructor called");
	this->operator=(other);
}

Fixed& Fixed::operator=(const Fixed& other) {
	printString("Copy assignment operator called");
	if (this != &other)
		this->value = other.value;
	return *this;
}

Fixed::~Fixed() {
	printString("Destructor called");
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
