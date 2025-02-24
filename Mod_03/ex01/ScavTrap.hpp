#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
	    std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:      
        // Orthadox Canonical Form
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);

        ScavTrap(std::string);
    
        // Manditory Functions
        void guardGate();

};
