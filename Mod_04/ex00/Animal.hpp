#include <iostream>
#include <stdlib>

class Animal
{
    protected:
        std::string type;
    private:

    public:
        Animal();
        Animal(Animal&);
        ClapTrap& operator=(const ClapTrap& rhs); 
        ~Animal();
        makeSound();
};
