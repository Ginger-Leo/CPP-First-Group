#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

class ClapTrap
{
    private:
        std::string _name = ;
        int _hitPoints = 10;
        int _energyPoints = 10,
        int _attackDamage = 0;
    
    public:
        // Orthadox Canonical Form
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap&);
        ClapTrap& operator=(const ClapTrap& rhs); 

        // Manditory Functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        // Getter and Setters
        std::string getName();
        void setName(std::string);
        int getHP();
        void setHP(int);
        int getEP();
        void setEP(int);
        int getAttack();
        void setAttack(int);

        friend std::ostream& operator<<(std::ostream& os, const ClapTrap& obj);
};