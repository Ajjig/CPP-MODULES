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