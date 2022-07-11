/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 15:58:44 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/20 16:44:22 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <vector>

template<typename T>
void printArr(T arr)
{
	typename T::iterator iter = arr.begin();
	typename T::iterator end = arr.end();

	std::cout << "SIZE " << arr.size() << " : ";
	for (; iter != end; iter++)
	{
		std::cout << *iter;
		if (iter + 1 != end)
			std::cout << ",";
	}
	std::cout << std::endl;
}

template <typename T>
void check(T container, int findme, std::string container_name)
{
	try
	{
		std::cout << container_name;
		easyfind(container, findme);
		std::cout << " does contain " << findme << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << findme << std::endl;
	}
}

int	main(void)
{
	std::deque<int> deq;
	int findme = -5;

	std::cout << "TESTING DEQUE:\n" << std::endl;

	check(deq, findme, "DEQ");
	printArr(deq);
	for (int i = 0; i < abs(findme); i++)
		deq.push_back(i * ((findme > 0) ? 1 : -1));
	check(deq, findme, "DEQ");
	printArr(deq);
	deq.push_back(findme);
	check(deq, findme, "DEQ");
	printArr(deq);

	std::cout << "\nTESTING VECTOR:\n" << std::endl;

	std::vector<int> vec;
	check(vec, findme, "VEC");
	printArr(vec);
	for (int i = 0; i < abs(findme); i++)
		vec.push_back(i * ((findme > 0) ? 1 : -1));
	check(vec, findme, "VEC");
	printArr(vec);
	vec.push_back(findme);
	check(vec, findme, "VEC");
	printArr(vec);
	return (0);
}
