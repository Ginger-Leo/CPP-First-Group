#include "Dog.hpp"
#include "Brain.hpp"

	Dog::Dog() :  Animal()
	{
		type = "Dog";
		std::cout << "default Dog constructor called\n";
		Dog_brain = new Brain;
	}

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
			type = rhs.type;
			
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

	std::string Dog::getIdea(unsigned int i) const
	{
		if (i > 99)
			return "your  Dog brain is too small for that ammount of ideas\n";
		return this->Dog_brain->getIdea(i); 
	}

	void Dog::setIdea(std::string new_idea, unsigned int i)
	{
		if (i > 99)
		{
			std::cerr << "ideas are too far out of the box (brain)\n";
			return ;
		}
		this->Dog_brain->setIdea(new_idea, i);
	}
