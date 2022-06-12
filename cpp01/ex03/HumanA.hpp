#include "Weapon.hpp"

class HumanA {
    public :
        HumanA(string name, Weapon &weapon);
        ~HumanA();
        void attack();
        void setWeapon(Weapon &weapon);
    private :
        string name;
        Weapon &weapon;
};