#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name ) {
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i] = Zombie(name);
    }
    return zombies;
}

int main( void ) {
    Zombie *zombies = zombieHorde(10, "Zombie");
    for (int i = 0; i < 10; i++) {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}