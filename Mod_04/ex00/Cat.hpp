#include <iostream>
#include <stdlib>
#include "Animal.hpp"

class Cat : public Animal
{
    protected:
		type = "Cat" 
    private:

    public:
		Cat();
		~Cat();
		Cat(Cat&);
		Cat& operator=(const Cat&); 
		virtual void makeSound();
    
};
