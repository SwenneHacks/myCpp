/*
	CPP PISCINE - 42 NETWORK
		STUDENT: swofferh
*/
#include "span.hpp"

int		main(int ac, char **av)
{
	Span other = Span(5);
	other.addNumber(11);
	other.addNumber(5);
	other.addNumber(17);
	other.addNumber(9);
	other.addNumber(3);
	std::cout << Y << "Numbers: " << W;
	other.printNumbers();
	
	/* _________________________________________________________________*/
	std::cout << Y << "Now testing basic functionality (subject main)" << W;
	std::cout << "SHORTEST: " << other.shortestSpan() << std::endl;
	std::cout << "LONGEST: " << other.longestSpan() << std::endl;
	
	/* _________________________________________________________________*/
	std::cout << Y << "Span(5) adding extra element (already at 5)" << W;
	try { other.addNumber(-4); }
	catch (const std::exception &e) {std::cerr << e.what() << std::endl;}
	
	/* ___________________________________________, not allowed." << W;
	try { Span empty = Span(0); }
	catch (const std::exception &e) {std::cerr << e.what() << std::endl;}
	
	/* _________________________________________________________________*/
	std::cout << Y << "Span(1), a single number Span is not an array" << W;
	Span micro = Span(1);
	micro.addNumber(-1);
	try { micro.shortestSpan(); }
	catch (const std::exception &e) {std::cerr << e.what() << std::endl;}

	/* _________________________________________________________________*/
	std::cout << Y << "Now int MAX/MIN values" << W;
	Span macro = Span(3);
	macro.addNumber(INT_MAX);
	macro.addNumber(0);
	macro.addNumber(INT_MIN);
	std::cout << "superlong: " << macro.longestSpan() << std::endl;
	std::cout << "supershort: " << macro.shortestSpan() << std::endl;

	/* _________________________________________________________________*/
	std::cout << Y << "Now 10000 random numbers" << W;
	Span sp = Span(10001);
	std::vector<int> vec;
	for (int i = 1; i < 1000; i++){
		vec.push_back(rand() % 100000);}
	try { sp.addNumber(vec.begin(), vec.end()); }
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;

	/* _________________________________________________________________*/
    std::cout << R << "\nTESTING LEAKS:" << W;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
	return (0);
}
