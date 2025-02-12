#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() : _value(0) //default constructor
{
    std::cout << "default constuctor called\n";
}

Fixed::Fixed(const int n) : _value(n << _fractionalBits) // int constructor
{
    std::cout << "int constuctor called\n";
}

Fixed::Fixed(float f) : _value(roundf(f * (1 << _fractionalBits))) // float constructor
{
    std::cout << "float constuctor called\n";
}

Fixed::Fixed(const Fixed& ref) : _value(ref._value) // copy constructor
{
    std::cout << "copy constuctor called\n";
}

Fixed& Fixed::operator=(const Fixed& ref) // copy assignment operator
{
    if (this != &ref) 
        this->_value = ref._value;
    std::cout << "copy assignment operator called\n";  
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) // overload operator
{
    os << obj.toFloat();
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

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b; // Ternaries baby!!
}

/*
Fixed Fixed::min(Fixed& a, Fixed& b) 
{
    return (a > b) ? a : b;
}

Fixed Fixed::min(Fixed& a, Fixed& b) const
{
    return (a < b) ? a : b;
}
*/

bool Fixed::operator>=(const Fixed& a) const 
{
    return this->_value >= a._value;
}

bool Fixed::operator<=(const Fixed& a) const 
{
    return this->_value <= a._value;
}

bool Fixed::operator!=(const Fixed& a) const 
{
    return this->_value != a._value;
}

bool Fixed::operator==(const Fixed& a) const 
{
    return this->_value == a._value;
}

bool Fixed::operator>(const Fixed& a) const
{
    return this->_value > a._value;
}

bool Fixed::operator<(const Fixed& a) const
{
   return this->_value < a._value;
}

Fixed::~Fixed()
{

}
