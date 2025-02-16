#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap CT("Jermaine");
    ClapTrap mk2("Peter");

    CT.attack(mk2.getName()); // Jemaine attacks Peter
    mk2.takeDamage(1); // Peter takes damage
    mk2.beRepaired(1); //Peter repairs

    return 8;
}
