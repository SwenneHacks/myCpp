/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:41 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/09 18:41:03 by swofferh      ########   odam.nl         */
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
	int type = ScalarConverter::FindType(input);
	try {
        if (input.find('.') == std::string::npos) {
            int value = std::stoi(input);
            std::cout << "Input type: int\n";
            std::cout << "Char: " << static_cast<char>(value) << '\n';
            std::cout << "Float: " << static_cast<float>(value) << '\n';
            std::cout << "Double: " << static_cast<double>(value) << '\n';
        } else {
            double value = std::stod(input);
            std::cout << "Input type: double\n";
            std::cout << "Char: " << static_cast<char>(value) << '\n';
            std::cout << "Int: " << static_cast<int>(value) << '\n';
            std::cout << "Float: " << static_cast<float>(value) << '\n';
        }
    } catch (const std::exception& e) {
        std::cout << "Error: Invalid input\n";
}
	ScalarConverter::FindType(input);
	// make switch case here:
	long double value = std::stol(input); 
	ScalarConverter::CastChar(value, ScalarConverter::CheckPseudos(input));
	ScalarConverter::CastInt(value, ScalarConverter::CheckPseudos(input));
	value = std::stof(input); 
	ScalarConverter::CastFloat(value, ScalarConverter::CheckDigits(input));
	value = std::stof(input); 
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

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments. Usage: ./program <value>\n";
		return (EXIT_FAILURE);
	}
	std::string input = argv[1];
    startConverter(input);
	return 0;
}