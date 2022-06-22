#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string _name) {
    ClapTrap::name = _name + "_clap_name";
    this -> name = _name;
    this -> hitPoints = FragTrap::hitPoints;
    this -> energyPoints = ScavTrap::energyPoints;
    this -> attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack( string & target ) {
    if (this -> hitPoints <= 0 || this -> energyPoints <= 0)
        return ;
    std::cout << "DiamondTrap " << this -> name << " attacks" << target << std::endl;
}
