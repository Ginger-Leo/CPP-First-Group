#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "scavtrap default constructor\n";
}

ScavTrap::ScavTrap(std::string name) 
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "scavtrap named constructor\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "scavtrap default destructor\n";
}

ScavTrap::ScavTrap(const ScavTrap& rhs) 
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	std::cout << "scavtrap copy constructor\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    if (this != &rhs) 
	{
		ClapTrap::operator=(rhs);
    
    }
    return *this;
}

// Manditory Functions
void ScavTrap::guardGate()
{
	if (this->getEP() > 0)
	{
    	std::cout << "ScavTrap " << getName() << " is now in gate keeper mode\n";
		this->setEP(this->getEP() - 1);
	}
}
void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
    	std::cout << "ScavTrap " <<  getName() << " attacks " << target << ", causing " << getAP() << " points of damage!"<< std::endl;
    	_energyPoints -= 1;
		_dothing = true;
	}
	else
	{
		std::cout << "not enough energy points to attack\n";
		_dothing = false;
	}
}


