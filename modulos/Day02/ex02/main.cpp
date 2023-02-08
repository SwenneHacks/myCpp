#include <string>
#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(50);

    std::cout << " ____ SUBJECT TESTS ____ " << std::endl;
    std::cout << a << BLUE << "(a)" << RESET;
    std::cout << ++a << BLUE << "(++a)" << RESET;
    std::cout << a << BLUE << "(a) " << RESET;
    std::cout << a++ << BLUE << "(a++)  " << RESET;
    std::cout << a << BLUE << "(a)  " << RESET;
    std::cout << b << BLUE << "(b)  " << RESET;
    std::cout << Fixed::max( a, b ) << BLUE << "(max a,b)" << RESET;

    std::cout << " ____ MY OWN TESTS ____ " << std::endl;
    std::cout << c << YELLOW << "" << RESET;
	std::cout << c / 2 << YELLOW << "[c / 2] " << RESET;
	std::cout << c * -1 << YELLOW << "[c * -1]" << RESET;
	std::cout << c + 5 << YELLOW << "[c + 5]" << RESET;
	std::cout << c + 5 << YELLOW << "[c/2 + 5]" << RESET;
	std::cout << c / 4 << YELLOW << "[c/4] " << RESET;
	std::cout << Fixed::min(a, c) << YELLOW << "[min(a,c)] " << RESET;
    std::cout << c << YELLOW << "[c] " << RESET;
	std::cout << c-- << YELLOW << "[c--] " << RESET;
    std::cout << c << YELLOW << "[c] " << RESET;
	std::cout << --c << YELLOW << "[--c] " << RESET;
    std::cout << c << YELLOW << "[c] " << RESET;
	std::cout << c +1 +1 +1 << YELLOW << "[c +1 +1 +1] " << RESET;

    std::cout << " ____ COMPARISSON ____ " << std::endl;
    c = 10; 
    a = 20;
    if (c < a)
        std::cout << "YES" << RED << "[10 <= 20] " << RESET;
    if (c != a)
        std::cout << "YES" << RED << "[10 != 20]" << RESET;
	if (c == 10)
        std::cout << "YES" << RED << "[c(10) == 10]" << RESET;
	if (c * a == 200) 
        std::cout << "YES" << RED << "[c(10) * a(20) = 200]" << RESET;
	while (c <= 15) {
        c += 1;
        std::cout << c << RED << "[while 10 < 15, c += 1] " << RESET;
    }
    std::cout << " ____ EXTRA STUFF ____ " << std::endl;
    c = 10;
    a = 20;
    c += a;
    std::cout << c << GREEN << "[c(10) += a(20)] " << RESET;
    c = 10;
    c += 10;
    std::cout << c << GREEN << "[c += 10 = 20] " << RESET;
    c -= 100;
    std::cout << c << GREEN << "[c -= 100 = 20] " << RESET;
    c -= a;
    std::cout << c << GREEN << "[c(80) -= 20] " << RESET;
    std::cout << GREEN << "[DESERVING BONUS FOR THIS] " << RESET;
    return 0;
}
