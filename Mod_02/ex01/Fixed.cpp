#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "vanilla constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(const int i)
{
	std::cout << "int-structor called\n";
	this->_value = i << _fractionalBits;
}
		
Fixed::Fixed(const float f)
{
	std::cout << "float-structor called\n";
	this->_value = roundf(f * (1 << _fractionalBits));
}
		
Fixed::~Fixed()
{
	std::cout << "destructor called\n";
}
		
Fixed::Fixed(const Fixed& ref)
{
	this->_value = ref._value;
	std::cout << "copy constructor called\n";
}
		
Fixed &Fixed::operator=(const Fixed& ref)
{
	if (this != &ref) 
	{
        this->_value = ref._value;
       // this->_fractional = ref._fractional;
    }
    std::cout << "copy assignment operator engaged\n";
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
    os << obj.toFloat(); // assuming toFloat() converts Fixed to float
    return os;
}
		
float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->_value) / (1 << this->_fractionalBits);
}

int Fixed::toInt( void ) const
{
	return this->_value >> this->_fractionalBits;
}

int Fixed::getRawBits() const
{
	return this->_value;
}
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
