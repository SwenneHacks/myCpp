#include <iostream>
#include "Fixed.hpp"

void test(void) 
{
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

std::cout << RED 
<<"_________" << BLUE 
<< "MY TEST" << RED 
<< "________\n" << RESET 
<< std::endl;

a.setRawBits(1);
a = b;
b.setRawBits(1);
c = b;
std::cout << a.getRawBits() <<" = a"<< std::endl;
std::cout << b.getRawBits() <<" = b"<< std::endl;
std::cout << c.getRawBits() <<" = c"<< std::endl;
return 0;
}

int		main(int ac, char **av)
{
	test();
	std::cout << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	if (ac > 1 && !strcmp(av[1],"leaks"))
		system(s.c_str());
	else
	{
		s += " >> leaks.txt";
		system(s.c_str());
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}

