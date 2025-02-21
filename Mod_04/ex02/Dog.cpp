#include "Dog.hpp"

	Dog::Dog() : type("Dog like Animal") 
	{
		std::cout << "default Dog constructor called\n";
		Dog_brain = new Brain;
	}

	Dog::~Dog()
	{
		std::cout << "default Dog destructor called\n";	
		delete Dog_brain;
	}

	Dog::Dog(Dog& ref) : type(ref.type)
	{
		std	::cout << "Dog copy constructor called\n";
	}

	Dog& Dog::operator=(const Dog& rhs)
	{
		if (this != &rhs)
		{
			this-> type = rhs.type;
		}
		std::cout << "default Dog copy assignment operator called\n";
	
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
