#include "HumanA.hpp"

class HumanB {
    private :
        string name;
        Weapon *weapon;
    public :
        HumanB(string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
};