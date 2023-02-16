/*
	CPP PISCINE - 42 NETWORK
		STUDENT: swofferh
*/
#include "easyfind.hpp"

#include <unistd.h> //sleep
#include <limits.h> //intmax
#include <iostream>

#include <vector>
#include <deque>
#include <set>

/* _______________________ TEST UTILS __________________________ */


template<class T>
void PrintContainer(T container){
	typename T::iterator Print = container.begin();
	for (; Print != container.end(); Print++) 
	{ std::cout << *Print << std::endl; }
}

template<class T>
void CheckException(T container){
    try { 
		int find = 1;
		std::cout << D << "Value to be found: 1  ";
		*(easyfind(container, find)) ;
		{ std::cout << Y << "[found it]" << R << std::endl; }}
    catch (const std::exception &e) 
	{ std::cerr << Y << "[not found]" << R << std::endl; }
}

/* _______________________ START TESTING __________________________ */

template<class T>
void test_set(T ms){
	std::cout << N << "TESTING SET:" << N;
    ms.insert(-1);
    ms.insert(-3);
    ms.insert(-5);
	ms.insert(-99);
    ms.insert(-123);
    ms.insert(55);
	ms.insert(1);
	PrintContainer(ms);
	CheckException(ms);
}

template<class T>
void test_vector(T vec){
	std::cout << N << "TESTING VECTOR:" << N;
    vec.push_back(-65);
	vec.push_back(3);
    vec.push_back(-53);
    vec.push_back(9);
    vec.push_back(-12345);
	vec.push_back(550505);
    vec.push_back(-1);
	PrintContainer(vec);
    CheckException(vec);
}

template<class T>
void test_strings(T array){
	std::cout << N << "TESTING STRINGS:" << std::endl;
	array.push_back("hello");
	array.push_back("find");
    array.push_back("this");
    array.push_back("one");
    array.push_back("bye");
	PrintContainer(array);
	try { 
		std::string find;
		std::cout << N << "Choose the value to be found: ";
		std::cin >> find;
		stringfind(array, find);
		{ std::cout << Y << " [found it]" << R << std::endl; }}
    catch (const std::exception &e) 
		{ std::cerr << Y << " [not found]" << R << std::endl; }
}

/* _______________________ MAIN & LEAKS __________________________ */

int leaks(char **av)
{
	std::cout << D << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
	return(0);
}

int		main(int ac, char **av)
{
	std::vector<int> vec;
	test_vector(vec);
	std::set<int> ms;
	test_set(ms);
	std::vector<std::string> array;
	test_strings(array);

	(void)ac;
	return(leaks(av));
}
