#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream> // std

#include "../classes/ScalarConverter.hpp"

#include <string> // stol(), stof(), stod
#include <iomanip> // setprecision()
#include <cctype> // isdigit()

enum e_type {
	e_char = 0,
	e_int,
	e_long,
	e_float,
	e_double,
	e_signed,
	e_impossible,
	e_nondisplayable
};

int checkRange(std::string value);
int checkDigits(std::string value);
bool checkPseudos(std::string input);
bool checkImpossible(std::string input);

e_type findType(std::string input);
void printType(e_type type);

void printInt(std::string input, e_type type);
void printChar(std::string input, e_type type);
void printDouble(std::string input, e_type type);
void printFloat(std::string input, e_type type);

#endif