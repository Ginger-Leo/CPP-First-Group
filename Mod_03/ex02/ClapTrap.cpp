#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Orthadox Canonical Form
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
    std::cout << "default claptrap contructor\n";
}
ClapTrap::~ClapTrap(){
    std::cout << "default claptrap destructor\n";
}
ClapTrap::ClapTrap(ClapTrap& rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage){
}
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

// Manditory Functions
// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " <<  getName() << " attacks " << target << ", causing " << getAP() << " points of damage!"<< std::endl;
    _energyPoints -= 1;
    std::cout << "1 energy point lost\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << getName() << " takes " << amount << " of damage\n";
    _hitPoints -= amount;
}

//When ClapTrap repairs itself, it gets <amount> hit points back.
void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    std::cout << getName() << " repaired " << amount << " HP\n";
    std::cout << "1 energy point lost\n";
    _energyPoints -= 1;
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
