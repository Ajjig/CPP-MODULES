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