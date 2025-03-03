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
      	Brain *Dog_brain;
    public:
		Dog();
		Dog(std::string);
		~Dog() override;
		Dog(Dog&);
		Dog& operator=(const Dog&); 

        std::string getType() const;
        void setType(std::string);

		void makeSound() const override; // will use own function, not base class function
    
};
