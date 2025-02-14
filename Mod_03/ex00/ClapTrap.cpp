#include "ClapTrap.hpp"

// Orthadox Canonical Form
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
}
ClapTrap::~ClapTrap(){
}
ClapTrap::ClapTrap(ClapTrap& rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage){
}
ClapTrap::ClapTrap& operator=(const ClapTrap& rhs){
    if (this != &ref){
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
    std::cout << getName() << " takes " << amount << " of damage\n";
    _hitPoints -= amount;
}

//When ClapTrap repairs itself, it gets <amount> hit points back.
ClapTrap::void beRepaired(unsigned int amount)
{

}

//Getters and Setters
std::string ClapTrap::getName() const {
    return _name;
}
void ClapTrap::setName(std::string name){
    _name = name;
}
ClapTrap::int getHP() const {
    return _hitPoints;
}
ClapTrap::void setHP(int HP){
    _hitPoints = HP;
}
ClapTrap::int getEP() const {
    return _energyPoints;
}
ClapTrap::void setEP(int EP){
    _energyPoints = EP;
}
ClapTrap::int getAttack() const {
    return _attackDamage;
}
void ClapTrap::setAttack(int Att){
    _attackDamage = Att;
}


friend std::ostream& operator<<(std::ostream& os, const ClapTrap& obj){
    os << "ClapTrap " << obj.getName() << " [HP: " << obj.getHP() << ", EP: " << obj.getEP() << ", Attack: " << obj.getAttack() << "]";
    return os;
}
