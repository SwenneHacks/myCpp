#include <iostream>
#include "Fixed.hpp"

void printFixeNr(Fixed f) { 
		std::cout 
	<<  f.getRawBits() 
	<< YELLOW << " (copy out of scope)" 
	<< RESET << std::endl;
}

void my_own_tests(){
	std::cout
	<< RED << "____________"
	<< BLUE << " MY TEST "
	<< RED << "____________"
	<< RESET << 
	std::endl;

	int number;
	std::cout << YELLOW 
	<< "Now choose a number: " ;
	std::cin >> number;
	std::cout << RESET;

	Fixed a;
	// CHOOSING NUMBERS
	a.setRawBits(number);
	std::cout << a.getRawBits() 
	<< RED << " (b = choice) " 
	<< RESET << std::endl;

	Fixed b;
	// DIVIDING NUMBERS
	b.setRawBits(5 / 3);
	std::cout << b.getRawBits() 
	<< BLUE << " (b = 5 / 3) "
	<< RESET << std::endl;

	// COPY OUT OF SCOPE 
	Fixed d(a);
	printFixeNr(d);
	std::cout << d.getRawBits() <<
	GREEN << " d(copied value) " << 
	RESET << std::endl;
	// (remove *this = copy in Fixed.cpp file)
}

void subject_test(){
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

void check_leaks(char **av){
	std::cout << RED << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
}

int	 main(int ac, char **av){
	std::cout
	<< RED << "____________"
	<< BLUE << " SUBJECT "
	<< RED << "____________"
	<< RESET << 
	std::endl;

	subject_test();
	my_own_tests();

	(void)ac;
	check_leaks(av);

	return (0);
}

