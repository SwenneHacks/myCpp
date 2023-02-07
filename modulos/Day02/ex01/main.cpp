#include <string>
#include <iostream>
#include "Fixed.hpp"

Fixed my_own_test(Fixed x, Fixed y, Fixed z)
{
    Fixed e;
    e = Fixed( x = y = Fixed(z) );
    std::cout << BLUE << "e is " << e << std::endl;
    std::cout << "e is " << e.toInt() << " as int" << std::endl;
    return e;
}

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

    // a = my_own_test(a, b, c);
    return a;
}

void check_leaks(char **av)
{
	std::cout << RED << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
}

int main(int ac, char **av) 
{
    subject_test();

    (void)ac;
	check_leaks(av);
    return 0;
}
