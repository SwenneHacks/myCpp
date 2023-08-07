/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:41 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/07 18:03:37 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

#include <limits> // INT_MAX INT_MIN 
#include <iostream> // cout readi
#include <iomanip> // setPrecision (for floats)
#include <exception> // invalid_argument

#include "ScalarConverter.hpp"

void startConverter(std::string input)
{
	long double value = std::stol(input); // to ascii
	ScalarConverter::CastChar(value, ScalarConverter::CheckLiterals(input));
	ScalarConverter::CastInt(value, ScalarConverter::CheckLiterals(input));
	value = std::stof(input); // to float
	ScalarConverter::CastFloat(value, ScalarConverter::CheckDigits(input));
	value = std::stof(input); // to float
	ScalarConverter::CastDouble(value, ScalarConverter::CheckDigits(input));
}

void testConverter()
{
	std::cout << "TESTING CHARS:" << std::endl;
	startConverter("a");
	startConverter("b");
	startConverter("c");
	std::cout << "TESTING INTS:" << std::endl;
	startConverter("99");
	startConverter("99");
	startConverter("255");
	std::cout << "TESTING FLOATS:" << std::endl;
	startConverter("2.55");
	startConverter("-255.6666");
	startConverter("0.6666f");
	std::cout << "TESTING DOUBLES:" << std::endl;
	startConverter("0.6666");
	startConverter("0.6666");
	startConverter("0.6666");
}

int	main(int argc, char argv[1])
{
	if (argc != 2)
		return 1;
	testConverter();
	return 0;
}