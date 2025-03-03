#pragma once
#include <iostream>
#include <string.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    protected:
		std::string type;
    private:
		Brain *Cat_brain;
    public:
		Cat();
		~Cat() override;
		Cat(Cat&);
		Cat& operator=(const Cat&); 

        std::string getType() const;
        void setType(std::string);

		void makeSound() const override; // will use own function, not base class function
    
};
