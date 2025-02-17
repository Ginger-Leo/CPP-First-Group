#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
      //  ScavTrap(const std::string& name) : ClapTrap(name) ;    
      
        // Orthadox Canonical Form
        ScavTrap(std::string name);
        ~ScavTrap();
    /*    
        ScavTrap(ScavTrap&);
        ScavTrap& operator=(const ScavTrap& rhs); 

        
         // Getter and Setters
        std::string getName() const;
        void setName(std::string);
        int getHP()const;
        void setHP(int);
        int getEP()const;
        void setEP(int);
        int getAP() const;
        void setAP(int);
        friend std::ostream& operator<<(std::ostream& os, const ScavTrap& obj);
    */
        // Manditory Functions
        void guardGate();
        
};