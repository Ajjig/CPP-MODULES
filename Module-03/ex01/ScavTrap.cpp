#include "ScavTrap.hpp"

/* * * * * * * CONSTRUCTOR * * * * * * */

ScavTrap::ScavTrap(string _name) {
    this -> name = _name;
    this -> hitPoints = 100;
    this -> energyPoints = 50;
    this -> attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( void ) {
    this -> name = "";
    this -> hitPoints = 100;
    this -> energyPoints = 50;
    this -> attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

/* * * * * * * DESTRUCTOR * * * * * * */

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate( void ) {
    std::cout << this -> name << "is in gate keeper mode !" << std::endl;
}