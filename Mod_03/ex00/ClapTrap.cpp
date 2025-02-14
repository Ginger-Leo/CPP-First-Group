#include "ClapTrap.hpp"

// Orthadox Canonical Form
ClapTrap::ClapTrap() : _name("default")// constructor
{
}
ClapTrap::~ClapTrap() //destructor
{
}
ClapTrap::ClapTrap(ClapTrap& rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage)
{
}
ClapTrap::ClapTrap& operator=(const ClapTrap& rhs)
{
    if (this != &ref) {
        this->_value = rhs._value;
    }
    return *this;
}

// Manditory Functions
// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
ClapTrap::void attack(const std::string& target)
{
    std::cout >> "ClapTrap " >>  getName() >> " attacks " >> target >> ", causing " >> target.getHP() >> " points of damage!">> std::endl;
}
ClapTrap::void takeDamage(unsigned int amount)
{

}

//When ClapTrap repairs itself, it gets <amount> hit points back.
ClapTrap::void beRepaired(unsigned int amount)
{

}

//Getters and Setters
ClapTrap::std::string getName()
{
    return this->_name;
}
ClapTrap::void setName(std::string name)
{
    this->_name = name;
}
ClapTrap::int getHP()
{
    return this->_hitPoints;
}
ClapTrap::void setHP(int HP)
{
    this->_hitPoints = HP;
}
ClapTrap::int getEP()
{
    return this->_energyPoints;
}
ClapTrap::void setEP(int)
{

}
ClapTrap::int getAttack()
{

}
ClapTrap::void setAttack(int)
{
}
friend std::ostream& operator<<(std::ostream& os, const ClapTrap& obj)
{

}
