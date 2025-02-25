#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
        FragTrap();
        FragTrap(std::string);
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
        ~FragTrap(); 
        
		void highFivesGuys(void);
};

