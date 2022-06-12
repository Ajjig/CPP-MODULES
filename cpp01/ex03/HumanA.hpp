#include "Weapon.hpp"

class HumanA {
    public :
        HumanA(string name, Weapon &weapon);
        ~HumanA();
        void attack();
    private :
        string name;
        Weapon &weapon;
};