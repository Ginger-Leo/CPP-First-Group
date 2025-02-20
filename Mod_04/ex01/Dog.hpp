#pragma once
#include <iostream>
#include <string.h>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    protected:
        std::string type;
    private:
      Brain *dog_brain;
    public:
		Dog();
		virtual ~Dog();
		Dog(Dog&);
		Dog& operator=(const Dog&); 

        std::string getType() const;
        void setType(std::string);

		virtual void makeSound() const; // will use own function, not base class function
    
};
