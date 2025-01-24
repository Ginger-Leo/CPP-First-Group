#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

class Fixed
{
	private:
		int _value = 0;
		int _fractional_bits = 8;
	public:
		Fixed(); 								// Default cons
		Fixed(const int);						// Default cons with arg
		Fixed(const float);						// Default cons with arg
		~Fixed();								// Default destructor
		Fixed(const Fixed& rhs);				// Copy cons
		Fixed& operator=(const Fixed& rhs);		// Copy assignment operator
		float toFloat( void ) const;
		int toInt( void ) const;		

};