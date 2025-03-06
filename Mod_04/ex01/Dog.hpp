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
		~Dog() override;
		Dog(const Dog&);
		Dog& operator=(const Dog&); 

        std::string getType() const override;
        void setType(std::string);

		std::string getIdea(unsigned int) const;
        void setIdea(std::string, unsigned int);

		void makeSound() const override; // will use own function, not base class function
    
};
