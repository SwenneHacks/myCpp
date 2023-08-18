#include "ScalarConverter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <cctype> // isdigit()

#define COLOR "\e[0;35m"
#define RESET "\e[0m"

ScalarConverter::ScalarConverter() 
{
    std::cerr << "using static class" << std::endl;
}

char ScalarConverter::CastChar(std::string input)
{
    long value = stol(input);
    return static_cast<char>(value);
}

int ScalarConverter::CastInt(std::string input)
{
    int value = stoi(input);
    return static_cast<int>(value);
}


float ScalarConverter::CastFloat(std::string input)
{
    float value = stof(input);
    return static_cast<float>(value);
}

double ScalarConverter::CastDouble(std::string input)
{
    double value = stod(input);
    return static_cast<double>(value);
}
