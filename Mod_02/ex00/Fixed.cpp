#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "default constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "default destructor called\n";
}

Fixed::Fixed( const Fixed& ref )
{
    std::cout << "copy constructor called\n";
    this->_value = ref._value;
   // this->_fractional = ref._fractional;
}

Fixed &Fixed::operator=( const Fixed& ref )
{
    if (this != &ref) {
        this->_value = ref._value;
       // this->_fractional = ref._fractional;
    }
    std::cout << "copy assignment operater called\n";
    return *this;
}

int Fixed::getRawBits(void) const //esssentially makes it read only
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
