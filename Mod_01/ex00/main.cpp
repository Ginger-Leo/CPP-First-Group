#include "Zombie.hpp"

int main(void)
{
	Zombie Zombie1("fern");
	Zombie Zombie2;
	{
		Zombie Zombie3;
	}

	Zombie1.announce();
	Zombie2.announce();
}
