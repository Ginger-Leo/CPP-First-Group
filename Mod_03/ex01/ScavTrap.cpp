#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
}
ScavTrap::~ScavTrap()
{
}
/*
ScavTrap(ScavTrap& rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage){
}
ScavTrap& operator=(const ScavTrap& rhs){
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}


//Getters and Setters
std::string ClapTrap::getName() const {
    return _name;
}
void ClapTrap::setName(std::string name){
    _name = name;
}
int ClapTrap::getHP() const {
    return _hitPoints;
}
void ClapTrap::setHP(int HP){
    _hitPoints = HP;
}
int ClapTrap::getEP() const {
    return _energyPoints;
}
void ClapTrap::setEP(int EP){
    _energyPoints = EP;
}
int ClapTrap::getAP() const {
    return _attackDamage;
}
void ClapTrap::setAP(int AP) {
    _attackDamage = AP;
}
std::ostream& operator<<(std::ostream& os, ClapTrap& obj){
    os << "ClapTrap " << obj.getName() << " [HP: " << obj.getHP() << ", EP: " << obj.getEP() << ", Attack: " << obj.getAP() << "]";
    return os;
}

*/

// Manditory Functions
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in gate keeper mode\n";
}


