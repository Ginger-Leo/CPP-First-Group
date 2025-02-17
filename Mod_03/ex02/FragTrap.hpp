#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap(std::string);
        ~FragTrap();
        void highFivesGuys(void);

};

