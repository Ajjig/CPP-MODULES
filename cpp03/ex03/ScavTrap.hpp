#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
    public:
        ScavTrap(string name);
        ScavTrap( void );
        void guardGate( void );
        ~ScavTrap();
};