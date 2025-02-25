#include "ClapTrap.hpp"

// Orthadox Canonical Form
ClapTrap::ClapTrap(){
	std::cout << "claptrap default constructor\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _dothing (true) {
		std::cout << "claptrap named constructor\n";
}

ClapTrap::~ClapTrap(){
		std::cout << "claptrap default destructor\n";
}

ClapTrap::ClapTrap(ClapTrap& rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage) {
	std::cout << "claptrap copy constructor\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    if (this != &rhs) {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
	std::cout << "claptrap copy assignment\n";
    return *this;
}

// Manditory Functions
// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
    	std::cout << "ClapTrap " <<  getName() << " attacks " << target << ", causing " << getAP() << " points of damage!"<< std::endl;
    	_energyPoints -= 1;
		_dothing = true;
	}
	else
	{
		std::cout << "not enough energy points to attack\n";
		_dothing = false;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << getName() << " takes " << amount << " of damage\n";
		_hitPoints -= amount;
	}
	else
		std ::cout << getName() <<  " has no life left\n";
}

//When ClapTrap repairs itself, it gets <amount> hit points back.
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		std::cout << getName() << " repaired " << amount << " HP\n";
	}
	else
		std::cout << "not enough energy points to repair\n";

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
bool ClapTrap::getThing() const {
    return _dothing;
}
void ClapTrap::setThing(bool thing) {
    _dothing = thing;
}


std::ostream& operator<<(std::ostream& os, ClapTrap& obj){
    os << "ClapTrap " << obj.getName() << " [HP: " << obj.getHP() << ", EP: " << obj.getEP() << ", Attack: " << obj.getAP() << "]";
    return os;
}
