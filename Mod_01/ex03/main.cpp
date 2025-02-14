#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB Eric("Eric");
        Eric.attack();
        Eric.setWeapon(club);
        Eric.attack();
    }
    std::cout << "\nTradgically Bob, Jim & Eric lost their lives.\n\n";
    return 0;
}