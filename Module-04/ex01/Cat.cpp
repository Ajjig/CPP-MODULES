#include "Cat.hpp"

Cat::Cat(string type) {
    this -> _brain = new Brain();
    this -> type = type;
    std::cout << "Cat is created" << std::endl;
}

Cat::Cat() {
    this -> _brain = new Brain();
    this -> type = "";
    std::cout << "Cat is created" << std::endl;
}

Cat::~Cat() {
    delete this -> _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "A cat is meowing..." << std::endl;
}