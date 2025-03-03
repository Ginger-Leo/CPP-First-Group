#include "Dog.hpp"

	Dog::Dog() : Animal()
	{
		type = "Dog like Animal"; 
		std::cout << "default Dog constructor called\n";
	}

	Dog::~Dog()
	{
		std::cout << "Dog destructor called\n";	
	}

	Dog::Dog(Dog& ref) 
	{
		type = ref.type;
		std	::cout << "Dog copy constructor called\n";
	}

	Dog& Dog::operator=(const Dog& rhs)
	{
		if (this != &rhs)
		{
			Animal::operator=(rhs);
		}
		std::cout << "Dog copy assignment operator called\n";
	
		return *this;
	}  

    std::string Dog::getType() const
    {
        return type;
    }

    void Dog::setType(std::string newType)
    {
        type = newType;
    }

	void Dog::makeSound() const
	{
        std::cout << "Dog sounding noise\n";
	}
