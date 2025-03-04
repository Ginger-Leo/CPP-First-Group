#include "Cat.hpp"

	Cat::Cat() : Animal()
	{
		type = "Cat";
		std::cout << "default Cat constructor called\n";
	}

	Cat::~Cat()
	{
    	std::cout << "default Cat destructor called\n";
	}

	Cat::Cat(Cat& ref) : Animal(ref)
	{
		type = ref.type;
		std	::cout << "Cat copy constructor called\n";
	}

	Cat& Cat::operator=(const Cat& rhs)
	{
		if (this != &rhs)
		{
			Animal::operator=(rhs);
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


