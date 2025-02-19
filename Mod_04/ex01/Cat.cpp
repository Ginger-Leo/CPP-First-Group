#include "Cat.hpp"

	Cat::Cat() : type("Cat like Animal")
	{
		std::cout << "default Cat constructor called\n";
	}

	Cat::~Cat()
	{
    	std::cout << "default Cat destructor called\n";
	}

	Cat::Cat(Cat& ref) : type(ref.type)
	{
		std	::cout << "default Cat copy constructor called\n";
	}

	Cat& Cat::operator=(const Cat& rhs)
	{
		if (this != &rhs)
		{
			this-> type = rhs.type;
		}
		std::cout << "default Cat copy assignment operator called\n";
	
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


