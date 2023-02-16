/*
	CPP PISCINE - 42 NETWORK
		STUDENT: swofferh
*/
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm> // find (finds the first element satisfying specific criteria)
#include <iostream>
#include <iterator>

static const std::string Y = "\x1b[33m";
static const std::string D = "\x1b[31m";
static const std::string R = "\x1b[0m";
static const std::string N = "\n";

//looks for ints
template<typename T>
typename T::iterator easyfind(T container, int findme)
{
	typename T::iterator array;
	array = std::find(container.begin(), container.end(), findme);
	if (array == container.end())
		throw std::exception();
	return(array);
}

//looks for strings
template<typename T>
typename T::iterator stringfind(T container, std::string findme)
{
	typename T::iterator array;
	array = std::find(container.begin(), container.end(), findme);
	if (array == container.end())
		throw std::exception();
    return(array);
}

#endif
