#include "FragTrap.hpp"

int main( void ) {
    FragTrap tom = FragTrap("tom");
    tom.setAttackDamage(50);
    FragTrap jerry = FragTrap("jerry");
    tom.attack(jerry.getName()); // tom attacks jerry
    jerry.takeDamage(tom.getAttackDamage()); // jerry takes 5 damage
    jerry.beRepaired(50); // jerry is getting repaired for 5
    jerry.setAttackDamage(10); // jerry's attack damage is now 10
    jerry.attack(tom.getName()); // jerry revenges tom
    tom.takeDamage(jerry.getAttackDamage()); // tom takes 10 damage // tom is now dead
    tom.attack("Someone else"); // tom cant attack because he is out of HP/
    tom.highFiveGuys(); // to can't do anything because of he is out of HP
    jerry.highFiveGuys(); // jerry will display high fives guys msg
    return 0;
}