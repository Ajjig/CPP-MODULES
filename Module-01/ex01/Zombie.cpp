#include "Zombie.hpp"

Zombie::Zombie(string name) {
    this -> name = name;
}

Zombie::Zombie() {
    this -> name = "";
}

Zombie::~Zombie() {
    std::cout << this -> name << " has been destroyed" << std::endl;
}

void Zombie::announce( void ) {
    std::cout << this -> name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(string name) {
    this -> name = name;
}
