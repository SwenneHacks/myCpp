/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:41 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/23 11:35:03 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

#include <limits> // INT_MAX INT_MIN 
#include <iostream> // cout readi
#include <string> // compare()
#include <sstream> // ostream (for chars)
#include <iomanip> // setPrecision (for floats)
#include <exception> // invalid_argument
#include "converter.hpp"

void printType(e_type type)
{
	std::cout << COLOR << "Type:	" << RESET;
	switch(type) {
		case e_char: 
			std::cout << "CHAR" << std::endl;
			return;
		case e_int: 
			std::cout << "INT" << std::endl;
			return;
		case e_float: 
			std::cout << "FLOAT" << std::endl;
			return;
		case e_double: 
			std::cout << "DOUBLE" << std::endl;
			return;
		case e_long: 
			std::cout << "LONG" << std::endl;
			return;
		case e_signed: 
			std::cout << "SIGNED" << std::endl;
			return;
		case e_impossible: 
			std::cout << "STRING" << std::endl;
			return;
		case e_nondisplayable: 
			std::cout << "???" << std::endl;
			return;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2){
		std::cout << std::endl
		<< "Usage: [./program] [value]" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string input = argv[1];
	std::cout << "Input:	[" << input << "]" << std::endl;
	e_type type = findType(input);
	printType(type);
	try {
		if (type == e_char){
			char c = input.front();
			std::stringstream ss;
			long double num = static_cast<char>(c);
			ss << num;
			input = ss.str();
		}
		printChar(input, type);
		printInt(input, type);
		printFloat(input, type);
		printDouble(input, type);
	}
	catch (const std::exception& e) { std::cout << e.what() << std::endl; }
	return 0;
}