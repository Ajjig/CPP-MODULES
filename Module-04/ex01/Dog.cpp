#include "Dog.hpp"

Dog::Dog(string type) {
    this -> type = type;
    std::cout << "Dog is created" << std::endl;
}

Dog::Dog() {
    this -> type = "";
    std::cout << "Dog is created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "A dog is baeking..." << std::endl;
}