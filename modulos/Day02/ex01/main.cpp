#include <string>
#include <iostream>
#include "Fixed.hpp"


Fixed subject_test(void)
{  
    Fixed a;
    Fixed b( 10 );
    Fixed c( 42.42f );
    Fixed d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    // MY TEST YOOOOoooooO
    Fixed e;
    e = Fixed( b = a = Fixed(c) );
    std::cout << YELLOW << "e is " << e << std::endl;
    std::cout << "e is " << e.toInt() << " as int" << std::endl;
    return(e);
}

int main( void ) 
{
    Fixed f;
    f = subject_test();

    std::cout << "f is " << f << std::endl;
    std::cout << "f is " << f.toInt() << " as int" << std::endl;
    return 0;
}
