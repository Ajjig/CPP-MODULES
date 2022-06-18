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
    std::cout << "Int constructor called" << std::endl;
    this -> value = _value << nBits;
}

Fixed::Fixed(const float _value) {
    std::cout << "Float constructor called" << std::endl;
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


/* * * * * * * * * * * * * * * * EX02 * * * * * * * * * * * * * * * */

bool Fixed::operator > (const Fixed &fixed) const {
    return (this -> value > fixed.value);
}

bool Fixed::operator < (const Fixed &fixed) const {
    return (this -> value < fixed.value);
}

bool Fixed::operator >= (const Fixed &fixed) const {
    return (this -> value >= fixed.value);
}

bool Fixed::operator <= (const Fixed &fixed) const {
    return (this -> value <= fixed.value);
}

bool Fixed::operator == (const Fixed &fixed) const {
    return (this -> value == fixed.value);
}

bool Fixed::operator != (const Fixed &fixed) const {
    return (this -> value != fixed.value);
}

Fixed Fixed::operator + (const Fixed &fixed) const {
    return Fixed(this -> value + fixed.value);
}

Fixed Fixed::operator - (const Fixed &fixed) const {
    return Fixed(this -> value - fixed.value);
}

Fixed Fixed::operator * (const Fixed &fixed) const {
    return Fixed(this -> toFloat() * fixed.toFloat());
}

Fixed Fixed::operator / (const Fixed &fixed) const {
    return Fixed(this -> toFloat() / fixed.toFloat());
}

Fixed & Fixed::operator ++ () {
    this -> value++;
    return *this;
}

Fixed & Fixed::operator -- () {
    this -> value--;
    return *this;
}

Fixed Fixed::operator ++ (int) { // return the non-updated value
    Fixed tmp(*this);
    this -> value++;
    return tmp;
}

Fixed Fixed::operator -- (int) { // return the non-updated value
    Fixed tmp(*this);
    this -> value--;
    return tmp;
}

Fixed & Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1.value < fixed2.value)
        return fixed1;
    return fixed2;
}

Fixed & Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1.value > fixed2.value)
        return fixed1;
    return fixed2;
}

const Fixed & Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1.value < fixed2.value)
        return fixed1;
    return fixed2;
}

const Fixed & Fixed::max(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1.value > fixed2.value)
        return fixed1;
    return fixed2;
}