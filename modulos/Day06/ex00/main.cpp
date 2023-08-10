/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:41 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/10 17:02:49 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

#include <limits> // INT_MAX INT_MIN 
#include <iostream> // cout readi
#include <string> // compare()
#include <iomanip> // setPrecision (for floats)
#include <exception> // invalid_argument

#include "ScalarConverter.hpp"

enum e_type {
	e_char = 0,
	e_int,
	e_float,
	e_double,
	e_impossible,
	e_nondisplayable
};

static bool checkPseudos(std::string input)
{
	if (std::string(input) == "-inff"
		|| std::string(input) == "+inff"
		|| std::string(input) == "nanf"
		|| std::string(input) == "nan"
		|| std::string(input) == "-inf"
		|| std::string(input) == "+inf")
			return true;
	else
		return false;
}

static bool checkImpossible(std::string input)
{
	if (input.empty())
		return true;
	if (input.length() > 1)
	{
		if (std::isdigit(input[0]) == false)
		{
			if (checkPseudos(input) == true)
				return false;
			else
				return true;
		}
		if (input.front() == '-' || input.front() == '+' || input.back() = 'f')
			return false;	
		for (int i; i = 1; i++)
		{
			if (std::isdigit(input[i]))
				continue;
		if (input.find('.') != std::string::npos)
			return e_double;
			else
				return e_impossible;
		}
	}
	return false;
}

e_type findType(std::string input)
{
	if (checkImpossible(input) == true)
		return e_impossible;
	if (input.length() == 1)
	{
		if (!std::isdigit(input[0]))
			return e_char;
		else
			return e_int;
	}
	if (input.length() > 1)
	{
		if (checkPseudos(input) == true)
		{
			if (input.length() == 3)
				return e_double;
			if (input.length() == 5)
				return e_float;
			if (input.length() == 4){
				if (input.compare("nanf"))
					return e_float;
				else
					return e_double;
			}
		}
		if (input.front() == '-' || input.front() == '+')
		{
			for (int i; i = 1; i++)
			{
				if (std::isdigit(input[i]))
					continue;
				else
					return e_impossible;
			}
			
		}	
		if (input.back() = 'f')
			return e_float;	
		if (input.find('.') != std::string::npos)
			return e_double;
	}
}


static int checkDigits(std::string value)
{
	bool check_dot = false;
	int counter = 0;

	for (unsigned long i = 0; value.length() > i; i++)
	{
		if (isdigit(value[i]) == false && value[i] != '.')
			break ;
		while (!check_dot && value[i] != '.')
			i++;
		check_dot = true;
		counter++;
	}
	counter--;
	return (counter);
}

void startConverter(std::string input)
{
	int type = findType(input);
	long double value = std::stol(input);
	try {
        if (input.find('.') == std::string::npos) 
		{
            int value = std::stoi(input);
            std::cout << "Input type: int" << std::endl
            << "Char: " << ScalarConverter::CastChar(value, checkPseudos(input)) << std::endl
            << "Float: " << ScalarConverter::CastFloat(value, checkDigits(input)) << std::endl
            << "Double: " << ScalarConverter::CastDouble(value, checkDigits(input)) << std::endl;
        } 
		else 
		{
            double value = std::stod(input);
            std::cout << "Input type: double" << std::endl
            << "Char: " << ScalarConverter::CastChar(value, checkPseudos(input)) << std::endl
            << "Int: " << ScalarConverter::CastInt(value, checkPseudos(input)) << std::endl
            << "Float: " << ScalarConverter::CastFloat(value, checkDigits(input)) << std::endl;
        }
    } 
	catch (const std::exception& e) { std::cout << "Error: Invalid input" << std::endl;}
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