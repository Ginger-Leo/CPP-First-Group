#pragma once
#include <iostream>
#include <string.h>
#include "Animal.hpp"


class Dog : public Animal
{
    protected:
        
    private:
    
    public:
		Dog();
		~Dog() override;
		Dog(Dog&);
		Dog& operator=(const Dog&); 

        std::string getType() const;
        void setType(std::string);

		void makeSound() const override; // will use own function, not base class function
    
};
