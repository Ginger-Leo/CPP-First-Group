#pragma once
#include <stdlib.h>
#include <string.h>
#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractional = 8;
    public:
        Fixed();                                // Defaut constructor
        ~Fixed();                               // Default destructor
        Fixed( const Fixed& ref );              // Copy contructor // essentially creating a clone of the object created
        Fixed &operator=( const Fixed& ref );   // copy assignment operator // copies the information from class into another of the same class
        int getRawBits( void ) const;           // returns the raw value of the Fixed-point number.
        void setRawBits( int const raw );       // sets the raw value of the Fixed-point number.

};