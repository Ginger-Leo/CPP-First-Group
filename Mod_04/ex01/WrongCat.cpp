#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

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
WrongCat& WrongCat::operator=(const WrongCat& rhs) 
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	std::cout << "wrong CAT copy assignment operator called";
	return *this;
}
std::string WrongCat::getType() const
{
 return type;
}
void WrongCat::setType(std::string newtype)
{
	type = newtype;
}

void WrongCat::makeSound() const
{
	std::cout << "default wrong cat sound.....fanrkkk!\n";
}
