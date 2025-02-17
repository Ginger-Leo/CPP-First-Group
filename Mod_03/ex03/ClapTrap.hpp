#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
//#include "ScavTrap.hpp"
//#include "FragTrap.hpp"


class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    
    public:
        // Orthadox Canonical Form
        ClapTrap(std::string);
        ~ClapTrap();
        ClapTrap(ClapTrap&);
        ClapTrap& operator=(const ClapTrap& rhs); 

        // Manditory Functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        // Getter and Setters
        std::string getName() const;
        void setName(std::string);
        int getHP()const;
        void setHP(int);
        int getEP()const;
        void setEP(int);
        int getAP() const;
        void setAP(int);
        
        friend std::ostream& operator<<(std::ostream& os, const ClapTrap& obj);

    };