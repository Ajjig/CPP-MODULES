#include "ClapTrap.hpp"

/* * * * * * * CONSTRUCTORS * * * * * * */

ClapTrap::ClapTrap(string name) {
    this -> name = name;
    this -> hitPoints = 10;
    this -> energyPoints = 0;
    this -> attackDamage = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( void ) {
    this -> name = "";
    this -> hitPoints = 10;
    this -> energyPoints = 0;
    this -> attackDamage = 0;
    std::cout << "Constructor called" << std::endl;
}

/* * * * * * * DESTRUCTOR * * * * * * */

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

/* * * * * * * METHODS * * * * * * */

void ClapTrap::attack(const string & target) {
    if (this -> energyPoints == 0) {
        std::cout << "ClapTrap " << this -> name << " is out of energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this -> name << " attacks " << target << " causing " << this -> attackDamage << " damage" << std::endl;
    this -> energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int damageAmount) {
    std::cout << "ClapTrap " << this -> name << " takes " << damageAmount << " damage" << std::endl;
    if (this -> hitPoints <= damageAmount) { // protection against negative HP
        std::cout << "ClapTrap " << this -> name << " is dead" << std::endl;
        this -> hitPoints = 0;
        return;
    }
    this -> hitPoints -= damageAmount;
}

void ClapTrap::beRepaired(unsigned int repairAmount) {
    std::cout << "ClapTrap " << this -> name << " is repaired for " << repairAmount << std::endl;
    this -> hitPoints += repairAmount;
    if (this -> hitPoints > 10) { // protection against HP greater than 10
        this -> hitPoints = 10;
    }
}

/* * * * * * * SETTERS / GETTERS * * * * * * */

void ClapTrap::setName(string _name) {
    this -> name = _name;
}

string ClapTrap::getName( void ) {
    return name;
}

unsigned int ClapTrap::getAttackDamage( void ) {
    return this -> attackDamage;
}

void ClapTrap::setAttackDamage(unsigned int _attackDamage) {
    this -> attackDamage = _attackDamage;
}