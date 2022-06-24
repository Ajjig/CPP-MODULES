#include "Cat.hpp"

Cat::Cat(string type) {
    this -> type = type;
    std::cout << "Cat is created" << std::endl;
}

Cat::Cat() {
    this -> type = "";
    std::cout << "Cat is created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "A cat is meowing..." << std::endl;
}

Cat & Cat::operator = (const Cat &src) {
    if (this == &src)
        return *this;
    this -> type = src.type;
    return *this;
}

Cat::Cat(const Cat &src) {
    this -> type = src.type;
    std::cout << "Cat copy constructor called" << std::endl;
}