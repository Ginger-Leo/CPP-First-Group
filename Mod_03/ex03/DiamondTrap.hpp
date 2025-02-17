#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class Diamond : public ClapTrap
{
    private:
        std::string _name;
    public:
        Diamond(std::string);
        ~Diamond();

    
};

