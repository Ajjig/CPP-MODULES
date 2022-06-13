#include "HumanA.hpp"
#include "HumanB.hpp"

void testCase1() {  ///// Sample test Case
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}

void testCase2() {  ///// Sample test case
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}

int main()
{
    testCase1();
    testCase2();
}