#pragma once
#include <iostream>
#include <string>
#define string std::string

class ClapTrap {
    public:
        ClapTrap(string name);
        ClapTrap( void );
        void attack(const string & target);
        void takeDamage(unsigned int damageAmount);
        void beRepaired(unsigned int repairAmount);
        void setName(string name);
        void setAttackDamage(unsigned int attackDamage);
        unsigned int getAttackDamage();
        string getName( void );
        ~ClapTrap();
    protected:
        string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

};