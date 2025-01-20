#pragma once
#include <stdlib.h>
#include <string.h>

class converter
{
    private:
        int _integer;
        static int _s_integer;
    public:
        converter();
        ~converter();
        converter( const converter& ref );
        converter &operator=( const converter& ref )
        int getRawBits( void ) const; //that returns the raw value of the fixed-point value.
        void setRawBits( int const raw ); //that sets the raw value of the fixed-point number.


}