#include "Zombie.hpp"

Zombie *newZombie() {
    string _name;
    std::cout << "Enter zombie name: ";
    std::cin >> _name;
    Zombie *zombie = new Zombie(_name);
    return zombie;
}

void randomChump( std::string name ) {
    string name;
    std::cout << "Enter zombie name: ";
    std::cin >> name;
    Zombie zombie(name);
    zombie.announce();
}

int main( void ) {
    
}