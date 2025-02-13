#include "Fixed.hpp"
#include <cmath>
#include <iostream>

// Default constructor
Fixed::Fixed() : _value(0) 
{
    std::cout << "default constructor called\n";
}

// Int constructor
Fixed::Fixed(const int n) : _value(n << _fractionalBits) 
{
    std::cout << "int constructor called\n";
}

// Float constructor
Fixed::Fixed(const float f) : _value(roundf(f * (1 << _fractionalBits))) 
{
    std::cout << "float constructor called\n";
}

// Copy constructor
Fixed::Fixed(const Fixed& ref) : _value(ref._value) 
{
    std::cout << "copy constructor called\n";
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& ref) 
{
    if (this != &ref) {
        this->_value = ref._value;
    }
    std::cout << "copy assignment operator called\n";
    return *this;
}

// Overload operator<<
std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
    os << obj.toFloat();
    return os;
}

// Convert to float
float Fixed::toFloat(void) const 
{
    return static_cast<float>(this->_value) / (1 << this->_fractionalBits);
}

// Convert to int
int Fixed::toInt(void) const 
{
    return this->_value >> this->_fractionalBits;
}

// Max function
Fixed Fixed::max(const Fixed& a, const Fixed& b) 
{
    return (a > b) ? a : b;
}

// Min function
Fixed Fixed::min(const Fixed& a, const Fixed& b) 
{
    return (a < b) ? a : b;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& a) const 
{
    return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed& a) const 
{
    return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed& a) const 
{
    return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed& a) const 
{
    return Fixed(this->toFloat() / a.toFloat());
}

// Increment and decrement operators
Fixed& Fixed::operator++() 
{
    ++this->_value;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp = *this;
    ++this->_value;
    return temp;
}

Fixed& Fixed::operator--() 
{
    --this->_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --this->_value;
    return temp;
}

// Destructor
Fixed::~Fixed() 
{
    std::cout << "destructor called\n";
}
