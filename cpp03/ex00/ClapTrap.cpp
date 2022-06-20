#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) {
    this -> name = name;
    this -> hitPoints = 10;
    this -> energyPoints = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const string & target) {
    std::cout << "ClapTrap " << this -> name << " attacks " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int damageAmount) {
    std::cout << "ClapTrap " << this -> name << " takes " << damageAmount << " damage" << std::endl;
    this -> hitPoints -= damageAmount;
}

void ClapTrap::beRepaired(unsigned int repairAmount) {
    std::cout << "ClapTrap " << this -> name << " is repaired for " << repairAmount << std::endl;
    this -> hitPoints += repairAmount;
}
