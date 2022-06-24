#include "Animal.hpp"

Animal::Animal(string type) {
    this -> type = type;
    std::cout << "Animal is created" << std::endl;
}

Animal::Animal() {
    this -> type = "";
    std::cout << "Animal is created" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType(string type){
    this -> type = type;
}

string Animal::getType() const {
    return this -> type;
}

void Animal::makeSound() const {
    std::cout << "An animal is making sound" << std::endl;
}