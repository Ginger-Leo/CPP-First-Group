#include "ClapTrap.hpp"

#include "FragTrap.hpp"

    FragTrap::FragTrap() : ClapTrap()
    {
        std::cout << "default Fragtrap contructor\n";
    }

    FragTrap::FragTrap(std::string name) : ClapTrap(name)
    {
        std::cout << "named Fragtrap contructor\n";
		_name = name;
		_hitPoints = 100;
		_energyPoints = 100;
		_attackDamage = 30;
    }

	FragTrap::FragTrap(const FragTrap& rhs)
	{
		_name = rhs._name;
		 _hitPoints = rhs._hitPoints;
		 _energyPoints = rhs._energyPoints;
		 _attackDamage = rhs._attackDamage;
		std::cout << "FragTrap copy constructor\n";
	}

	FragTrap& FragTrap::operator=(const FragTrap& rhs)
	{
		if (this != &rhs) 
		{
			ClapTrap::operator=(rhs);
		
		}
    return *this;
}
	

    FragTrap::~FragTrap()
    {
        std::cout << "default Fragtrap destructor\n";
    }

    void FragTrap::highFivesGuys(void)
    {
        std::cout << "High Five graciously given\n";
    }

