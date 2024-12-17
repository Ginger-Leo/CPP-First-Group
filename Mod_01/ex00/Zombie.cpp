#include "Zombie.hpp"

Zombie::Zombie() : m_name("default")
{
	std::cout << "Constructor" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->m_name = name;
	std::cout << "Name constructor: " << m_name << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Destructor" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
