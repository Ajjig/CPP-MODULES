#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    public :
        DiamondTrap( void );
        DiamondTrap(string _name);
        ~DiamondTrap();
        void attack(string & target);
        void whoAmI();
};