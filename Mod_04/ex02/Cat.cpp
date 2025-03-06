#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() :  Animal()
{
	type = "Cat";
	std::cout << "default Cat constructor called\n";
	Cat_brain = new Brain;
}

	Cat::~Cat()
	{
    	std::cout << "Cat destructor called\n";
		delete Cat_brain;
	}

	Cat::Cat(const Cat& ref) : Animal(ref)
	{
		type = ref.type;
		Cat_brain = new Brain(*ref.Cat_brain);
		std::cout << "Cat copy constructor called\n";
	}


	Cat& Cat::operator=(const Cat& rhs)
	{
		if (this != &rhs)
		{
			Animal::operator=(rhs);
			if (Cat_brain)
				delete Cat_brain;
			Cat_brain = new Brain(*rhs.Cat_brain);
			type = rhs.type;
			
		}
		std::cout << "Cat copy assignment operator called\n";
	
		return *this;
	} 

    std::string Cat::getType() const
    {
        return type;
    }

    void Cat::setType(std::string newType)
    {
        type = newType;
    }

	void Cat::makeSound() const
	{
        std::cout << "Cat sounding noise\n";
	}

	std::string Cat::getIdea(unsigned int i) const
	{
		if (i > 99)
			return "your  cat brain is too small for that ammount of ideas\n";
		return this->Cat_brain->getIdea(i); 
	}

	void Cat::setIdea(std::string new_idea, unsigned int i)
	{
		if (i > 99)
		{
			std::cerr << "ideas are too far out of the box (brain)\n";
			return ;
		}
		this->Cat_brain->setIdea(new_idea, i);
	}