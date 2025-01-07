#include "Zombie.hpp"

Zombie::Zombie(void)
{
}
Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed!" << std::endl;
}
std::string Zombie::getName()
{
	return this->_name;
}
void Zombie::setName(std::string name)
{
	this->_name = name;
}
void Zombie::announce()
{
	std::cout << this->_name << std::endl;
}
