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


/**
 * @brief static CAST
 * This is the simplest type of cast that can be used. It is a compile-time cast. 

It does things like implicit conversions between types (such as int to float, 
or pointer to void*), and it can also call explicit conversion functions.

Syntax of static_cast:
    static_cast <dest_type> (source);
    The return value of static_cast will be of dest_type.
 */