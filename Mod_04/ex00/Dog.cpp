#include "Dog.hpp"

	Dog()
	{
		type = "Dog like Animmal"
		std::cout << "default Dog constructor called\n";

	}

	~Dog()
	{
		std::cout << "default Dog destructor called\n";	
	}

	Dog(Dog& rhs)
	{
		std	::cout << "default Dog copy constructor called\n";
	}

	Dog& operator=(const Dog& rhs)
	{
    	std::cout << "default Dog copy assignment operator called\n";
	} 

	virtual void Dog::makeSound()
	{

	}
