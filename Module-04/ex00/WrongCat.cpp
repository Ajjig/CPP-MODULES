#include "WrongCat.hpp"

WrongCat::WrongCat(string _type) {
    this -> _type = _type;
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( void ) {
    this -> _type = "";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const {
    std::cout << "WrongCat is meowing..." << std::endl;
}

WrongCat & WrongCat::operator = (const WrongCat &src) {
    if (this == &src)
        return *this;
    this -> _type = src._type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &src) {
    this -> _type = src._type;
    std::cout << "Cat copy constructor called" << std::endl;
}