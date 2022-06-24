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

Cat & Cat::operator = (const Cat &rhs) {
    if (this == &rhs)
        return *this;
    delete this -> _brain;
    this -> _brain = new Brain(*rhs._brain);
    this -> type = rhs.type;
    return *this;
}

Cat::Cat(const Cat &src) {
    this -> _brain = new Brain(*src._brain);
    this -> type = src.type;
    std::cout << "Cat copy constructor called" << std::endl;
}