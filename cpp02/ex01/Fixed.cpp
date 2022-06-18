#include "Fixed.hpp"

/* * * * * * * * * * * * * * * * EX00 * * * * * * * * * * * * * * * */

int Fixed::nBits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits() {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {
    std::cout << "Copy constructor called" << std::endl;
}


Fixed & Fixed::operator = (const Fixed &fixed) {
    this -> value = fixed.value;
    std::cout << "Copy Assignation operator called" << std::endl;
    return *this;
}

/* * * * * * * * * * * * * * * * EX01 * * * * * * * * * * * * * * * */

Fixed::Fixed(const int _value) {
    this -> value = _value << nBits;
}

Fixed::Fixed(const float _value) {
    this -> value = (int) roundf((_value * (1 << nBits)));
}

int Fixed::toInt() const {
    return (int) value >> nBits;
}

float Fixed::toFloat() const {
    return (float) value / (1 << nBits);
}

std::ostream & operator << (std::ostream & out, Fixed const & fx)
{
    out << fx.toFloat();
    return out;
}