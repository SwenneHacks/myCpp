



#include "span.hpp"
#include <iostream>
#include <stdlib.h>
#include <ctime>


int	main(void)
{
	Span sp = Span(10000);
	std::vector<int> vec;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
	{
//		vec.push_back(rand() % 100000);
		vec.push_back(i);
	}
	try {
		sp.addNumber(vec.begin(), vec.end());
	}
	catch (std::exception& e) {
		std::cout << "failed: " << e.what() << std::endl;
	}
	try {
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	Span	other(6);

	other.addNumber(-20);
	other.addNumber(-13);
	other.addNumber(12);
	other.addNumber(20);
	other.addNumber(18);
	other.addNumber(-12);

	std::cout << "LONGEST: " << other.longestSpan() << std::endl;
	std::cout << "SHORTEST: " << other.shortestSpan() << std::endl;
	return 0;
}
