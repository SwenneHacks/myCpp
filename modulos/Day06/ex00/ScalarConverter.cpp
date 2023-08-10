#include "ScalarConverter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <cctype> // isdigit()

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

std::string ScalarConverter::CastChar(long double value, bool literals)
{
	try {
		if (literals == true)
			throw(Impossible());
		else if(value < 32 || value > 126)
			throw(NonDisplayable());
		else
			std::cout <<"'"<< static_cast<char>(value) <<"'"<< std::endl; // adding single quotes
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}

std::string ScalarConverter::CastInt(long double value, bool literals)
{
	try {
		if (value > INT_MAX || value < INT_MIN || literals == true)
			throw (Impossible());
		else
			std::cout << static_cast<int>(value) << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}


std::string ScalarConverter::CastFloat(long double value, int digits)
{
	try {
        std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<float>(value) << "f" << std::endl; // ading f at the end
    }
    catch (const std::exception& e) { throw (Impossible()); }

}

std::string ScalarConverter::CastDouble(long double value, int digits)
{
	try {
        std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<double>(value) << std::endl;
    }
    catch (const std::exception& e) { throw (Impossible()); }
}
