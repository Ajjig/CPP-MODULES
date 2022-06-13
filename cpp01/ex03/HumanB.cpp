#include "HumanB.hpp"

HumanB::HumanB(string name) {
    this -> name = name;
    this -> weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() {
    if (this -> weapon)
        std::cout << this -> name << " attacks with their " << this -> weapon -> getType() << std::endl;
    else
        std::cout << this -> name << " Can't attack without a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this -> weapon = &weapon;
}