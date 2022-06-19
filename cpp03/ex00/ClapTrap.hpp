#pragma once
#include <iostream>
#include <string>
#define string std::string

class ClapTrap {
    public:
        ClapTrap(string name);
        void attack(const string & target);
        void takeDamage(unsigned int damageAmount);
        void beRepaired(unsigned int repairAmount);
    private:
        string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int damage;

};