#include "converter.hpp"

#define NOT_PRESENT std::string::npos

bool checkPseudos(std::string input)
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

int checkDigits(std::string value)
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

int checkDot(std::string value)
{
	int counter = 0;
	for (unsigned long i = 0; value.length() > i; i++)
	{
		if (isdigit(value[i]) == false && value[i] != '.')
			break ;
		while (value[i] != '.')
			i++;
		if (value[i] == '.')
			counter++;
	}
	return (counter);
}

int checkRange(std::string value)
{
	unsigned long end_string = value.length();
	bool check_dot = false;
	int counter = 0;

	for (unsigned long i = 0; i < end_string; i++)
	{
		if (value[0] == '+' || value[0] == '-')
			i++;
		while (!check_dot && value[i] != '.')
			i++;
		if (value[i] == '.'){
			check_dot = true;
			i++;
		}
		if (check_dot == true)
			counter++;
	}
	if (value[end_string-1] == 'f')
		counter--;
	return (counter);
}

bool checkImpossible(std::string input)
{
	if (input.empty())
		return true;
	if (input.length() > 1)
	{
		if (input.find('.') != NOT_PRESENT 
			|| input.back() == 'f' 
			|| input.front() == '+' 
			|| input.front() == '-')
				return false;
		if (std::isdigit(input[1]) == false)
		{
			if (checkPseudos(input) == true)
				return false;
			else
				return true;
		}
		for (unsigned long i = 1; i < input.length(); i++)
		{
			if (std::isdigit(input[i]))
				continue;
			else
				return true;
		}
	}
	return false;
}

e_type	checkNumber(std::string input)
{
	if (input.front() == '+' || input.front() == '-')
		return e_signed;
	for (unsigned long i = 1; i < input.length(); i++)
	{
		if (std::isdigit(input[i]))
			continue;
		else
			return e_impossible;
	}
	return e_nondisplayable;
}

e_type findType(std::string input)
{
	if (checkImpossible(input) == true)
		return e_impossible;
	if (input.length() == 1)
	{
		if (std::isdigit(input[0]) == false)
			return e_char;
		else
			return e_int;
	}
	if (input.length() > 1)
	{
		if (checkPseudos(input) == true)
		{
			if (input.length() == 3)
				return e_double;
			if (input.length() == 5)
				return e_float;
			if (input.length() == 4){
				if (input.compare("nanf"))
					return e_float;
				else
					return e_double;
			}
		}
		if (input.find('.') != NOT_PRESENT)
		{
			if (input.back() == 'f')
				return e_float;
			else
				return e_double;
		}
		if (input.length() > 11)
			return e_long;
		if (stol(input) < INT_MAX 
			|| stol(input) > INT_MIN)
			return e_int;
	}
	return e_nondisplayable;
}


/**
 * @brief numerical data types

( INT, FLOATS, DOUBLES )
PRIMITIVE BUILTIN TYPES:

intigers (4bytes)
floats (4bytes)
doubles (8bytes)

MODIFIERS:

signed (+ - takes one bit)
unsigned ( above 0 )
short ( 2 bytes )
float ( 4 bytes )
double ( 8 bytes )
long ( 8 bytes - 12 bytes)

ARBITRARY PRECISION:

double = 64 bit [1][ 11 bit exponent ].[ 52 bit significand ] =  6-7 significant digits
float  = 32 bit [1][ 8 bit exponent ].[ 23 bit significand ] = 15-16 significant digits

 */