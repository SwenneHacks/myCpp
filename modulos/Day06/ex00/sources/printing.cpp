#include "converter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // std::setprecision(int 'number_of_decimals') 
#include <cctype> // isdigit()

#define COLOR "\e[0;35m"
#define RESET "\e[0m"

void printChar(std::string input, e_type type)
{
	std::cout << COLOR << "char:	" << RESET;
	try {
		if (type == e_impossible || checkPseudos(input) == true)
			throw(Impossible());
		if (stol(input) < 32 || stol(input) > 126)
			throw(NonDisplayable());
		else
			std::cout <<"'"<< ScalarConverter::CastChar(input)  
			<<"'"<< std::endl; // adding single quotes
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}

void printInt(std::string input, e_type type)
{

	(void)type;
	std::cout << COLOR << "int:	" << RESET;
	try {
		if (type == e_impossible || checkPseudos(input) == true)
			throw(Impossible());
		if (stol(input) > INT_MAX || stol(input) < INT_MIN)
			throw (NonDisplayable());
		else
			std::cout << ScalarConverter::CastInt(input) 
			<< std::endl; // checking for MAX/MIN
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}

void printFloat(std::string input, e_type type)
{
	int digits = checkRange(input);
	std::cout << COLOR << "float:	" << RESET;
	try {
		if (type == e_impossible)
			throw(Impossible());
		if (input.length() > 6)
			throw (NonDisplayable());
		std::cout << std::fixed << std::setprecision(digits) 
		<< ScalarConverter::CastFloat(input);
		std::cout << "f" << std::endl; // ading f and precision
    }
    catch (const std::exception& e) { std::cerr << e.what() << std::endl; }

}

void printDouble(std::string input, e_type type)
{
	int digits = checkRange(input);
	std::cout << COLOR << "double:	" << RESET;
	try {
		if (type == e_impossible)
			throw(Impossible());
		std::cout << std::fixed << std::setprecision(digits) 
		<< ScalarConverter::CastDouble(input);
		// if (input.find('.') == std::string::npos)
		// 	std::cout << ".0";
		std::cout << std::endl;
    }
    catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
}

/**
 * @brief precision in floats
 * The data type float has 24 bits of precision. 

This is equivalent to only about 7 decimal places. 
(The rest of the 32 bits are used for the sign and size of the number.)
 */

