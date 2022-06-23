#include "Zombie.hpp"

Zombie *newZombie(string _name) {
    Zombie *zombie = new Zombie(_name);
    return zombie;
}
