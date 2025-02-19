#include "Animal.hpp"

Animal::Animal()
{
	type = "Basic Animal"
    std::cout << "default Animal constructor called\n";
}
Animal::Animal(Animal& ref) : type(ref.type) 
{
    std::cout << "default Animal copy constructor called\n";
}
Animal::ClapTrap& operator=(const ClapTrap& rhs)
{
    if (this != &rhs) {
        this-> type = rhs.type;
       
    }
    std::cout << "default Animal copy assignment operator called\n";

    return *this;
} 
Animal::~Animal()
{  
    std::cout << "default Animal destructor called\n";
}
void Animal::makeSound()
{

}
