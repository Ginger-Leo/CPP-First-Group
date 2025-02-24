#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
	    std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    

    public:
        FragTrap();
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
        ~FragTrap(); 

        
		FragTrap(std::string);
        
		void highFivesGuys(void);
};

