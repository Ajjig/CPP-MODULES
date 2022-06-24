#include "Dog.hpp"

Dog::Dog(string type) {
    this -> _brain = new Brain();
    this -> type = type;
    std::cout << "Dog is created" << std::endl;
}

Dog::Dog() {
    this -> _brain = new Brain();
    this -> type = "";
    std::cout << "Dog is created" << std::endl;
}

Dog::~Dog() {
    delete this -> _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "A dog is baeking..." << std::endl;
}

Dog & Dog::operator=(const Dog &rhs) {
    if (this == &rhs)
        return *this;
    delete this -> _brain;
    this -> _brain = new Brain(*rhs._brain);
    this -> type = rhs.type;
    return *this;
}

Dog::Dog(const Dog &src) {
    this -> _brain = new Brain(*src._brain);
    this -> type = src.type;
    std::cout << "Dog copy constructor called" << std::endl;
}