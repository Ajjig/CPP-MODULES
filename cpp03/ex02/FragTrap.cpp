#include "FragTrap.hpp"

/*      CONSTRUCTORS        */

FragTrap::FragTrap(string _name) {
    this -> name = _name;
    this -> hitPoints = 100;
    this -> energyPoints = 100;
    this -> attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( void ) {
    this -> name = "";
    this -> hitPoints = 100;
    this -> energyPoints = 100;
    this -> attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

/*       DESTRUCTORS       */

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys( void ) {
    if (this -> hitPoints <= 0 || this -> energyPoints <= 0)
        return ;
    std::cout << "FragTrap " << this -> name << " offers high fives" << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap & ft) {
    if (this == &ft)
        return *this;
    this -> name = ft.name;
    this -> hitPoints = ft.hitPoints;
    this -> energyPoints = ft.energyPoints;
    this -> attackDamage = ft.attackDamage;
    return *this;
}