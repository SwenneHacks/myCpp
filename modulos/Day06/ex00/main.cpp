/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:41 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/11 20:00:37 by swofferh      ########   odam.nl         */
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
		for (int i = 1; i < checkDigits(input); i++)
		{
			if (std::isdigit(input[i]))
				continue;
			if (i == checkDigits(input))
				return false;
			else
				return true;
		}
		if (input.find('.') == 1 || input.back() == 'f' ||
			input.front() == '+' || input.front() == '-')
				return false;
	}
	return false;
}

e_type findType(std::string input)
{
	if (checkImpossible(input) == true)
		return e_impossible;
	if (input.length() == 1)
	{
		if (std::isdigit(input[0]) == false)
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
		for (int i = 1; i < checkDigits(input); i++)
		{
			if (std::isdigit(input[i]))
				continue;
			else
				return e_impossible;
		}
		if (input.find('.') == 1)
		{
			if (input.back() == 'f')
				return e_float;
			else
				return e_double;
		}
		if (stol(input) < INT_MAX)
			return e_int;
	}
	return e_nondisplayable;
}

static void printType(e_type type)
{
	std::cout << COLOR << "Type: " << RESET;
	switch(type) {
		case e_int: 
			std::cout << "INT" << std::endl;

			return;
		case e_char: 
			std::cout << "CHAR" << std::endl;
			
			return;
		case e_float: 
			std::cout << "FLOAT" << std::endl;
			
			return;
		case e_double: 
			std::cout << "DOUBLE" << std::endl;

			return;
		case e_impossible: 
			std::cout << "STRING" << std::endl;
			
			return;
		case e_nondisplayable: 
			std::cout << "???" << std::endl;
			
			return;
	}
}

static void startConverter(std::string input)
{
	e_type type = findType(input);
	long double value = stol(input);

	printType(type);
	if (type < 3) {
		ScalarConverter::CastChar(value);
		ScalarConverter::CastInt(value);
		ScalarConverter::CastFloat(value, checkDigits(input));
		ScalarConverter::CastDouble(value, checkDigits(input));
	}
	else
		std::cout << "Not a scalar" << std::endl;
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
		std::cout << std::endl
		<< "Usage: [./program] [value]" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string input = argv[1];
    startConverter(input);
	return 0;
}