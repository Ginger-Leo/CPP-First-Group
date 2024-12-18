#pragma once
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:	
		Zombie();
		Zombie(std::string);
		~Zombie();
		void announce(std::string);

};

Zombie*	zombieHorde( int N, std::string name );

