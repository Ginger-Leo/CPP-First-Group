#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
       
    Fixed a;        //using default constructor
    Fixed b( a );   //using copy constructor, 'b' is created using 'a' as a template
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}