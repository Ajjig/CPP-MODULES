#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(string _type) {
    this -> _type = _type;
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( void ) {
    this -> _type = "";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal makes noise" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    this -> _type = src._type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src) {
    if (this == &src)
        return *this;   
    this -> _type = src._type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return * this;
}