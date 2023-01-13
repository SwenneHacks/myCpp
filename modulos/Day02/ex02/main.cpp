#include <string>
#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(50);

    std::cout << " ____ SUBJECT TESTS ____ " << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << " ____ MY OWN TESTS ____ " << std::endl;
    std::cout << c << std::endl;
	std::cout << c / 2 << std::endl;
	std::cout << c * 2 << std::endl;
	std::cout << c + 5 << std::endl;
	c = c + 5;
	std::cout << c + 5 << std::endl;
	c = c - 10.5f;
	std::cout << c / 2 << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;
	c = 0;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;

    return 0;
}
