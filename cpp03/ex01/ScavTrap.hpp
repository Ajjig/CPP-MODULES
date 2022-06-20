#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(string name);
        void guardGate(const string & target);
        ~ScavTrap();
};