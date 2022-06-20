#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap tom = ClapTrap("tom");
    ClapTrap jerry = ClapTrap("jerry");
    tom.attack(jerry.getName()); // tom attacks jerry
    jerry.takeDamage(10); // jerry takes 10 damage
    jerry.beRepaired(10); // jerry is getting repaired for 10
    jerry.attack(tom.getName()); // jerry revenges tom
    return 0;
}