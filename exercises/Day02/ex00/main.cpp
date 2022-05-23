#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;


std::cout << RED <<"_________" << BLUE << "MY TEST" << RED << "________\n" << RESET << std::endl;
b.setRawBits(1);
std::cout << a.getRawBits() <<" = a"<< std::endl;
std::cout << b.getRawBits() <<" = b"<< std::endl;
std::cout << c.getRawBits() <<" = c"<< std::endl;
return 0;
}
