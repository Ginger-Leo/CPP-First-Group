#pragma once
#include <iostream>
#include <string.h>
#include "Animal.hpp"

class Cat : public Animal
{
    protected:
		
    private:
	
    public:
		Cat();
		~Cat() override;
		Cat(Cat&);
		Cat& operator=(const Cat&); 

        std::string getType() const;
        void setType(std::string);

		void makeSound() const override; // will use own function, not base class function
    
};
