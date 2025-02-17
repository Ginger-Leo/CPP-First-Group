#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iomanip>


int main()
{
    std::cout << std::setw(8) << "" << "\033[4mPhase 1\033[0m\n";
    {
    ClapTrap CT("Jermaine");
    ClapTrap mk2("Peter");

    CT.attack(mk2.getName()); // Jemaine attacks Peter
    mk2.takeDamage(1); // Peter takes damage
    mk2.beRepaired(1); //Peter repairs
    }
    std::cout << "\n\n" << std::setw(8) << "" << "\033[4mPhase 2\033[0m\n";
    {
    ScavTrap Scavvy("Scavvy");

    Scavvy.guardGate();

    }
    std::cout << "\n\n" << std::setw(8) << "" << "\033[4mPhase 3\033[0m\n";
    {
        ClapTrap CT1("Eric");
        ScavTrap ST1("Theodore");
        FragTrap FT1("Arnold");

        ST1.guardGate();
        FT1.highFivesGuys();

    }
    return 14;
}
