#include "ScalarConverter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <cctype> // isdigit()

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

bool ScalarConverter::CheckImpossible(std::string input)
{
	if (input.empty())
		return true;
	if (input.length() > 5)
	{
		if (std::isdigit(input[0]) == false)
			return false;
		if (ScalarConverter::CheckPseudos(input) == true)
			return false;
		return true;
	}
	else
		return false;
}

int ScalarConverter::FindType(std::string input)
{
	int type = 0;
	if (ScalarConverter::CheckImpossible(input) == true)
		type = e_impossible;
	if (input.length() == 1)
	{
		if (std::isdigit(input[0]) == true)
			type = e_int;
		else
			type = e_char; // from 0 to 9, non displayable
	}
	if (input.front() == '-' || input.front() == '+')
		type = e_int;
	else if (input.back() = 'f')
		type = e_float;
	else if (input.find('.') == std::string::npos)
		type = e_double;
	if (input.length() == 3)
		
	return type;
}

bool ScalarConverter::CheckPseudos(std::string input)
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

int ScalarConverter::CheckDigits(std::string value)
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

void ScalarConverter::CastChar(long double value, bool literals)
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

void ScalarConverter::CastInt(long double value, bool literals)
{
	try {
		if (value > INT_MAX || value < INT_MIN || literals == true)
			throw (Impossible());
		else
			std::cout << static_cast<int>(value) << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}


void ScalarConverter::CastFloat(long double value, int digits)
{
	try {
        std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<float>(value) << "f" << std::endl; // ading f at the end
    }
    catch (const std::exception& e) { throw (Impossible()); }

}

void ScalarConverter::CastDouble(long double value, int digits)
{
	try {
        std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<double>(value) << std::endl;
    }
    catch (const std::exception& e) { throw (Impossible()); }
}
