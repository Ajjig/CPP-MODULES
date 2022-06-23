#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap(string _name);
        FragTrap( void );
        ~FragTrap();
        void highFiveGuys( void );
        FragTrap & operator = (FragTrap & ft);
};