#include <iostream>
#include "Fixed.hpp"

void printFixeNr(Fixed f) { 
		std::cout 
	<<  f.getRawBits() 
	<< "(copy out of scope)" 
	<< std::endl;
}

void test(void) 
{
	std::cout
<< RED << "____________"
<< BLUE << " SUBJECT "
<< RED << "____________"
<< RESET << std::endl;

Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

	std::cout
<< RED << "____________"
<< BLUE << " MY TEST "
<< RED << "____________"
<< RESET << std::endl;

int number;
std::cout << YELLOW 
<< "Now choose a number: " ;
std::cin >> number;
std::cout << RESET;

// CHOOSING NUMBERS
b.setRawBits(number);
std::cout << b.getRawBits() 
<< " (b = choice) " << std::endl;

// DIVIDING NUMBERS
c.setRawBits(5 / 3);
std::cout << c.getRawBits() 
<< " (b = 5 / 3) "<< std::endl;


// COPY OUT OF SCOPE 
Fixed d(b);
printFixeNr(d);
std::cout << d.getRawBits() 
<< " d(copyed value) " << std::endl;

// (remove *this = copy)

}

void	check_leaks(int ac, char **av)
{
	std::cout << RED << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	if (ac > 1 && !strcmp(av[1],"leaks"))
		system(s.c_str());
	else {
		s += " >> leaks.txt";
		system(s.c_str());
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
}

int		main(int ac, char **av)
{
	test();
	check_leaks(ac, av);
	return (0);
}

