#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

void printString(std::string content) {
	std::cout << content << std::endl;
}

Fixed::Fixed() : value(0) {
	printString("Default constructor called");
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
	printString("getRawBits member function called");
	return value;
}

void Fixed::setRawBits(int const raw) {
	printString("setRawBits member function called");
	value = raw;
	return;
}
