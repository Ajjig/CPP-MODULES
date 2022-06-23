#include "Weapon.hpp"

Weapon::Weapon(string type) {
    this -> type = type;
}

Weapon::~Weapon() {}

void Weapon::setType(string _type) {
    this -> type = _type;
}

string Weapon::getType() {
    return this -> type;
}