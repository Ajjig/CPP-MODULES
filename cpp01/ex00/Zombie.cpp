#include "Zombie.hpp"

Zombie::Zombie(string name) {
    this->name = name;
}

Zombie::Zombie() {
    this->name = "";
}

void Zombie::announce( void ) {
    std::cout << this -> name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
