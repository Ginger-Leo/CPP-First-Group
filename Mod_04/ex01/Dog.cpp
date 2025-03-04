#include "Dog.hpp"
#include "Brain.hpp"

	Dog::Dog() :  Animal()
	{
		type = "Dog like Animal";
		std::cout << "default Dog constructor called\n";
		Dog_brain = new Brain;
	}

	// Dog::Dog(std::string type) : Animal(std::string new_type)
	// {  
	// 	this->type = type; 
	// 	std::cout << "default Dog constructor called\n";
	// 	Dog_brain = new Brain;
	// }

	Dog::~Dog()
	{
		std::cout << "Dog destructor called\n";	
		delete Dog_brain;
	}

	Dog::Dog(const Dog& ref) : Animal(ref)
	{
		type = ref.type;
		Dog_brain = new Brain(*ref.Dog_brain);
		std::cout << "Dog copy constructor called\n";
	}

	Dog& Dog::operator=(const Dog& rhs)
	{
		if (this != &rhs)
		{
			Animal::operator=(rhs);
			if (Dog_brain)
				delete Dog_brain;
			Dog_brain = new Brain(*rhs.Dog_brain);
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
