/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 19:34:22 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/10 21:03:52 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <vector>

int test(void)
{
	int i = -5;

	std::cout << "\nTESTING DEQUE:\n" << std::endl;
	std::deque<int> deq;

    deq.push_back(-1);
    deq.push_back(-3);
    deq.push_back(-5);
    deq.push_back(55);
    
    try { std::cout << *(easyfind(deq, i)) << " [found]" << std::endl; }
    catch (const std::exception &e) { 
        std::cerr << "[not found]" << std::endl; }

	std::cout << "\nTESTING VECTOR:\n" << std::endl;
	std::vector<int> vec;
    
    vec.push_back(-1);
    vec.push_back(-1);
    vec.push_back(-1);
    vec.push_back(-1);
	
    try { std::cout << *(easyfind(vec, i)) << " [found]" << std::endl; }
    catch (const std::exception &e) { 
        std::cerr << "[not found]" << std::endl; }
    
    return (0);
}

int		main(int ac, char **av)
{
	test();
    std::cout << "\nTESTING LEAKS:\n\n";
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

