#include "DiamondTrap.hpp"

int main( void ) {
    DiamondTrap dt("diamond");
    dt.attack("target_name"); // call attack()
    dt.highFiveGuys(); // call highFiveGuys()
    dt.guardGate(); // call guardGate()
    dt.whoAmI(); // call DiamondClap unique function
    dt.takeDamage(100);
    dt.highFiveGuys(); // can't display message OUT_OF_HP
    return 0;
}