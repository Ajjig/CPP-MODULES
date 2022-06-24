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