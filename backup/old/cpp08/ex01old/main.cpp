/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 21:08:55 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 14:07:34 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	test(void)
{
	std::cout << "\n[Now testing basic functionality (given main)]" << std::endl;
	Span other = Span(5);
	other.addNumber(5);
	other.addNumber(3);
	other.addNumber(17);
	other.addNumber(9);
	other.addNumber(11);
	std::cout << "SHORTEST: " << other.shortestSpan() << std::endl;
	std::cout << "LONGEST: " << other.longestSpan() << std::endl;

	std::cout << "\n[Now adding element to full array]" << std::endl;
	try { other.addNumber(-4); }
	catch (const std::exception &e) {std::cerr << e.what() << std::endl;}

	std::cout << "\n[Now small array]" << std::endl;
	Span micro = Span(1);
	micro.addNumber(-1);
	try { micro.shortestSpan(); }
	catch (const std::exception &e) {std::cerr << e.what() << std::endl;}

	std::cout << "\n[Now empty array]" << std::endl;
	try { Span empty = Span(0); }
	catch (const std::exception &e) {std::cerr << e.what() << std::endl;}

	std::cout << "\n[Now next level test MAX/MIN values]" << std::endl;
	Span macro = Span(6);
	macro.addNumber(INT_MAX);
	macro.addNumber(INT_MIN);
	std::cout << "superlong: " << macro.longestSpan() << std::endl;
	std::cout << "supershort: " << macro.shortestSpan() << std::endl;

	std::cout << "\n[Now super next level 10000]" << std::endl;
	Span sp = Span(10000);
	std::vector<int> vec;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++){
		vec.push_back(rand() % 10000);}
	try { sp.addNumber(vec.begin(), vec.end()); }
	catch (std::exception& e) {std::cout << "failed: " << e.what() << std::endl;}
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;

	return 0;
}

int		main(int ac, char **av)
{
	test();
    std::cout << "\nTESTING LEAKS:\n";
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