#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1;
	Zombie zombie2("zomzom");
	Zombie* horde = zombieHorde(5, "pack"); 

	delete[] horde;

	return 42;
}
