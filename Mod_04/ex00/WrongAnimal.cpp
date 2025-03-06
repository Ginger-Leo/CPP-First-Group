#include "WrongAnimal.hpp"

		WrongAnimal::WrongAnimal()
		{
			std::cout << "default wrong animal constructor called\n"; 
		}

		WrongAnimal::~WrongAnimal()
		{
			std::cout << "default wrong animal destructor called\n";
		}

		WrongAnimal::WrongAnimal(WrongAnimal& rhs)
		{
			type = rhs.type;
			std::cout << "wrong animal copy constructor called\n";
		}

		WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
		{
			if (this != &rhs)
			{
				this-> type = rhs.type;
			}
			std::cout << "wrong ANIMAL copy assignment operator called\n";

			return *this;
		}

        std::string WrongAnimal::getType() const
		{
			return type;
		}

        void WrongAnimal::WrongAnimal::setType(std::string new_type)
		{
			type = new_type;
		}

        void WrongAnimal::makeSound() const
		{
			std::cout << "default wrong animal sound.....mooark!\n";
		}
