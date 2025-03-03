#include "Animal.hpp"

Animal::Animal() : type("Basic Animal")
{
    std::cout << "default Animal constructor called\n";
}

Animal::Animal(Animal& ref) : type(ref.type) 
{
    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs)
    {
        this-> type = rhs.type;
    }
    std::cout << "Animal copy assignment operator called\n";

    return *this;
} 

Animal::~Animal()
{  
    std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const
{
    return type;
}

void Animal::setType(std::string newType)
{
    type = newType;
}

void Animal::makeSound() const
{
    std::cout << "Generic animal noise\n";
}
