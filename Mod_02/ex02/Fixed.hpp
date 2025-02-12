#pragma once
#include <iostream>
#include <cmath>
#include <string.h>
#include <stdlib.h>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        Fixed();                                // Default constructor
        Fixed(const int);                       // Int constructor
        Fixed(const float);                     // Float constructor
        Fixed(const Fixed& ref);                // Copy constructor
        Fixed& operator=(const Fixed& ref);     // Copy assignment operator
        ~Fixed();                               // Destructor

        float toFloat( void ) const;
        int toInt( void ) const;

        static Fixed max(const Fixed& a, const Fixed& b); 
        static Fixed min(const Fixed& a, const Fixed& b);

        bool operator>(const Fixed& a) const; 
        bool operator<(const Fixed& a) const;
        bool operator>=(const Fixed& a) const;
        bool operator<=(const Fixed& a) const;
        bool operator!=(const Fixed& a) const;
        bool operator==(const Fixed& a) const;

        Fixed operator+(const Fixed& a) const; 
        Fixed operator-(const Fixed& a) const;
        Fixed operator*(const Fixed& a) const;
        Fixed operator/(const Fixed& a) const;

        Fixed& operator++();    // Prefix increment
        Fixed operator++(int);  // Postfix increment
        Fixed& operator--();    // Prefix decrement
        Fixed operator--(int);  // Postfix decrement

        friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
};
