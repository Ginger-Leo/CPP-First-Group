#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include <iomanip>


int main()
{
	std::cout << "\n\n" << std::setw(8) << "" << "\033[4mPhase 1\033[0m\n";
    {
		ClapTrap NN;
    	ClapTrap CT("Jermaine");
		ClapTrap mk2("Peter");

		CT.attack(mk2.getName()); // Jemaine attacks Peter
		if (CT.getThing() == true)
		{
			mk2.takeDamage(1); // Peter takes damage
			mk2.beRepaired(1); //Peter repairs
		}
    }
    return 8;
}
