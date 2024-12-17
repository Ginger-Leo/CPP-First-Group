#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string m_name;

	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void announce(void);
};
	
	
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );