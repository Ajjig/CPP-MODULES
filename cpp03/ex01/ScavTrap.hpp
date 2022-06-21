#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(string name);
        void guardGate( void );
        ~ScavTrap();
};