#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

    FragTrap::FragTrap(std::string name) : ClapTrap(name)
    {
        std::cout << "default Fragtrap contructor\n";
    }

    FragTrap::~FragTrap()
    {
        std::cout << "default Fragtrap destructor\n";
    }

    void FragTrap::highFivesGuys(void)
    {
        std::cout << "High Five graciously given\n";
    }

