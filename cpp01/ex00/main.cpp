#include "Zombie.hpp"

Zombie *newZombie(string _name) {
    Zombie *zombie = new Zombie(_name);
    return zombie;
}

void randomChump( std::string _name ) {
    Zombie zombie(name);
    zombie.announce();
}

int main( void ) {
    Zombie *heapZombie = newZombie("Fooo");
    heapZombie->announce();
    delete heapZombie;
    Zombie *stackZombie = randomChump("Foo's dad");
    return 0;
}