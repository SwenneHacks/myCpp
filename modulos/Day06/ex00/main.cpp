/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:41 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/07 11:10:36 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

#include <limits> // INT_MAX INT_MIN 
#include <iostream> // cout readi
#include <iomanip> // setPrecision (for floats)
#include <exception> // invalid_argument

#include "ScalarConverter.hpp"

void testClass()
{
	std::cout << "TESTING CHARS:" << std::endl;
	ScalarConverter("a");
	ScalarConverter("b");
	ScalarConverter("c");
	std::cout << "TESTING INTS:" << std::endl;
	ScalarConverter("99");
	ScalarConverter("99");
	ScalarConverter("255");
	std::cout << "TESTING FLOATS:" << std::endl;
	ScalarConverter("2.55");
	ScalarConverter("-255.6666");
	ScalarConverter("0.6666f");
	std::cout << "TESTING DOUBLES:" << std::endl;
	ScalarConverter("0.6666");
	ScalarConverter("0.6666");
	ScalarConverter("0.6666");
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;
	ScalarConverter(argv[1]);
	return 0;
}