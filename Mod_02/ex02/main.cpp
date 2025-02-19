#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int main( void )
{
    Fixed a(40);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << "A        : "<< a << std::endl;
    std::cout << "B        : "<< b << std::endl;
    std::cout << "A + B    : "<< a + b << std::endl;
    std::cout << "A - B    : "<< a - b << std::endl;
    std::cout << "A * B    : "<< a * b << std::endl;
    std::cout << "A / B    : "<< a / b << std::endl;
    std::cout << "++A      : "<< ++a << std::endl;
    std::cout << "A        : "<< a << std::endl;
    std::cout << "A++      : "<< a++ << std::endl;
    std::cout << "A        : "<< a << std::endl;
    std::cout << "B(as int): "<< b.toInt() << std::endl;
    std::cout << "max (a,b): "<< Fixed::max( a, b.toInt() ) << std::endl;
    std::cout << "min (a,b): "<< Fixed::min( a, b.toInt() ) << std::endl;

    return 0;
}