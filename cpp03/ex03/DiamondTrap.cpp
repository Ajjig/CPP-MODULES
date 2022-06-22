#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string _name) {
    this -> ClapTrap::name = _name + "_clap_name";
    this -> name = _name;
    this -> hitPoints = FragTrap::hitPoints;
    this -> energyPoints = ScavTrap::energyPoints;
    this -> attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack( string target ) {
    if (this -> hitPoints <= 0 || this -> energyPoints <= 0)
        return ;
    std::cout << "DiamondTrap " << this -> name << " attacks" << target << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap & dt) {
    if (this == &dt)
        return *this;
    this -> name = dt.name;
    this -> hitPoints = dt.hitPoints;
    this -> energyPoints = dt.energyPoints;
    this -> attackDamage = dt.attackDamage;
    std::cout << "Copy operator called" << std::endl;
    return *this;
}

DiamondTrap::DiamondTrap(DiamondTrap & dt) {
    *this = dt;
    std::cout << "copy constructor called" << std::endl;
}

void DiamondTrap::whoAmI( void ) {
    std::cout << "DiamondTrap name : " << this -> name << std::endl;
    std::cout << "ClapTrap    name : " << this -> ClapTrap::name << std::endl;
}