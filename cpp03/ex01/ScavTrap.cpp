#include "ScavTrap.hpp"

/* * * * * * * CONSTRUCTOR * * * * * * */

ScavTrap::ScavTrap(string name) : ClapTrap(name) {
    this -> hitPoints = 100;
    this -> energyPoints = 50;
    this -> attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

/* * * * * * * DESTRUCTOR * * * * * * */

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(const string & target) {
    std::cout << this -> name << "is in gate keeper mode !" << std::endl;
}