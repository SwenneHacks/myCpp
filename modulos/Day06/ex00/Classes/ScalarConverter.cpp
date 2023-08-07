#include "ScalarConverter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <iostream> 

#define COLOR "\e[0;32m"
#define RESET "\e[0m"

static std::string INTRO = COLOR "[ScalarConverter] " RESET;

static bool CheckLiterals(std::string input)
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

static int CheckDigits(std::string value)
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

ScalarConverter::ScalarConverter()
{std::cout << INTRO <<"Constructor called" << std::endl;}

ScalarConverter::~ScalarConverter()
{std::cout << INTRO << "Destructor called" << std::endl;}

ScalarConverter::ScalarConverter(std::string input)
{std::cout << INTRO << "Result for: " << input << std::endl;

	long double value = std::stol(input); // to ascii
	CastChar(value, CheckLiterals(input));
	CastInt(value, CheckLiterals(input));
	long double value = std::stof(input); // to float
	CastFloat(value, CheckDigits(input));
	CastDouble(value, CheckDigits(input));
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& ref)
{std::cout << INTRO << "Operator called" << std::endl;}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{std::cout << INTRO << "Copy construtor called" << std::endl;
	*this = copy;
	return ;
}

static void CastChar(long double value, bool literals)
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

static void CastInt(long double value, bool literals)
{
	try {
		if (value > INT_MAX || value < INT_MIN || literals == true)
			throw (Impossible());
		else
			std::cout << static_cast<int>(value) << std::endl;
	}
	catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
}


static void CastFloat(long double value, int digits)
{
	try {
        std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<float>(value) << "f" << std::endl; // ading f at the end
    }
    catch (const std::exception& e) { throw (Impossible()); }

}

static void CastDouble(long double value, int digits)
{
	try {
        std::cout << std::fixed << std::setprecision(digits) 
		<< static_cast<double>(value) << std::endl;
    }
    catch (const std::exception& e) { throw (Impossible()); }
}
