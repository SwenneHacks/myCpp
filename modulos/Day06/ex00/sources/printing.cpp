#include "scalar_program.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <cctype> // isdigit()

#define COLOR "\e[0;35m"
#define RESET "\e[0m"

void printChar(std::string input)
{
	long double value = stol(input);
	std::cout << COLOR << "char:	" << RESET;
	try {
		if (value < 32 || value > 126)
			throw(NonDisplayable());
		else
			std::cout <<"'"<< static_cast<char>(value) 
			<<"'"<< std::endl; // adding single quotes
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}

void printInt(std::string input)
{
	long value = stol(input);
	std::cout << COLOR << "int:	" << RESET;
	try {
		if (value > INT_MAX || value < INT_MIN)
			throw (NonDisplayable());
		else
			std::cout << static_cast<int>(value) 
			<< std::endl; //checking for int max
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}


void printFloat(std::string input)
{
    float value = stof(input);
	int digits = checkRange(input);
	std::cout << digits << std::endl;
	std::cout << COLOR << "float:	" << RESET;
	try {
		if (input.length() > 8)
			throw (NonDisplayable());
		std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<float>(value);
		if (input.find('.') == std::string::npos)
			std::cout << ".0";
		std::cout << "f" << std::endl; // ading f and precision
    }
    catch (const std::exception& e) { std::cerr << e.what() << std::endl; }

}

void printDouble(std::string input)
{
	double value = stod(input);
	int digits = checkRange(input);
	std::cout << COLOR << "double:	" << RESET;
	try {
		std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<double>(value);
		if (input.find('.') == std::string::npos)
			std::cout << ".0";
		std::cout << std::endl;
    }
    catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
}
