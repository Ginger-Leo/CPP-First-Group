#include "ClapTrap.hpp"

// Orthadox Canonical Form
ClapTrap::ClapTrap() // constructor
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

} 

// Manditory Functions
ClapTrap::void attack(const std::string& target)
{

}
ClapTrap::void takeDamage(unsigned int amount)
{

}
ClapTrap::void beRepaired(unsigned int amount)
{

}

//Getters and Setters
ClapTrap::std::string getName()
{

}
ClapTrap::void setName(std::string)
{

}
ClapTrap::int getHP()
{

}
ClapTrap::void setHP(int)
{

}
ClapTrap::int getEP()
{

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
