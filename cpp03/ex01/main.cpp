#include "ScavTrap.hpp"

int main( void ) {
    ScavTrap tom = ScavTrap("tom");
    tom.setAttackDamage(5);
    ScavTrap jerry = ScavTrap("jerry");
    tom.attack(jerry.getName()); // tom attacks jerry
    jerry.takeDamage(tom.getAttackDamage()); // jerry takes 5 damage
    jerry.beRepaired(5); // jerry is getting repaired for 5
    jerry.setAttackDamage(10); // jerry's attack damage is now 10
    jerry.attack(tom.getName()); // jerry revenges tom
    tom.takeDamage(jerry.getAttackDamage()); // tom takes 10 damage // tom is now dead
    tom.attack("Someone else"); // tom cant attack because he is out of HP/
    tom.guardGate(); // tom is in gate keeper mode
    jerry.guardGate(); // jerry is in gate keeper mode
    return 0;
}