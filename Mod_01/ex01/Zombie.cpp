#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout <<"generic zombie created." << std::endl;
}
Zombie::Zombie(std::string _name)
{
	std::cout << _name << " created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed!" << std::endl;
	
}
void Zombie::announce(std::string _name)
{
	std::cout << this-> _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
