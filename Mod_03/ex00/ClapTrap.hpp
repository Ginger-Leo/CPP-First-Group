#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

class ClapTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
		bool _dothing;
    
    public:
        // Orthadox Canonical Form
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap&);
        ClapTrap& operator=(const ClapTrap& rhs); 
        
		ClapTrap(std::string);

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
		void setThing(bool);
        bool getThing() const;

    };
        std::ostream& operator<<(std::ostream& os, const ClapTrap& obj);