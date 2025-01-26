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
		Fixed(); 								// Default cons
		Fixed(const int);						// Default cons with arg
		Fixed(const float);						// Default cons with arg
		~Fixed();								// Default destructor
		Fixed(const Fixed& rhs);				// Copy cons
		Fixed& operator=(const Fixed& rhs);		// Copy assignment operator
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		float toFloat( void ) const;
		int toInt( void ) const;		
		int getRawBits() const;
		void setRawBits(int const);
};