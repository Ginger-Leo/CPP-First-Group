#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* nombie = new Zombie(name);
	return (nombie); 
}
