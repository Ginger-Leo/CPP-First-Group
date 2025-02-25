#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
	
    public:      
        // Orthadox Canonical Form
        ScavTrap();
        ScavTrap(std::string);
        ~ScavTrap() override;
        ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);

    
        // Manditory Functions
        void guardGate();
		
		void attack(const std::string& target) override;

};
