#include "converter.hpp"

converter::converter()
{
    this->_integer = 0;
    this->_s_integer = 8;
}

converter::~converter()
{
}

converter::converter( const converter& ref )
{
    this->_integer = ref._integer;
    this->_s_integer = ref._s_integer;
}

converter &converter::operator=( const converter& ref )
{
    if (this != &ref) {
        this->_integer = ref._integer;
        this->_s_integer = ref._s_integer;
    }
    return *this;
}

int getRawBits( void ) const
{
    int bits;

    return bits;
}

void setRawBits( int const raw )
{
    this-> _integer = converting function(this-> _s_integer, raw);
}