#pragma once
#include <iostream>
#include <string.h>
#include "Animal.hpp"

class Cat : public Animal
{
    protected:
		std::string type;
    private:
	
    public:
		Cat();
		virtual ~Cat();
		Cat(Cat&);
		Cat& operator=(const Cat&); 

        std::string getType() const;
        void setType(std::string);

		virtual void makeSound() const; // will use own function, not base class function
    
};
