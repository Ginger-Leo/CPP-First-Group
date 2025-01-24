#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "default constructor called\n";
}

Fixed::Fixed(const int)
{
	std::cout << "int constructor called\n";

}
		
Fixed::Fixed(const float)
{
	std::cout << "float constructor called\n";
}
		
Fixed::~Fixed()
{
	std::cout << "destructor called\n";
}
		
Fixed::Fixed(const Fixed& rhs)
{
	std::cout << "copy constructor called\n";
}
		
Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << "copy assignment operator called\n";
}
		
float Fixed::toFloat( void ) const
{

}

int Fixed::toInt( void ) const
{

}
