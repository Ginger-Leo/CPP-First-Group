#include "Cat.hpp"

	Cat()
	{
		type = "Cat like Animal"
		std::cout << "default Cat constructor called\n";

	}

	~Cat()
	{
    	std::cout << "default Cat destructor called\n";
	}

	Cat(Cat& rhs)
	{
		std	::cout << "default Cat copy constructor called\n";
	}

	Cat& operator=(const Cat& rhs)
	{
    	std::cout << "default Cat copy assignment operator called\n";
	} 

	Cat::virtual void makeSound()
	{

	}

