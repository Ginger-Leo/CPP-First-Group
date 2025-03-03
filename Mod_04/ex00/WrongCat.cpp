#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrong Cat default constructor operator called\n";
}
WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat default destructor operator called\n";
}
WrongCat::WrongCat(WrongCat& ref)
{
	type = ref.type;
	 std::cout << "Animal copy constructor called\n";
}
WrongCat& WrongCat::operator=(const WrongCat&)
{

}

std::string WrongCat::getType() const
{

}
void WrongCat::setType(std::string)
{

}

void WrongCat::makeSound()
{

}