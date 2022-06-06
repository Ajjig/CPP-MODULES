#include "Zombie.hpp"

Zombie *newZombie(string _name) {
    Zombie *zombie = new Zombie(_name);
    return zombie;
}

void randomChump( string _name ) {
    Zombie zombie(_name);
    zombie.announce();
}

int main( void ) {
    Zombie *heapZombie = newZombie("Fooo");
    heapZombie->announce();
    delete heapZombie;
    /* Stack zombie */ randomChump("Foo's dad");
    return 0;
}