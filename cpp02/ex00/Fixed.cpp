#include "Fixed.hpp"

Fixed::nBits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits() {
    return nBits;
}

void Fixed::setRawBits(int const raw) {
    nBits = raw;
}

Fixed::~Fixed() {
    std::cout << "Destroyed" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {}

Fixed::Fixed(const int value) {
    this -> value = value << nBits;
}
