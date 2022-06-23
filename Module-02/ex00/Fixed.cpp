#include "Fixed.hpp"

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