#include "Zombie.hpp"

int main(void)
{
	Zombie Zombie1("fern");
	Zombie Zombie2;
	Zombie* Zombie3;
	Zombie3 = newZombie("ali");
	Zombie1.announce();
	Zombie3->announce();
	delete Zombie3;
}
