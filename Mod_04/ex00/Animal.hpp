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
        Animal& operator=(const Animal& rhs); 
        ~Animal();
        makeSound();
};
