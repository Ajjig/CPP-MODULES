#include "Zombie.hpp"

Zombie *newZombie() {
    string _name;
    std::cout << "Enter zombie name: ";
    std::cin >> _name;
    Zombie *zombie = new Zombie(_name);
    return zombie;
}

int main( void ) {
    
}