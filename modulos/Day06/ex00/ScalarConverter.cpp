#include "ScalarConverter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <cctype> // isdigit()

#define COLOR "\e[0;35m"
#define RESET "\e[0m"

void ScalarConverter::CastChar(long double value)
{
	std::cout << COLOR << "char: " << RESET;
	try {
		if (value < 32 || value > 126)
			throw(NonDisplayable());
		else
			std::cout <<"'"<< static_cast<char>(value) 
			<<"'"<< std::endl; // adding single quotes
	}
	catch(const std::exception& e) { throw(Impossible());}
}

void ScalarConverter::CastInt(long double value)
{
	std::cout << COLOR << "int: " << RESET;
	try {
		if (value > INT_MAX || value < INT_MIN)
			throw (NonDisplayable());
		else
			std::cout << static_cast<int>(value) 
			<< std::endl; //checking for int max
	}
	catch(const std::exception& e) { throw(Impossible()); }
}


void ScalarConverter::CastFloat(long double value, int digits)
{
    std::cout << COLOR << "float: " << RESET;
	try {
		std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<float>(value) 
		<< "f" << std::endl; // ading f and precision
    }
    catch (const std::exception& e) { throw (Impossible());}

}

void ScalarConverter::CastDouble(long double value, int digits)
{
	std::cout << COLOR << "double: " << RESET;
	try {
		std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<double>(value) << std::endl;
    }
    catch (const std::exception& e) { throw (Impossible());}
}
