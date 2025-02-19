#include <iostream>
#include <stdlib>
#include "Animal.hpp"


class Dog : public Animal
{
    protected:

    private:

    public:
		Dog();
		~Dog();
		Dog(Dog&);
		Dog& operator=(const Dog&); 
		virtual void makeSound();
    
};
